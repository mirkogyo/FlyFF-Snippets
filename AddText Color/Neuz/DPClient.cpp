under:

void CDPClient::OnText( CAr & ar )
{
	static TCHAR szText[MAX_PATH]; // 260

#ifdef __S_SERVER_UNIFY
	BYTE nState;
	ar >> nState;
#endif // __S_SERVER_UNIFY
	ar.ReadString( szText, MAX_PATH );

#ifdef __S_SERVER_UNIFY
	switch( nState )
	{
	case TEXT_GENERAL:
	
replace:

g_WndMng.PutString( szText, NULL, 0xff00ff00 );

with:

#ifdef __ADDTEXT_COLOR
	{
		DWORD dwColor = 0xff00ff00;
		ar >> dwColor;
		g_WndMng.PutString(szText, NULL, dwColor);
	}
#else // __ADDTEXT_COLOR
		g_WndMng.PutString( szText, NULL, 0xff00ff00 );
#endif // __ADDTEXT_COLOR