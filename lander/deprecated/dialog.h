#ifndef DIALOG_H
#define DIALOG_H

#include <QAxWidget>

class Dialog : public QAxWidget {
  public:
    explicit Dialog(QWidget *parent = nullptr);

  protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
};

#endif // DIALOG_H
