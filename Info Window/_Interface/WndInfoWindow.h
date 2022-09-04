#ifdef __INFO_WINDOW
#ifndef __INFO_WINDOW_WNDH
#define __INFO_WINDOW_WNDH


class CWndInfoWindow : public CWndNeuz
{
public:
	CWndInfoWindow();
	~CWndInfoWindow();

	virtual BOOL Initialize(CWndBase* pWndParent = NULL, DWORD dwStyle = 0);
	virtual void OnInitialUpdate();
	virtual BOOL OnChildNotify(UINT message, UINT nID, LRESULT* pLResult);
	virtual void OnDraw(C2DRender* p2DRender);
	virtual BOOL OnDropIcon(LPSHORTCUT pShortcut, CPoint point = 0);
	virtual void OnMouseWndSurface(CPoint point);
	virtual void OnDestroy();
	virtual void OnRButtonUp(UINT nFlags, CPoint point);
	virtual BOOL Process(void);

	void SetWindow(LPCSTR lpszTitle, LPCSTR lpszText);
};

#endif // __INFO_WINDOW_WNDH
#endif // __INFO_WINDOW