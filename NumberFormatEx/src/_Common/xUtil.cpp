replace the function like that

CString GetNumberFormatEx( LPCTSTR szNumber )
{
	ASSERT( szNumber );

	CString str;

	int nLength = lstrlen( szNumber );	
	for( int i=nLength-1; i>=0; --i)
	{
		str.Insert(0, szNumber[i]);
		if( ((nLength-i) % 3) == 0 && i != 0 )
#ifdef __FORMAT_DOT
			str.Insert(0, '.' );
#else // __FORMAT_DOT
			str.Insert(0, ',' );
#endif // __FORMAT_DOT
	}
	return str;
}