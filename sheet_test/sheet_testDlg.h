// sheet_testDlg.h : header file
//

#if !defined(AFX_SHEET_TESTDLG_H__4EF37377_04FD_4ADE_843D_21EC213733C7__INCLUDED_)
#define AFX_SHEET_TESTDLG_H__4EF37377_04FD_4ADE_843D_21EC213733C7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSheet_testDlg dialog

class CSheet_testDlg : public CDialog
{
// Construction
public:
	CSheet_testDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSheet_testDlg)
	enum { IDD = IDD_SHEET_TEST_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSheet_testDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSheet_testDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHEET_TESTDLG_H__4EF37377_04FD_4ADE_843D_21EC213733C7__INCLUDED_)
