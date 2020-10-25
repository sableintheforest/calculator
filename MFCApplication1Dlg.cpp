
// MFCApplication1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication1Dlg dialog



CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCAPPLICATION1_DIALOG, pParent)
	, reiskinys(_T(""))
	, ats(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, reiskinys);
	DDX_Text(pDX, IDC_EDIT2, ats);
}

BEGIN_MESSAGE_MAP(CMFCApplication1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication1Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication1Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication1Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication1Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplication1Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplication1Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplication1Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCApplication1Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCApplication1Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplication1Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplication1Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCApplication1Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCApplication1Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCApplication1Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplication1Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplication1Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCApplication1Dlg::OnBnClickedButton17)
	ON_EN_CHANGE(IDC_EDIT1, &CMFCApplication1Dlg::OnEnChangeEdit1)
END_MESSAGE_MAP()


// CMFCApplication1Dlg message handlers

BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
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

void CMFCApplication1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCApplication1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

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
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCApplication1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


int a=0, b=0;
int veiks;//+1,-2,*3,/4
int k=0;
void CMFCApplication1Dlg::OnBnClickedButton1()
{
UpdateData(true);
reiskinys = reiskinys+ '1';
if(k==0)
a=a*10+1;
else
b=b*10+1;
UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton2()
{
	UpdateData(true);
	reiskinys = reiskinys + '2';
	if (k == 0)
		a = a * 10 + 2;
	else
		b = b * 10 + 2;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton3()
{
	UpdateData(true);
	reiskinys = reiskinys + '+';
	veiks=1;
	k=1;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton4()
{
	UpdateData(true);
	reiskinys = reiskinys + '-';
	veiks = 2;
	k = 1;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton5()
{
	UpdateData(true);
	reiskinys = reiskinys + '=';
	if(veiks==1)
	ats=a+b;
	if(veiks==2)
	ats=a-b;
	if(veiks==3)
	ats=a*b;
	if(veiks==4)
	ats=a/(b*1.0);
	if(veiks==5)
	ats=sqrt(a*1.0);
	if(veiks==6)

	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton6()
{
	UpdateData(true);
	reiskinys = reiskinys + '*';
	veiks = 3;
	k = 1;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton7()
{
	UpdateData(true);
	reiskinys = reiskinys + '/';
	veiks = 4;
	k = 1;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton8()
{
	UpdateData(true);
	reiskinys = reiskinys + '3';
	if (k == 0)
		a = a * 10 + 3;
	else
		b = b * 10 + 3;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton9()
{
	UpdateData(true);
	reiskinys = reiskinys + '4';
	if (k == 0)
		a = a * 10 + 4;
	else
		b = b * 10 + 4;
	UpdateData(false);
}





void CMFCApplication1Dlg::OnBnClickedButton10()
{
	UpdateData(true);
	reiskinys = reiskinys + '5';
	if (k == 0)
		a = a * 10 + 5;
	else
		b = b * 10 + 5;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton11()
{
	UpdateData(true);
	reiskinys = reiskinys + '6';
	if (k == 0)
		a = a * 10 + 6;
	else
		b = b * 10 + 6;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton12()
{
	UpdateData(true);
	reiskinys = reiskinys + '7';
	if (k == 0)
		a = a * 10 + 7;
	else
		b = b * 10 + 7;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton13()
{
	UpdateData(true);
	reiskinys = reiskinys + '8';
	if (k == 0)
		a = a * 10 + 8;
	else
		b = b * 10 + 8;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton14()
{
	UpdateData(true);
	reiskinys = reiskinys + '9';
	if (k == 0)
		a = a * 10 + 9;
	else
		b = b * 10 + 9;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton15()
{
	UpdateData(true);
	reiskinys = reiskinys + '0';
	if (k == 0)
		a = a * 10 + 0;
	else
		b = b * 10 + 0;
	UpdateData(false);
}

void CMFCApplication1Dlg::OnBnClickedButton16()
{
	UpdateData(true);
	reiskinys = reiskinys + 's'+'q'+'r'+'t';
	veiks = 5;
	k=1;
	UpdateData(false);
}


void CMFCApplication1Dlg::OnBnClickedButton17()
{
	UpdateData(true);
	reiskinys = reiskinys + ' ';
	veiks = 6;
	k = 1;
	UpdateData(false);
}
