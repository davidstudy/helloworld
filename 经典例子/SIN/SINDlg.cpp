// SINDlg.cpp : implementation file
//

#include "stdafx.h"
#include "SIN.h"
#include "SINDlg.h"
#include <stdlib.h>
#include <STRING>
#include <MATH.H>


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
// CSINDlg dialog

CSINDlg::CSINDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSINDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSINDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSINDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSINDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSINDlg, CDialog)
	//{{AFX_MSG_MAP(CSINDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSINDlg message handlers

BOOL CSINDlg::OnInitDialog()
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
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSINDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CSINDlg::OnPaint() 
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
HCURSOR CSINDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSINDlg::OnOK() 
{
	// TODO: Add extra validation here
	double x,y,x0,y0;  
	double pi = 3.14159254;  
	CString sa;  
	CString sx;  
	CString so;  
	double da;  
	double dx;  
	double doo;  
	
/*	¿É¸Ä±ä·ù¶È¡¢XºÍYÆ«ÒÆ
	CEdit* ceA = (CEdit*)GetDlgItem(IDC_TXTA);  
	CEdit* ceX = (CEdit*)GetDlgItem(IDC_TXTX);  
	CEdit* ceO = (CEdit*)GetDlgItem(IDC_TXTO);  
	
	
	
	ceA->GetWindowText(sa);  
	ceX->GetWindowText(sx);  
	ceO->GetWindowText(so);  


	da = _tcstod(sa.GetBuffer(0),NULL);  
	dx = _tcstod(sx.GetBuffer(0),NULL);  
	doo = _tcstod(so.GetBuffer(0),NULL);  
*/	
	CEdit* ce = (CEdit*)GetDlgItem(IDC_EDIT1);  
	da=80;
	dx=100;
	CClientDC dc(ce);  
	CPen* pen = new CPen(PS_SOLID,1,1);  
	CPen* poldPen = dc.SelectObject(pen);  
	for(x = 1;x < 400;x++)
	{  
		x0 = x-1;  
// 		y0 = da*sin(x0/doo) + dx;////da£¬Õñ·ù£¬doo£¬ XÆ«ÒÆÁ¿  dx£¬ yÆ«ÒÆÁ¿  
// 		y = da*sin(x/doo) + dx;  
		y0 = da*sin(x0 /(2*pi)) + dx;////da£¬Õñ·ù£¬doo£¬ XÆ«ÒÆÁ¿  dx£¬ yÆ«ÒÆÁ¿  
		y = da*sin(x / (2*pi)) + dx;  
		dc.MoveTo(x0,y0);  
		dc.LineTo(x,y);  
	}  
//	CDialog::OnOK();
}
