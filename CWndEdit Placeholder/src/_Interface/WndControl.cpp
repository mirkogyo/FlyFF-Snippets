under:

	m_szCaret[0] = 0;
	m_strTexture = DEF_CTRL_TEXT;
	m_bTile = TRUE;
	m_ptDeflateRect = CPoint( 6, 6 );
	
this:

#ifdef __WNDEDIT_PLACEHOLDER
	m_stringPlaceholder = _T("");
#endif // __WNDEDIT_PLACEHOLDER

------------------------------

under:

void CWndText::ResetString()
{
	//m_string.Reset( m_pFont, &GetClientRect() );
	CPoint ptCaret = OffsetToPoint( m_dwOffset, m_szCaret );
	SetCaretPos( ptCaret );
	UpdateScrollBar();
}

this:

#ifdef __WNDEDIT_PLACEHOLDER
void CWndText::SetPlaceholder(LPCTSTR pszString)
{
	m_stringPlaceholder = _T(pszString);
	CRect rectCtrl = this->GetWndRect();
	rectCtrl.top += 10;
	rectCtrl.left += 10;
	rectCtrl.right -= 10;
	rectCtrl.bottom -= 10;
	m_stringPlaceholder.Init(m_pFont, &rectCtrl);
	m_stringPlaceholder.SetColor(0xff888888);
}
#endif // __WNDEDIT_PLACEHOLDER


----------------------------

under:

	else
	{
		if( nLines == 6 )
		{
			int a = 0;
		}
		BlockSetStyle(ESSTY_BLOCK);
		//ptCaret = OffsetToPoint( m_dwOffset, m_szCaret );
		
this:

#ifdef __WNDEDIT_PLACEHOLDER
		if (strcmp(m_string, "") == 0 && strcmp(m_stringPlaceholder, "") != 0) {
			p2DRender->TextOut_EditString(0, 0, m_stringPlaceholder, nPos, nLines, m_nLineSpace);
		}
		else 
#endif // __WNDEDIT_PLACEHOLDER