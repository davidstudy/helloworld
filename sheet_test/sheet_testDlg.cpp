// sheet_testDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sheet_test.h"
#include "comutil.h"
#include "sheet_testDlg.h"
#include "excel.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSheet_testDlg dialog

CSheet_testDlg::CSheet_testDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSheet_testDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSheet_testDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSheet_testDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSheet_testDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSheet_testDlg, CDialog)
	//{{AFX_MSG_MAP(CSheet_testDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSheet_testDlg message handlers

BOOL CSheet_testDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.
	
	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	if( !AfxOleInit() ){
		AfxMessageBox("初始化Ole出错！");
		return FALSE;
	}
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSheet_testDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSheet_testDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSheet_testDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSheet_testDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	_Application app;
	Workbooks books;
	_Workbook book;
	Worksheets sheets;
	_Worksheet sheet;
	Range range;
	Font font;
	Range cols;
	COleVariant covOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);
	
	if( !app.CreateDispatch("Excel.Application") ){
		this->MessageBox("无法创建Excel应用！");
		return;
	}
	books=app.GetWorkbooks();
	book=books.Add(covOptional);
	sheets=book.GetSheets();
	sheet=sheets.GetItem(COleVariant((short)1));
	range=sheet.GetRange(COleVariant("A1"),COleVariant("A1"));
	range.SetFormula(COleVariant("HELLO EXCEL!"));
	font=range.GetFont();
	font.SetBold(COleVariant((short)TRUE));
	range=sheet.GetRange(COleVariant("A2"),COleVariant("A2"));
	range.SetFormula(COleVariant("=RAND()*100000"));
	range.SetNumberFormat(COleVariant("$0.00"));
	cols=range.GetEntireColumn();
	cols.AutoFit();
	
	app.SetVisible(TRUE);
	app.SetUserControl(TRUE);
	

}

void CSheet_testDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	_Application app; 
	Workbooks books;
	_Workbook book;
	Worksheets sheets;
	_Worksheet sheet;
	Range range;
	LPDISPATCH lpDisp;  //接口指针
	COleVariant covOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR); 
	if( !app.CreateDispatch("Excel.Application") ){
		this->MessageBox("无法创建Excel应用！");
		return;
	}
	
	books=app.GetWorkbooks();

//	Workbooks.Open("m1.xls");
// 	lpDisp = m_oWorkBooks.Open( FilePathName, 
// 		43                               _variant_t(vtMissing), 
// 		44                               _variant_t(vtMissing),
// 		45                               _variant_t(vtMissing),
// 		46                               _variant_t(vtMissing),
// 		47                               _variant_t(vtMissing),
// 		48                               _variant_t(vtMissing),
// 		49                               _variant_t(vtMissing),
// 		50                               _variant_t(vtMissing),
// 		51                               _variant_t(vtMissing),
// 		52                               _variant_t(vtMissing),
// 		53                               _variant_t(vtMissing),
// 		54                               _variant_t(vtMissing),
// 		55                               _variant_t(vtMissing),
// 		56                               _variant_t(vtMissing) );
	CString strFilePath;
	strFilePath ="C:\\Users\\David\\Desktop\\m1.xls";
	lpDisp = books.Open( strFilePath, 
					   _variant_t(vtMissing), 
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing),
					   _variant_t(vtMissing) );

	book.AttachDispatch( lpDisp );
	sheets=book.GetSheets();
	sheet=sheets.GetItem(COleVariant((short)1));
	range=sheet.GetRange(COleVariant("C8"),COleVariant("C8"));
	COleVariant rValue;

	rValue=COleVariant(range.GetValue(vtMissing));
	rValue.ChangeType(VT_BSTR);
	this->MessageBox(CString(rValue.bstrVal));
	
	book.SetSaved(TRUE);
	app.Quit();

}

