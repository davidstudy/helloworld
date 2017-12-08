#if !defined(AFX_PROGRESSTESTDLG_H__BCBAB106_F068_40F6_8825_1BB59A8FDF09__INCLUDED_)
#define AFX_PROGRESSTESTDLG_H__BCBAB106_F068_40F6_8825_1BB59A8FDF09__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ProgressTestDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CProgressTestDlg dialog

class CProgressTestDlg : public CDialog
{
// Construction
public:
	CProgressTestDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CProgressTestDlg)
	enum { IDD = IDD_DIALOG_PROGRESS };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProgressTestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CProgressTestDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROGRESSTESTDLG_H__BCBAB106_F068_40F6_8825_1BB59A8FDF09__INCLUDED_)
