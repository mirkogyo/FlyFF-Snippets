#include "stdafx.h"

#ifdef __INFO_WINDOW
#include "resdata.h"
#include "defineText.h"
#include "DPClient.h"
#include "MsgHdr.h"
#include "ar.h"
#include "honor.h"

extern CDPClient g_DPlay;
extern BOOL IsDst_Rate( int nDstParam );
extern char *FindDstString( int nDstParam );

CWndInfoWindow::CWndInfoWindow()
{
}

CWndInfoWindow::~CWndInfoWindow()
{
}

BOOL CWndInfoWindow::Initialize(CWndBase* pWndParent, DWORD dwStyle)
{
	return CWndNeuz::InitDialog(g_Neuz.GetSafeHwnd(), APP_INFO_WINDOW, 0, 0, pWndParent);
}

void CWndInfoWindow::OnDestroy()
{

}

void CWndInfoWindow::OnInitialUpdate()
{
	CWndNeuz::OnInitialUpdate();
	
	MoveParentCenter();
}
BOOL CWndInfoWindow::OnChildNotify(UINT message, UINT nID, LRESULT* pLResult)
{
	if (message == WNM_CLICKED) {
		switch (nID)
		{
			case WIDC_OK:
			{
				Destroy();
				break;
			}
		}
	}
	return CWndNeuz::OnChildNotify(message, nID, pLResult);
}
BOOL CWndInfoWindow::OnDropIcon(LPSHORTCUT pShortcut, CPoint point)
{

	return CWndNeuz::OnDropIcon(pShortcut, point);
}
void CWndInfoWindow::OnDraw(C2DRender* p2DRender)
{
	
}
void CWndInfoWindow::OnMouseWndSurface(CPoint point)
{
	
	CWndNeuz::OnMouseWndSurface(point);
}
void CWndInfoWindow::OnRButtonUp(UINT nFlags, CPoint point)
{

	CWndNeuz::OnRButtonUp(nFlags, point);
}
BOOL CWndInfoWindow::Process(void)
{
	
	return TRUE;
}
void CWndInfoWindow::SetWindow(LPCSTR lpszTitle, LPCSTR lpszText)
{
	SetTitle(lpszTitle);
	CWndText* pWndText = (CWndText*)GetDlgItem(WIDC_TEXT1);
	if (pWndText)
	{
		pWndText->SetString(lpszText);
	}

}
#endif // __INFO_WINDOW