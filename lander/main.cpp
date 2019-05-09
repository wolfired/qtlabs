#include <QApplication>
#include <QDebug>

#include "Html.hpp"
#include "web.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

//    Web web;
//    web.show();

    Html html;
    html.show();

//    Swf swf;
//    swf.show();

    return a.exec();
}
