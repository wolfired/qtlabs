#include "lander_dochostuihandler.h"

LanderDocHostUIHandler::LanderDocHostUIHandler() {
    _dispatcher = new LanderDispatcher();
    _count = 0;
}

LanderDocHostUIHandler::~LanderDocHostUIHandler() {
    //此处自己释放, 不通过COM的引用计算来管理
    delete _dispatcher;
    _dispatcher = NULL;
}

ULONG LanderDocHostUIHandler::AddRef() {
    ::InterlockedIncrement((long*)&_count);
    return _count;
}
HRESULT LanderDocHostUIHandler::QueryInterface(REFIID riid, void **ppvObject) {
    if(IsEqualIID(riid,IID_IUnknown))
    {
        *ppvObject = static_cast <IUnknown*> (this);
        return S_OK;
    }
    else if(IsEqualIID(riid,IID_IDocHostUIHandler))
    {
        *ppvObject = static_cast <IDocHostUIHandler*> (this);
        return S_OK;
    }
    else
    {
        *ppvObject = NULL;
        return E_NOINTERFACE;
    }
}
ULONG LanderDocHostUIHandler::Release() {
    if (::InterlockedDecrement((long*)&_count) <= 0)
        delete this;
    return _count;
}

HRESULT LanderDocHostUIHandler::EnableModeless(BOOL fEnable) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::FilterDataObject(IDataObject *pDO, IDataObject **ppDORet) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::GetDropTarget(IDropTarget *pDropTarget, IDropTarget **ppDropTarget) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::GetExternal(IDispatch **ppDispatch) {
//    _dispatcher->QueryInterface(IID_IDispatch, (void **)ppDispatch);
//    (*ppDispatch)->AddRef();
//    return S_OK;
    return _dispatcher->QueryInterface(IID_IDispatch, (void **)ppDispatch);
}
HRESULT LanderDocHostUIHandler::GetHostInfo(DOCHOSTUIINFO *pInfo) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::GetOptionKeyPath(LPOLESTR *pchKey, DWORD dw) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::HideUI() { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::OnDocWindowActivate(BOOL fActivate) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::OnFrameWindowActivate(BOOL fActivate) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::ResizeBorder(LPCRECT prcBorder, IOleInPlaceUIWindow *pUIWindow, BOOL fFrameWindow) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::ShowContextMenu(DWORD dwID, POINT *ppt, IUnknown *pcmdtReserved, IDispatch *pdispReserved) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::ShowUI(DWORD dwID, IOleInPlaceActiveObject *pActiveObject, IOleCommandTarget *pCommandTarget, IOleInPlaceFrame *pFrame, IOleInPlaceUIWindow *pDoc) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::TranslateAcceleratorW(LPMSG lpMsg, const GUID *pguidCmdGroup, DWORD nCmdID) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::TranslateUrl(DWORD dwTranslate, OLECHAR *pchURLIn, OLECHAR **ppchURLOut) { return E_NOTIMPL; }
HRESULT LanderDocHostUIHandler::UpdateUI() { return E_NOTIMPL; }
