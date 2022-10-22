end of file:

#ifdef __UPDATE_ITEM
void CUser::UpdateItem_New(CItemElem* pItemElem)
{
	if (IsDelete())	return;

	m_Snapshot.cb++;
	m_Snapshot.ar << NULL_ID;
	m_Snapshot.ar << SNAPSHOTTYPE_ITEM_UPDATE;
	m_Snapshot.ar << pItemElem->m_dwObjId;
	pItemElem->Serialize(m_Snapshot.ar);
}
#endif // __UPDATE_ITEM