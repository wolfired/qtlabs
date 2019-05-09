#ifndef SON_HPP
#define SON_HPP

#include <QObject>
#include <QTimerEvent>
#include <QtDebug>

#include "son_event.hpp"

class Son : public QObject {
public:
    void onWakeup(SonEvent *event) {
        qInfo() << "wakeup";
        qInfo() << event->type();
    }

    void onStudy(SonEvent *event) {
        qInfo() << "study";
        qInfo() << event->type();
    }

    bool event(QEvent *event){
        if(SonEvent::WAKEUP == event->type()) {
            onWakeup(static_cast<SonEvent*>(event));
        }else if(SonEvent::STUDY == event->type()) {
            onStudy(static_cast<SonEvent*>(event));
        }

        return QObject::event(event);
    }

protected:
    void timerEvent(QTimerEvent *event){
        qInfo() << event->timerId();
    }
};

#endif // SON_HPP
