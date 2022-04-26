under:

	friend int QSortListBox( const VOID* arg1, const VOID* arg2 );
	
this:

#ifdef __ONDROP_LISTBOX
	virtual BOOL OnDropIcon(LPSHORTCUT pShortcut, CPoint point = 0);
#endif // __ONDROP_LISTBOX