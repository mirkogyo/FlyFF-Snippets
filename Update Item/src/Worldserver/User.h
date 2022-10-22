above:

};

#define	SEC_SAVEPLAYER	90

class CDPSrvr;
#if __VER >= 12 // __LORD
class CLEComponent;
class ILordEvent;
#endif	// __LORD


this:

#ifdef __UPDATE_ITEM
	void	UpdateItem_New(CItemElem* pItemElem);
#endif // __UPDATE_ITEM