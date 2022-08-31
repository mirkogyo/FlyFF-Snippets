under:

	case TEXT_DIAG:
		g_WndMng.OpenMessageBoxUpper( szText );
		break;
		
this:

#ifdef __ADDCAPTION
	case TEXT_CAPTION:
		g_Caption1.AddCaption(szText, NULL);
		break;
#endif // __ADDCAPTION