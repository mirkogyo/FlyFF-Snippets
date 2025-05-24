Replace int CWndComboBox::AddString( LPCTSTR lpszString )

with:

int CWndComboBox::AddString( LPCTSTR lpszString )
{
	int nNum = m_wndListBox.AddString( lpszString );
	CRect rect = m_wndListBox.GetWindowRect( TRUE );
#ifdef __FIX_0083
	int nNum2 = nNum;
	if (nNum2 > 10)
		nNum2 = 10;
	rect.bottom = rect.top + ((nNum2 + 1) * (m_pFont->GetMaxHeight() + 3)) + 8;
#else // __FIX_0083
	rect.bottom = rect.top + ((nNum + 1) * (m_pFont->GetMaxHeight() + 3)) + 8;
#endif // __FIX_0083
	m_wndListBox.SetWndRect( rect );
	return nNum;
}

and define __FIX_0083 in your Neuz/Versioncommon.h or in your Common file