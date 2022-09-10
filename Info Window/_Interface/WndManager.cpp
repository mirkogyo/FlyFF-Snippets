above:

}
void CWndMgr::DestroyApplet()
{
	
this:

#ifdef __INFO_WINDOW
	SAFE_DELETE(m_pWndInfoWindow);
#endif // __INFO_WINDOW