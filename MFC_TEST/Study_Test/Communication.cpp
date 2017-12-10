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
	stu_info[button_click].name=str_A+"\n";
	stu_info[button_click].school_number=str_B+"\n";
	stu_info[button_click].sex=str_C+"\n";
	for (int i=0;i<=button_click;i++)
	{
		str_Informaition1=stu_info[i].name+stu_info[i].school_number+stu_info[i].sex;
		str_Informaition=str_Informaition+str_Informaition1;
	}
	GetDlgItem(IDC_STATIC_INFORMATION)->SetWindowText(str_Informaition);
	//////////////////////////////////
	CStdioFile file;
	if(file.Open(_T("D:\\testtxt.txt"),CFile::typeText|CFile::modeCreate|CFile::modeReadWrite))		
	{
		for(int j=0; j<20; j++)
		{
			file.WriteString(stu_info[j].name);
			file.WriteString(stu_info[j].school_number);
			file.WriteString(stu_info[j].sex);
		}  
		file.Close();
	}
//////////////////////////////////////////
	/*
	char* pszFileName="D:\\myfile.txt";	
	CStdioFile myFile;	
	CFileException fileException;	
	if(myFile.Open(pszFileName,CFile::typeText|CFile::modeCreate|CFile::modeReadWrite),&fileException)		
	{	
		myFile.WriteString("µÚ1ÐÐ\n");	
		CString strOrder;
		strOrder.Format("%d,%.3f",6116,8228.838);
		myFile.WriteString(strOrder);	
	}	
	else	
	{	
		TRACE("Can't open file %s,error=%u\n",pszFileName,fileException.m_cause);	
	}
	myFile.Close();
	*/

//////////////////////////////////
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
