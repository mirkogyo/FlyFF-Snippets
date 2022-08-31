Add this:

#ifdef __ADDCAPTION
void CUser::AddCaption(LPCSTR lpsz)
{
	if (IsDelete())	return;

	m_Snapshot.cb++;
	m_Snapshot.ar << NULL_ID;
	m_Snapshot.ar << SNAPSHOTTYPE_TEXT;
	m_Snapshot.ar << TEXT_CAPTION;
	m_Snapshot.ar.WriteString(lpsz);
}
#endif // __ADDCAPTION