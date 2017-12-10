// Communication.cpp : implementation file
//

#include "stdafx.h"
#include "study_test.h"
#include "Communication.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCommunication dialog


CCommunication::CCommunication(CWnd* pParent /*=NULL*/)
	: CDialog(CCommunication::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCommunication)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CCommunication::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCommunication)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCommunication, CDialog)
	//{{AFX_MSG_MAP(CCommunication)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCommunication message handlers
