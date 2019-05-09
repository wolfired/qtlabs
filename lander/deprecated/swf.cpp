#include "swf.h"

Swf::Swf(QWidget *parent) : Dialog(parent) {
    this->setControl(QString::fromUtf8("ShockwaveFlash.ShockwaveFlash"));
    this->setObjectName(QString::fromUtf8("_swf"));
    this->setProperty("geometry", QVariant(QRect(64, 64, 1024, 768)));
    this->dynamicCall("LoadMovie(int, QString&)", 0, "http://192.168.73.202:9090/WMainLoader.swf?username=1169");
}

Swf::~Swf() {}
