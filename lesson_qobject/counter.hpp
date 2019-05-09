#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <QObject>

class Counter : public QObject {
    Q_OBJECT//只要用到 signals, slots or properties 都要在头!文!件!中写入此宏

public:
    Counter() {
        _count = 0;
    }

    int count() const {
        return _count;
    }

public slots://槽由程序员自行实现
    void setCount(int value) {
        if(_count == value) {
            return;
        }
        _count = value;
        emit countChanged(_count);
    }

signals://信号由QT框架实现
    void countChanged(int value);

private:
    int _count;
};

#endif // COUNTER_HPP
