#ifndef SONEVENT_HPP
#define SONEVENT_HPP

#include <QEvent>

class SonEvent : public QEvent {
public:
    static const Type WAKEUP;
    static const Type STUDY;

    SonEvent(Type type) : QEvent(type) {
    }
};

const QEvent::Type SonEvent::WAKEUP = static_cast<QEvent::Type>(QEvent::registerEventType(QEvent::User+100));
const QEvent::Type SonEvent::STUDY = static_cast<QEvent::Type>(QEvent::registerEventType(QEvent::User+100));

#endif // SONEVENT_HPP
