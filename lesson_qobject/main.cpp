#include <QCoreApplication>
#include <QtDebug>
#include <QObject>

#include "parent.hpp"
#include "son.hpp"
#include "counter.hpp"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Parent p;
    p.setObjectName("Parent");//设置对象名
    qInfo() << p.objectName();//读取对象名
    qInfo() << p.metaObject()->className();//读取类名

    Son s;
    s.setObjectName("Son");
    s.setParent(&p);//设置父对象

    s.startTimer(1000);

    SonEvent wakeup(SonEvent::WAKEUP);
    QCoreApplication::sendEvent(&s, &wakeup);

    SonEvent study(SonEvent::STUDY);
    QCoreApplication::sendEvent(&s, &study);

    if(nullptr != s.parent()){
        qInfo() << s.parent()->objectName();//读取父对象名
    }

    if(0 < p.children().length()) {
        Son *ps = static_cast<Son*>(p.children().at(0));//获取子对象
        qInfo() << ps->objectName();//读取子对象名
    }

    {//双向绑定
        Counter sender, receiver;

        QObject::connect(&sender, &Counter::countChanged, &receiver, &Counter::setCount);//第一种绑定语法, sender -> receiver
        QObject::connect(&receiver, SIGNAL(countChanged(int)), &sender, SLOT(setCount(int)));//第二种绑定语法, receiver -> sender

        sender.setCount(1);
        qInfo() << receiver.count();

        receiver.setCount(2);
        qInfo() << sender.count();
    }

    {//信号中转
        Counter sender, middler, receiver;

        QObject::connect(&sender, &Counter::countChanged, &middler, &Counter::countChanged);
        QObject::connect(&middler, &Counter::countChanged, &receiver, &Counter::setCount);

        sender.setCount(1);
        qInfo() << middler.count();//中转者的值不会改变
        qInfo() << receiver.count();
    }

    {//信号多对一
        Counter sender0, sender1, receiver;
        QObject::connect(&sender0, SIGNAL(countChanged(int)), &receiver, SLOT(setCount(int)));
        QObject::connect(&sender1, SIGNAL(countChanged(int)), &receiver, SLOT(setCount(int)));

        sender0.setCount(1);
        qInfo() << receiver.count();

        sender1.setCount(2);
        qInfo() << receiver.count();
    }

    {//信号一对多
        Counter sender, receiver0, receiver1;
        QObject::connect(&sender, &Counter::countChanged, &receiver0, &Counter::setCount);
        QObject::connect(&sender, &Counter::countChanged, &receiver1, &Counter::setCount);

        sender.setCount(1);
        qInfo() << receiver0.count();
        qInfo() << receiver1.count();
    }

    return a.exec();
}



