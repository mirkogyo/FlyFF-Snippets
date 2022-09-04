above:

typedef CMap<DWORD, DWORD, void *, void *> CMapDWordToPtr;

this:

#ifdef __INFO_WINDOW
#include "WndInfoWindow.h"
#endif // __INFO_WINDOW


----------

above:

	CTexturePack  m_texture;
	CTexturePack  m_texCommand;
	CTexturePack  m_texIcon;
	CTexturePack  m_texWnd;
	
this:

#ifdef __INFO_WINDOW
	CWndInfoWindow* m_pWndInfoWindow;
#endif // __INFO_WINDOW