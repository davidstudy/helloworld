#if !defined(AFX_LISTDLG_H__4B5E2964_D139_4EA1_9BEA_EBF704E0D713__INCLUDED_)
#define AFX_LISTDLG_H__4B5E2964_D139_4EA1_9BEA_EBF704E0D713__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ListDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CListDlg dialog

class CListDlg : public CDialog
{
// Construction
public:
	CListDlg(CWnd* pParent = NULL);   // standard constructor
	CString strName;
	CString strAge;
	CString strSex;

// Dialog Data
	//{{AFX_DATA(CListDlg)
	enum { IDD = IDD_DIALOG_LIST };
	CListCtrl	m_list;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CListDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CListDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonTest1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LISTDLG_H__4B5E2964_D139_4EA1_9BEA_EBF704E0D713__INCLUDED_)
