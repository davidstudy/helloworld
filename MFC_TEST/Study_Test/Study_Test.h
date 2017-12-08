// Study_Test.h : main header file for the STUDY_TEST application
//

#if !defined(AFX_STUDY_TEST_H__AA6B39E2_0FDA_4BFC_8BC3_FCFEFE2A0451__INCLUDED_)
#define AFX_STUDY_TEST_H__AA6B39E2_0FDA_4BFC_8BC3_FCFEFE2A0451__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CStudy_TestApp:
// See Study_Test.cpp for the implementation of this class
//

class CStudy_TestApp : public CWinApp
{
public:
	CStudy_TestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStudy_TestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CStudy_TestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDY_TEST_H__AA6B39E2_0FDA_4BFC_8BC3_FCFEFE2A0451__INCLUDED_)
