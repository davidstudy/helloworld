// sheet_test.h : main header file for the SHEET_TEST application
//

#if !defined(AFX_SHEET_TEST_H__C7DBED90_7240_4777_B05F_14EFE86255A3__INCLUDED_)
#define AFX_SHEET_TEST_H__C7DBED90_7240_4777_B05F_14EFE86255A3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSheet_testApp:
// See sheet_test.cpp for the implementation of this class
//

class CSheet_testApp : public CWinApp
{
public:
	CSheet_testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSheet_testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSheet_testApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHEET_TEST_H__C7DBED90_7240_4777_B05F_14EFE86255A3__INCLUDED_)
