end of file:

#ifdef __INFO_WINDOW
void CUser::AddInfoWindow(LPCSTR lpszTitle, LPCSTR lpszText)
{
	if (IsDelete())	return;

	m_Snapshot.cb++;
	m_Snapshot.ar << NULL_ID;
	m_Snapshot.ar << SNAPSHOTTYPE_INFO_WINDOW;
	m_Snapshot.ar.WriteString(lpszTitle);
	m_Snapshot.ar.WriteString(lpszText);
}
#endif // __INFO_WINDOW