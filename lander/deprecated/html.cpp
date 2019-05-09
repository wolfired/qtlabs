#include "html.h"

#include <QAxObject>
#include <QDebug>

Html::Html(QWidget *parent) : Dialog(parent) {
//    _aggregater = new LanderAggregater();

    this->setControl(QString::fromUtf8("{8856f961-340a-11d0-a96b-00c04fd705a2}"));
    this->setObjectName(QString::fromUtf8("_ie"));
    this->setProperty("geometry", QVariant(QRect(64, 64, 1024, 768)));
    this->dynamicCall("Navigate(const QString&)", "http://192.168.73.202:9090/WMainLoader.html?username=1169");
}

Html::~Html() {}

//QAxAggregated *Html::createAggregate() { return new LanderAggregater(); }

void Html::on_axWidget_DocumentComplete(IDispatch *pDisp, QVariant &URL){
    qDebug() << 1;
//    QAxObject *document = this->querySubObject("Document");
//    QAxObject *parentWindow = document->querySubObject("parentWindow");
//    QAxObject obj(new LanderDispatcher(), this);
//    parentWindow->dynamicCall("SaveCppObject(QAxObject*)", obj.asVariant());
}
