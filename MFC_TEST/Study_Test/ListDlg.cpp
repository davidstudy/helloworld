// ListDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Study_Test.h"
#include "ListDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CListDlg dialog


CListDlg::CListDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CListDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CListDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CListDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CListDlg)
	DDX_Control(pDX, IDC_LIST1, m_list);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CListDlg, CDialog)
	//{{AFX_MSG_MAP(CListDlg)
	ON_BN_CLICKED(IDC_BUTTON_TEST1, OnButtonTest1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CListDlg message handlers

BOOL CListDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	// ListCtrl1  
	m_list.SetExtendedStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);      // ����ѡ��������  
	m_list.InsertColumn(0, _T(""), LVCFMT_LEFT, 0);  
	m_list.InsertColumn(1, _T("����"), LVCFMT_LEFT, 100);        // �����2�е�����  
	m_list.InsertColumn(2, _T("����"), LVCFMT_LEFT, 100);        // �����3�е�����  
	m_list.InsertColumn(3, _T("�Ա�"), LVCFMT_LEFT, 100);        // �����4�е�����  
	
	for(int i = 0;i <= 7;i++) {  
		strName.Format(_T("Сʯͷ%d"), i);  
		strAge.Format(_T("%d"), 20 + i);  
		strSex = i % 2 ? _T("��") : _T("Ů");  
		m_list.InsertItem(i, _T(""));                          // ������  
		m_list.SetItemText(i, 1, strName);                     // ���õ�2��(����)  
		m_list.SetItemText(i, 2, strAge);                      // ���õ�3��(����)  
		m_list.SetItemText(i, 3, strSex); 
	}
                     // ���õ�4��(�Ա�) 
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CListDlg::OnButtonTest1() 
{
	// TODO: Add your control notification handler code here
	for(int i = 0;i <= 7;i++) {  
		strName.Format(_T("����%d"), i);  
		strAge.Format(_T("%d"), 20 + i);  
		strSex = i % 2 ? _T("��") : _T("Ů");  
	//	m_list.InsertItem(i, _T(""));                          // ������  
		m_list.SetItemText(i, 1, strName);                     // ���õ�2��(����)  
		m_list.SetItemText(i, 2, strAge);                      // ���õ�3��(����)  
		m_list.SetItemText(i, 3, strSex); 
	}
}
