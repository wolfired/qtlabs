#ifndef HTML_HPP
#define HTML_HPP

#include <QAxObject>
#include <QUuid>
#include <QtDebug>

#include <MsHtmHst.h>

#include "AxWidget.hpp"
#include "DocHostUIHandler.hpp"


class Html : public AxWidget, public DocHostUIHandler {
    Q_OBJECT

public:
    explicit Html(QWidget *parent = nullptr) : AxWidget(parent) {
        this->setControl(QString::fromUtf8("{8856f961-340a-11d0-a96b-00c04fd705a2}"));
        this->setObjectName(QString::fromUtf8("_ie"));
        this->setProperty("geometry", QVariant(QRect(64, 64, 1024, 768)));
        this->dynamicCall("Navigate(const QString&)", "http://localhost/");
    }

    virtual ~Html() {
    }

//    virtual QAxAggregated *createAggregate() {
//        return new AxAggregated();
//    }

private slots:
    void on_axWidget_DocumentComplete(IDispatch *pDisp, QVariant &URL) {
        qDebug() << 1;
        QAxObject *document = this->querySubObject("Document");
        if(!document) {
            return;
        }

        ICustomDoc *doc2 = NULL;
        document->queryInterface(QUuid(IID_ICustomDoc), (void**)&doc2);
        if (doc2) {
            doc2->SetUIHandler(this);
        }
    }
};

#endif // HTML_HPP
