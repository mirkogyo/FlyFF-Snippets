under:

void CWndListBox::OnSetFocus( CWndBase* pOldWnd )
{
}

this:

#ifdef __ONDROP_LISTBOX
BOOL CWndListBox::OnDropIcon(LPSHORTCUT pShortcut, CPoint point)
{
	CWndBase* pParent = (CWndBase*)GetParentWnd();
	return m_pParentWnd->OnDropIcon(pShortcut, point);
}
#endif // __ONDROP_LISTBOX