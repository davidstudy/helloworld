// Study_TestDlg.h : header file
//

#if !defined(AFX_STUDY_TESTDLG_H__C516E196_3BC9_4B52_918E_EECFA3D59F1E__INCLUDED_)
#define AFX_STUDY_TESTDLG_H__C516E196_3BC9_4B52_918E_EECFA3D59F1E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "ListDlg.h"
#include "Progress1TDlg.h"
#include "Communication.h"
/////////////////////////////////////////////////////////////////////////////
// CStudy_TestDlg dialog

class CStudy_TestDlg : public CDialog
{
// Construction
public:
	CStudy_TestDlg(CWnd* pParent = NULL);	// standard constructor
	CListDlg m_ListDlg;
	CProgress1TDlg m_progressDlg1;
	CCommunication m_CommunicationDlg;
// Dialog Data
	//{{AFX_DATA(CStudy_TestDlg)
	enum { IDD = IDD_STUDY_TEST_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStudy_TestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CStudy_TestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonListTest();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDY_TESTDLG_H__C516E196_3BC9_4B52_918E_EECFA3D59F1E__INCLUDED_)
