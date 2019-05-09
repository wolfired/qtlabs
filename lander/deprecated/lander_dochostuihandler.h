#ifndef LANDER_DOCHOSTUIHANDLER_H
#define LANDER_DOCHOSTUIHANDLER_H

#include "lander_dispatcher.h"
#include <MsHtmHst.h>

class LanderDocHostUIHandler : public IDocHostUIHandler {
  public:
    LanderDocHostUIHandler();
    ~LanderDocHostUIHandler();

    ULONG AddRef();
    HRESULT QueryInterface(REFIID riid, void **ppvObject);
//    HRESULT __clrcall QueryInterface(Q **pp);
    ULONG Release();

    HRESULT EnableModeless(BOOL fEnable);
    HRESULT FilterDataObject(IDataObject *pDO, IDataObject **ppDORet);
    HRESULT GetDropTarget(IDropTarget *pDropTarget, IDropTarget **ppDropTarget);
    HRESULT GetExternal(IDispatch **ppDispatch);
    HRESULT GetHostInfo(DOCHOSTUIINFO *pInfo);
    HRESULT GetOptionKeyPath(LPOLESTR *pchKey, DWORD dw);
    HRESULT HideUI();
    HRESULT OnDocWindowActivate(BOOL fActivate);
    HRESULT OnFrameWindowActivate(BOOL fActivate);
    HRESULT ResizeBorder(LPCRECT prcBorder, IOleInPlaceUIWindow *pUIWindow, BOOL fFrameWindow);
    HRESULT ShowContextMenu(DWORD dwID, POINT *ppt, IUnknown *pcmdtReserved, IDispatch *pdispReserved);
    HRESULT ShowUI(DWORD dwID, IOleInPlaceActiveObject *pActiveObject, IOleCommandTarget *pCommandTarget, IOleInPlaceFrame *pFrame, IOleInPlaceUIWindow *pDoc);
    HRESULT TranslateAccelerator(LPMSG lpMsg, const GUID *pguidCmdGroup, DWORD nCmdID);
    HRESULT TranslateUrl(DWORD dwTranslate, OLECHAR *pchURLIn, OLECHAR **ppchURLOut);
    HRESULT UpdateUI();

  private:
    LanderDispatcher *_dispatcher;
    ULONG _count;
};

#endif // LANDER_DOCHOSTUIHANDLER_H
