// ProgressTDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Study_Test.h"
#include "ProgressTDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProgressTDlg dialog


CProgressTDlg::CProgressTDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CProgressTDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CProgressTDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CProgressTDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProgressTDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProgressTDlg, CDialog)
	//{{AFX_MSG_MAP(CProgressTDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProgressTDlg message handlers

