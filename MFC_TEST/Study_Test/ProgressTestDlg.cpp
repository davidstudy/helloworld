// ProgressTestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Study_Test.h"
#include "ProgressTestDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProgressTestDlg dialog


CProgressTestDlg::CProgressTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CProgressTestDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CProgressTestDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CProgressTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProgressTestDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProgressTestDlg, CDialog)
	//{{AFX_MSG_MAP(CProgressTestDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProgressTestDlg message handlers
