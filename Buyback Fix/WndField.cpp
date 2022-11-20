void CWndBuyBack::OnDraw(C2DRender* p2DRender)
{
	if (g_pPlayer)
	{
		CWndButton* pWndOk = (CWndButton*)GetDlgItem(WIDC_OK);
		CWndListBox* pWndListBox = (CWndListBox*)GetDlgItem(WIDC_LISTBOX1);
		if (pWndOk && pWndListBox)
			pWndOk->EnableWindow(g_pPlayer->m_bCanBuy && pWndListBox->GetCurSel() != -1);
	}
}