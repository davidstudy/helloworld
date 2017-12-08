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
	m_list.SetExtendedStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);      // 整行选择、网格线  
	m_list.InsertColumn(0, _T(""), LVCFMT_LEFT, 0);  
	m_list.InsertColumn(1, _T("姓名"), LVCFMT_LEFT, 100);        // 插入第2列的列名  
	m_list.InsertColumn(2, _T("年龄"), LVCFMT_LEFT, 100);        // 插入第3列的列名  
	m_list.InsertColumn(3, _T("性别"), LVCFMT_LEFT, 100);        // 插入第4列的列名  
	
	for(int i = 0;i <= 7;i++) {  
		strName.Format(_T("小石头%d"), i);  
		strAge.Format(_T("%d"), 20 + i);  
		strSex = i % 2 ? _T("男") : _T("女");  
		m_list.InsertItem(i, _T(""));                          // 插入行  
		m_list.SetItemText(i, 1, strName);                     // 设置第2列(姓名)  
		m_list.SetItemText(i, 2, strAge);                      // 设置第3列(年龄)  
		m_list.SetItemText(i, 3, strSex); 
	}
                     // 设置第4列(性别) 
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CListDlg::OnButtonTest1() 
{
	// TODO: Add your control notification handler code here
	for(int i = 0;i <= 7;i++) {  
		strName.Format(_T("测试%d"), i);  
		strAge.Format(_T("%d"), 20 + i);  
		strSex = i % 2 ? _T("男") : _T("女");  
	//	m_list.InsertItem(i, _T(""));                          // 插入行  
		m_list.SetItemText(i, 1, strName);                     // 设置第2列(姓名)  
		m_list.SetItemText(i, 2, strAge);                      // 设置第3列(年龄)  
		m_list.SetItemText(i, 3, strSex); 
	}
}
