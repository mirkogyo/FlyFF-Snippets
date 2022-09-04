replace this function


void CUser::AddText( LPCSTR lpsz )
{
	if( IsDelete() )	return;

	m_Snapshot.cb++;
	m_Snapshot.ar << NULL_ID;
	m_Snapshot.ar << SNAPSHOTTYPE_TEXT;
#ifdef __S_SERVER_UNIFY
	m_Snapshot.ar << TEXT_GENERAL;
#endif // __S_SERVER_UNIFY
	m_Snapshot.ar.WriteString( lpsz );
}

with this:

#ifdef __ADDTEXT_COLOR
void CUser::AddText(LPCSTR lpsz, DWORD dwColor )
#else // __ADDTEXT_COLOR
void CUser::AddText( LPCSTR lpsz )
#endif // __ADDTEXT_COLOR
{
	if( IsDelete() )	return;

	m_Snapshot.cb++;
	m_Snapshot.ar << NULL_ID;
	m_Snapshot.ar << SNAPSHOTTYPE_TEXT;
#ifdef __S_SERVER_UNIFY
	m_Snapshot.ar << TEXT_GENERAL;
#endif // __S_SERVER_UNIFY
	m_Snapshot.ar.WriteString( lpsz );
#ifdef __ADDTEXT_COLOR
	m_Snapshot.ar << dwColor;
#endif // __ADDTEXT_COLOR
}