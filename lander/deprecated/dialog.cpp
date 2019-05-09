#include "dialog.h"

#include <QApplication>
#include <QDebug>
#include <QDir>
#include <QMouseEvent>
#include <QPainter>

Dialog::Dialog(QWidget *parent) : QAxWidget(parent) {
    //    setAttribute(Qt::WA_TranslucentBackground, true);
    //    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);
}

void Dialog::paintEvent(QPaintEvent *event) {
    //    QPainter painter(this);

    //    QPainterPath path;
    //    path.setFillRule(Qt::WindingFill);
    //    QRect rect = QRect(0, 0, this->width(), this->height());
    //    path.addRoundRect(rect,10,10);

    //    painter.setRenderHint(QPainter::Antialiasing, true);
    //    painter.fillPath(path, QBrush(Qt::white));
    //    painter.setPen(Qt::gray);
    //    painter.drawPath(path);

    //    painter.drawLine(rect.left()+40, 60, rect.right()-40, 60);
    //    painter.drawLine(rect.left()+40, rect.bottom()-70, rect.right()-40, rect.bottom()-70);

    //    QPixmap pix;
    //    pix.load(QApplication::instance()->applicationDirPath() + QDir::separator() + "images" + QDir::separator() + "background.png");
    //    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //    painter.translate(100,100); //将（100，100）设为坐标原点
    //    painter.drawPixmap(0,0,100,100,pix);
}
