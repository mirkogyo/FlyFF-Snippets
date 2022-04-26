under:

	void SetString( LPCTSTR pszString, DWORD dwColor = 0xff000000 );
	void AddString( LPCTSTR pszString, DWORD dwColor = 0xff000000, DWORD dwPStyle = 0x00000001 );
	void ResetString();
	
this:

#ifdef __WNDEDIT_PLACEHOLDER
	CEditString m_stringPlaceholder;
	void SetPlaceholder(LPCTSTR pszString);
#endif // __WNDEDIT_PLACEHOLDER