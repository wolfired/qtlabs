#ifndef UNKNOWNER_H
#define UNKNOWNER_H

#include <Unknwn.h>

class Unknowner : public IUnknown {
public:
    explicit Unknowner() {
    }

    virtual ~Unknowner() {
    }

    ULONG AddRef(){
        return 0;
    }

    ULONG Release() {
        return 0;
    }

    HRESULT QueryInterface(REFIID riid, void   **ppvObject) {
        return E_NOTIMPL;
    }
};

#endif // UNKNOWNER_H
