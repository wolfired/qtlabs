#ifndef AXWIDGET_H
#define AXWIDGET_H

#include <QAxWidget>

class AxWidget : public QAxWidget {
public:
    explicit AxWidget(QWidget *parent = nullptr):QAxWidget(parent ) {
    }

    virtual ~AxWidget() {
    }
};

#endif // AXWIDGET_H
