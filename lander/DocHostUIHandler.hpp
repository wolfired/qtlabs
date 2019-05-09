#ifndef DOCHOSTUIHANDLER_H
#define DOCHOSTUIHANDLER_H

#include <MsHtmHst.h>

#include "Unknowner.hpp"

class DocHostUIHandler : public IDocHostUIHandler {
public:
    explicit DocHostUIHandler() {
    }

    virtual ~DocHostUIHandler() {
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

    HRESULT EnableModeless(BOOL fEnable) {
        return E_NOTIMPL;
    }

    HRESULT FilterDataObject(IDataObject *pDO, IDataObject **ppDORet) {
        return E_NOTIMPL;
    }

    HRESULT GetDropTarget(IDropTarget *pDropTarget, IDropTarget **ppDropTarget) {
        return E_NOTIMPL;
    }

    HRESULT GetExternal(IDispatch **ppDispatch) {
        return E_NOTIMPL;
    }

    HRESULT GetHostInfo(DOCHOSTUIINFO *pInfo) {
        return E_NOTIMPL;
    }

    HRESULT GetOptionKeyPath(LPOLESTR *pchKey, DWORD dw) {
        return E_NOTIMPL;
    }

    HRESULT HideUI() {
        return E_NOTIMPL;
    }

    HRESULT OnDocWindowActivate(BOOL fActivate) {
        return E_NOTIMPL;
    }

    HRESULT OnFrameWindowActivate(BOOL fActivate) {
        return E_NOTIMPL;
    }

    HRESULT ResizeBorder(LPCRECT prcBorder, IOleInPlaceUIWindow *pUIWindow, BOOL fFrameWindow) {
        return E_NOTIMPL;
    }

    HRESULT ShowContextMenu(DWORD dwID, POINT *ppt, IUnknown *pcmdtReserved, IDispatch *pdispReserved) {
        return E_NOTIMPL;
    }

    HRESULT ShowUI(DWORD dwID, IOleInPlaceActiveObject *pActiveObject, IOleCommandTarget *pCommandTarget, IOleInPlaceFrame *pFrame, IOleInPlaceUIWindow *pDoc) {
        return E_NOTIMPL;
    }

    HRESULT TranslateAccelerator(LPMSG lpMsg, const GUID *pguidCmdGroup, DWORD nCmdID) {
        return E_NOTIMPL;
    }

    HRESULT TranslateUrl(DWORD dwTranslate, OLECHAR *pchURLIn, OLECHAR **ppchURLOut) {
        return E_NOTIMPL;
    }

    HRESULT UpdateUI() {
        return E_NOTIMPL;
    }
};

#endif // DOCHOSTUIHANDLER_H
