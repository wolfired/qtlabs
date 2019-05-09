#ifndef LANDER_DISPATCHER_H
#define LANDER_DISPATCHER_H

#include <oaidl.h>

class LanderDispatcher : public IDispatch {
  public:
    LanderDispatcher();

    STDMETHODIMP QueryInterface(REFIID iid, void **ppvObject);
    STDMETHODIMP_(ULONG) AddRef();
    STDMETHODIMP_(ULONG) Release();

    HRESULT GetIDsOfNames(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);

    HRESULT GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);

    HRESULT GetTypeInfoCount(UINT *pctinfo);

    HRESULT Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);

  private:
    long _refNum;
};

#endif // LANDER_DISPATCHER_H
