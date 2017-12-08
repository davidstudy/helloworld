#if !defined(AFX_PROGRESSTDLG_H__AC26156D_896B_4525_88EB_6E3312A218F3__INCLUDED_)
#define AFX_PROGRESSTDLG_H__AC26156D_896B_4525_88EB_6E3312A218F3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ProgressTDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CProgressTDlg dialog

class CProgressTDlg : public CDialog
{
// Construction
public:
	CProgressTDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CProgressTDlg)
	enum { IDD = IDD_DIALOG_PROGRESS };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProgressTDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CProgressTDlg)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROGRESSTDLG_H__AC26156D_896B_4525_88EB_6E3312A218F3__INCLUDED_)
