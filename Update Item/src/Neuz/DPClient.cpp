above:

default:
				{
					ASSERT( 0 );
					break;
				}
				
this:

#ifdef __UPDATE_ITEM
			case SNAPSHOTTYPE_ITEM_UPDATE: OnGetItemUpdate(ar); break;
#endif // __UPDATE_ITEM



--------------

above:

CDPClient	g_DPlay;

this:

#ifdef __UPDATE_ITEM
void CDPClient::OnGetItemUpdate(CAr& ar)
{
	DWORD dwObjId = 0;
	ar >> dwObjId;

	if (!g_pPlayer)
		return;

	CItemElem* pItemElem = g_pPlayer->m_Inventory.GetAtId(dwObjId);
	if (pItemElem)
	{
		pItemElem->Serialize(ar);
	}
}
#endif // __UPDATE_ITEM