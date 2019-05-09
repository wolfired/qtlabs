#ifndef LANDER_AGGREGATER_H
#define LANDER_AGGREGATER_H

//#include <Objsafe.h>
#include <QAxAggregated>

#include "lander_dochostuihandler.h"

class LanderAggregater : /*public IObjectSafety,*/ public QAxAggregated {
  public:
    LanderAggregater();

    long queryInterface(const QUuid &iid, void **iface);

   private:

};

#endif // LANDER_AGGREGATER_H
