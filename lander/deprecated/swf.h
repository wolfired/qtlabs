#ifndef SWF_H
#define SWF_H

#include "dialog.h"

class Swf : public Dialog {
    Q_OBJECT

  public:
    explicit Swf(QWidget *parent = nullptr);
    ~Swf();

  private:
};

#endif // SWF_H
