above:

			default:
				{
					ASSERT( 0 );
					break;
				}
				
this:

#ifdef __INFO_WINDOW
			case SNAPSHOTTYPE_INFO_WINDOW: OnGetInfoWindow(ar); break;
#endif // __INFO_WINDOW



---------

above:

CDPClient	g_DPlay;

this:

#ifdef __INFO_WINDOW
void CDPClient::OnGetInfoWindow(CAr& ar)
{
	static TCHAR szTitle[MAX_PATH];
	ar.ReadString(szTitle, MAX_PATH);

	static TCHAR szText[MAX_PATH];
	ar.ReadString(szText, MAX_PATH);

	SAFE_DELETE(g_WndMng.m_pWndInfoWindow);
	g_WndMng.m_pWndInfoWindow = new CWndInfoWindow;
	g_WndMng.m_pWndInfoWindow->Initialize(&g_WndMng, APP_INFO_WINDOW);
	g_WndMng.m_pWndInfoWindow->SetWindow(szTitle, szText);
}
#endif // __INFO_WINDOW