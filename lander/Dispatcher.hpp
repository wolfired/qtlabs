#ifndef DISPATCHER_H
#define DISPATCHER_H

#include <OAIdl.h>

class Dispatcher : public IDispatch {
public:
    explicit Dispatcher(){
    }

    virtual ~Dispatcher(){
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

    HRESULT GetIDsOfNames(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId) {
        return E_NOTIMPL;
    }

    HRESULT GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo) {
        return E_NOTIMPL;
    }

    HRESULT GetTypeInfoCount(UINT *pctinfo) {
        return E_NOTIMPL;
    }

    HRESULT Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr) {
        return E_NOTIMPL;
    }
};

#endif // DISPATCHER_H
