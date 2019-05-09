#include "lander_aggregater.h"
#include "lander_dochostuihandler.h"

LanderAggregater::LanderAggregater() { }

long LanderAggregater::queryInterface(const QUuid &iid, void **iface) {
    *iface = 0;
//    if (iid == IID_IObjectSafety) {
        *iface = static_cast<QAxAggregated *>(this);
//    } else {
//        return E_NOINTERFACE;
//    }

    return S_OK;
}
