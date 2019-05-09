#ifndef AXAGGREGATED_H
#define AXAGGREGATED_H

#include <QUuid>
#include <QAxAggregated>
#include <ObjSafe.h>
#include <Unknwn.h>

class AxAggregated : public QAxAggregated, public IUnknown {
public:
    explicit AxAggregated() {
    }

    virtual ~AxAggregated() {
    }

    virtual long queryInterface(const QUuid &iid, void **iface) {
//        *iface = 0;
//        if (iid == IID_IObjectSafety) {
            *iface = static_cast<QAxAggregated *>(this);
//        } else {
//            return E_NOINTERFACE;
//        }
//        AddRef();
        return S_OK;
    }

    QAXAGG_IUNKNOWN
};

#endif // AXAGGREGATED_H
