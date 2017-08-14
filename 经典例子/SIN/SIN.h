// SIN.h : main header file for the SIN application
//

#if !defined(AFX_SIN_H__6F947901_3AF5_481C_893A_D120B88E31ED__INCLUDED_)
#define AFX_SIN_H__6F947901_3AF5_481C_893A_D120B88E31ED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSINApp:
// See SIN.cpp for the implementation of this class
//

class CSINApp : public CWinApp
{
public:
	CSINApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSINApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSINApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SIN_H__6F947901_3AF5_481C_893A_D120B88E31ED__INCLUDED_)
