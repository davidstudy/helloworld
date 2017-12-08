// Progress1TDlg.cpp : implementation file
//

#include "stdafx.h"
#include "study_test.h"
#include "Progress1TDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProgress1TDlg dialog


CProgress1TDlg::CProgress1TDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CProgress1TDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CProgress1TDlg)
	m_Edit_A = _T("");
	m_Edit_B = _T("");
	m_Edit_C = _T("");
	m_ShowLog = _T("");
	//}}AFX_DATA_INIT
}


void CProgress1TDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProgress1TDlg)
	DDX_Control(pDX, IDC_PROGRESS1, m_Progress11);
	DDX_Text(pDX, IDC_EDIT_A, m_Edit_A);
	DDX_Text(pDX, IDC_EDIT_B, m_Edit_B);
	DDX_Text(pDX, IDC_EDIT_C, m_Edit_C);
	DDX_Text(pDX, IDC_STATIC_SHOW, m_ShowLog);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProgress1TDlg, CDialog)
	//{{AFX_MSG_MAP(CProgress1TDlg)
	ON_BN_CLICKED(IDC_BUTTON1_PPP, OnButton1Ppp)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProgress1TDlg message handlers




void CProgress1TDlg::OnButton1Ppp() 
{
	// TODO: Add your control notification handler code here
	CString StrKK="16541";

	CString str_A;  
	GetDlgItem(IDC_EDIT_A)->GetWindowText(str_A); 


	GetDlgItem(IDC_STATIC_SHOW)->SetWindowText(str_A);
}
