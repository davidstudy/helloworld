#if !defined(AFX_PROGRESS1TDLG_H__C4275C5F_4B98_4BCA_96D2_574B0BB57FAB__INCLUDED_)
#define AFX_PROGRESS1TDLG_H__C4275C5F_4B98_4BCA_96D2_574B0BB57FAB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Progress1TDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CProgress1TDlg dialog

class CProgress1TDlg : public CDialog
{
// Construction
public:
	CProgress1TDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CProgress1TDlg)
	enum { IDD = IDD_DIALOG1_PROGRESS };
	CProgressCtrl	m_Progress11;
	CString	m_Edit_A;
	CString	m_Edit_B;
	CString	m_Edit_C;
	CString	m_ShowLog;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProgress1TDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CProgress1TDlg)
	afx_msg void OnButton1Ppp();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROGRESS1TDLG_H__C4275C5F_4B98_4BCA_96D2_574B0BB57FAB__INCLUDED_)
