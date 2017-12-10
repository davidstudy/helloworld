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
struct student
{
	CString name;
	CString school_number;
	CString sex;
}stu_info[20];

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
	ON_BN_CLICKED(IDC_BUTTON_CREATE, OnButtonCreate)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCommunication message handlers

void CCommunication::OnButtonCreate() 
{	
	CString str_A,str_B,str_C,str_Informaition,str_Informaition1;  
	str_Informaition="";
	GetDlgItem(IDC_EDIT_NAME)->GetWindowText(str_A); 	
	GetDlgItem(IDC_EDIT_SCHOOL_NUMBER)->GetWindowText(str_B); 	
	GetDlgItem(IDC_EDIT_SEX)->GetWindowText(str_C); 	
	stu_info[button_click].name=str_A;
	stu_info[button_click].school_number=str_B;
	stu_info[button_click].sex=str_C;
	for (int i=0;i<=button_click;i++)
	{
		str_Informaition1=stu_info[i].name+"\n"+stu_info[i].school_number+"\n"+stu_info[i].sex+"\n";
		str_Informaition=str_Informaition+str_Informaition1;
	}
	GetDlgItem(IDC_STATIC_INFORMATION)->SetWindowText(str_Informaition);
	button_click++;
}

BOOL CCommunication::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	button_click=0;
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
