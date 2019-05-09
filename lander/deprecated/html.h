#ifndef HTML_H
#define HTML_H

#include "dialog.h"
#include "lander_aggregater.h"

class Html : public Dialog {
    Q_OBJECT

  public:
    explicit Html(QWidget *parent = nullptr);
    ~Html();

//    QAxAggregated *createAggregate();

private slots:
    void on_axWidget_DocumentComplete(IDispatch *pDisp, QVariant &URL);

  private:
//    LanderAggregater *_aggregater;
};

#endif // HTML_H
