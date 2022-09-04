replace

	void			AddText(LPCSTR lpszText );
	

with

#ifdef __ADDTEXT_COLOR
	void			AddText( LPCSTR lpszText, DWORD dwColor = 0xff00ff00);
#else // __ADDTEXT_COLOR
	void			AddText(LPCSTR lpszText );
#endif // __ADDTEXT_COLOR