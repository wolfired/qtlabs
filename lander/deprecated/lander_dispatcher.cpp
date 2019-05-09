#include "lander_dispatcher.h"

LanderDispatcher::LanderDispatcher() {
    _refNum = 0;
}

STDMETHODIMP LanderDispatcher::QueryInterface(REFIID iid, void **ppvObject) {
    //qDebug() << "[1]>> QueryInterface()";
    *ppvObject = NULL;
    if (iid == IID_IDispatch || iid == IID_IUnknown){
        *ppvObject = static_cast<IDispatch*>(this);//对的，我是一个IDispatch，把我自己(this)交给你
        if(*ppvObject)
            AddRef();
        return S_OK;
    } else {
        return E_NOINTERFACE;
    }
}
STDMETHODIMP_(ULONG) LanderDispatcher::AddRef() { return ::InterlockedIncrement(&_refNum); }
STDMETHODIMP_(ULONG) LanderDispatcher::Release() {
    ::InterlockedDecrement(&_refNum);
    if (_refNum == 0) {
        delete this;
    }
    return _refNum;
}

HRESULT LanderDispatcher::GetIDsOfNames(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId) {
    if(lstrcmpW(rgszNames[0], L"hi") == 0) {
        //网页调用window.external.hi时，会调用这个方法获取hi的ID
        *rgDispId = 999;
    }
    return S_OK;
}

HRESULT LanderDispatcher::GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo) { return E_NOTIMPL; }

HRESULT LanderDispatcher::GetTypeInfoCount(UINT *pctinfo) { return E_NOTIMPL; }

HRESULT LanderDispatcher::Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr) {
    if (dispIdMember == 999) {
        if (pDispParams->rgvarg->vt != VT_BSTR){
            return E_FAIL;
        }

    }
    return S_OK;
}
