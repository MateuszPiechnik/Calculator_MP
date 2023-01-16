
// JPO_Calculator_ProjectDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "JPO_Calculator_Project.h"
#include "JPO_Calculator_ProjectDlg.h"
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


// CJPOCalculatorProjectDlg dialog



CJPOCalculatorProjectDlg::CJPOCalculatorProjectDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_JPO_CALCULATOR_PROJECT_DIALOG, pParent)
	, result(_T(""))
	, bin(_T(""))
	, hex(_T(""))
	, oct(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CJPOCalculatorProjectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, result);
	DDX_Text(pDX, IDC_EDIT2, bin);
	DDX_Text(pDX, IDC_EDIT3, hex);
	DDX_Text(pDX, IDC_EDIT4, oct);
}

BEGIN_MESSAGE_MAP(CJPOCalculatorProjectDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, &CJPOCalculatorProjectDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON_0, &CJPOCalculatorProjectDlg::OnBnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON_1, &CJPOCalculatorProjectDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON_2, &CJPOCalculatorProjectDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON_3, &CJPOCalculatorProjectDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON_4, &CJPOCalculatorProjectDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON_5, &CJPOCalculatorProjectDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON_6, &CJPOCalculatorProjectDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON_7, &CJPOCalculatorProjectDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON_8, &CJPOCalculatorProjectDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON_9, &CJPOCalculatorProjectDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON_PLUS, &CJPOCalculatorProjectDlg::OnBnClickedButtonPlus)
	ON_BN_CLICKED(IDC_BUTTON_EQUAL, &CJPOCalculatorProjectDlg::OnBnClickedButtonEqual)
	ON_BN_CLICKED(IDC_BUTTON_MINUS, &CJPOCalculatorProjectDlg::OnBnClickedButtonMinus)
	ON_BN_CLICKED(IDC_BUTTON_MULTIPLICATION, &CJPOCalculatorProjectDlg::OnBnClickedButtonMultiplication)
	ON_BN_CLICKED(IDC_BUTTON_DIVIDE, &CJPOCalculatorProjectDlg::OnBnClickedButtonDivide)
	ON_BN_CLICKED(IDC_BUTTON_DELETE, &CJPOCalculatorProjectDlg::OnBnClickedButtonDelete)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR, &CJPOCalculatorProjectDlg::OnBnClickedButtonClear)
	ON_BN_CLICKED(IDC_BUTTON_POINT, &CJPOCalculatorProjectDlg::OnBnClickedButtonPoint)
	ON_BN_CLICKED(IDC_BUTTON_OPPOSITE, &CJPOCalculatorProjectDlg::OnBnClickedButtonOpposite)
	ON_BN_CLICKED(IDC_BUTTON_SQRT, &CJPOCalculatorProjectDlg::OnBnClickedButtonSqrt)
	ON_BN_CLICKED(IDC_BUTTON_BINARY, &CJPOCalculatorProjectDlg::OnBnClickedButtonBinary)
	ON_BN_CLICKED(IDC_BUTTON_HEX, &CJPOCalculatorProjectDlg::OnBnClickedButtonHex)
	ON_BN_CLICKED(IDC_BUTTON_OCTAL, &CJPOCalculatorProjectDlg::OnBnClickedButtonOctal)
END_MESSAGE_MAP()


// CJPOCalculatorProjectDlg message handlers

BOOL CJPOCalculatorProjectDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
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


void CJPOCalculatorProjectDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CJPOCalculatorProjectDlg::OnPaint()
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
HCURSOR CJPOCalculatorProjectDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CJPOCalculatorProjectDlg::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}



void CJPOCalculatorProjectDlg::OnBnClickedButton0()
{
	if (check_element == 1) { //checking which number you operate 
		element1 += "0";	//adding 0 to first number 
		result = element1;	//display actual number after adding 0
	}
	else {
		element2 += "0"; //adding 0 to second number
		result = element2; 
	}
	UpdateData(FALSE); //Update Edit Control
}




void CJPOCalculatorProjectDlg::OnBnClickedButton1()
{
	if (result != _T("0")) { //check if 0 is added, we cant have number 01
		if (check_element == 1) { //checking which number you operate
			element1 += "1"; //adding 1 to first number 
			result = element1; //display actual number after adding 1
		}
		else {
			element2 += "1"; //adding 1 to second number
			result = element2;
		}
	}
	UpdateData(FALSE); //Update Edit Control
}


void CJPOCalculatorProjectDlg::OnBnClickedButton2()
{	
	if (result != _T("0")) { //check if 0 is added, we cant have number 01
		if (check_element == 1) {  //checking which number you operate
			element1 += "2";  //adding 2 to first number 
			result = element1; //display actual number after adding 2
		}
		else {
			element2 += "2"; //adding 2 to second number
			result = element2;
		}
	}
	UpdateData(FALSE); //Update Edit Control
}


void CJPOCalculatorProjectDlg::OnBnClickedButton3()
{
	if (result != _T("0")) { //check if 0 is added, we cant have number 01
		if (check_element == 1) { //checking which number you operate
			element1 += "3";  //adding 3 to first number
			result = element1; //display actual number after adding 3
		}
		else {
			element2 += "3"; //adding 3 to second number
			result = element2;
		}
	}
	UpdateData(FALSE); //Update Edit Control
}


void CJPOCalculatorProjectDlg::OnBnClickedButton4()
{
	if (result != _T("0")) { //check if 0 is added, we cant have number 01
		if (check_element == 1) { //checking which number you operate
			element1 += "4"; //adding 4 to first number
			result = element1; //display actual number after adding 4
		}
		else {
			element2 += "4"; //adding 4 to second number
			result = element2;
		}
	} 
	UpdateData(FALSE);//Update Edit Control
}


void CJPOCalculatorProjectDlg::OnBnClickedButton5()
{
	if (result != _T("0")) { //check if 0 is added, we cant have number 01
		if (check_element == 1) { //checking which number you operate
			element1 += "5"; //adding 5 to first number
			result = element1; //display actual number after adding 5
		}
		else {
			element2 += "5"; //adding 5 to second number
			result = element2;
		}
	}
	UpdateData(FALSE); //Update Edit Control
}


void CJPOCalculatorProjectDlg::OnBnClickedButton6()
{
	if (result != _T("0")) { //check if 0 is added, we cant have number 01
		if (check_element == 1) { //checking which number you operate
			element1 += "6"; //adding 6 to first number
			result = element1; //display actual number after adding 6
		}
		else {
			element2 += "6"; //adding 6 to second number
			result = element2;
		}
	}
	UpdateData(FALSE); //Update Edit Control
}


void CJPOCalculatorProjectDlg::OnBnClickedButton7()
{
	if (result != _T("0")) { //check if 0 is added, we cant have number 01
		if (check_element == 1) { //checking which number you operate
			element1 += "7"; //adding 7 to first number
			result = element1; //display actual number after adding 7
		}
		else {
			element2 += "7"; //adding 7 to second number
			result = element2;
		}
	}
	UpdateData(FALSE); //Update Edit Control
}


void CJPOCalculatorProjectDlg::OnBnClickedButton8()
{
	if (result != _T("0")) { //check if 0 is added, we cant have number 01
		if (check_element == 1) { //checking which number you operate
			element1 += "8"; //adding 8 to first number
			result = element1; //display actual number after adding 8
		}
		else {
			element2 += "8"; //adding 8 to second number
			result = element2;
		}
	}
	UpdateData(FALSE); //Update Edit Control
}


void CJPOCalculatorProjectDlg::OnBnClickedButton9()
{
	if (result != _T("0")) { //check if 0 is added, we cant have number 01
		if (check_element == 1) { //checking which number you operate
			element1 += "9"; //adding 9 to first number
			result = element1; //display actual number after adding 9
		}
		else {
			element2 += "9"; //adding 9 to second number
			result = element2;
		}
	}
	UpdateData(FALSE); //Update Edit Control
}





void CJPOCalculatorProjectDlg::OnBnClickedButtonPlus()
{
	if (result != _T("")) { //cheching if we have first number
		check_element = 2; //changing editing number to 2
		f_element1 = _ttof(result); //converting CString to numeric value
		result = _T(""); //clear display value
		UpdateData(FALSE); //Update Edit Control
		operation = 1; //setting operation to 'plus'
	}
}

void CJPOCalculatorProjectDlg::OnBnClickedButtonMinus()
{
	if (result != _T("")) { //cheching if we have first number
		check_element = 2; //changing editing number to 2
		f_element1 = _ttof(result); //converting CString to numeric value
		result = _T(""); //clear display value
		UpdateData(FALSE); //Update Edit Control
		operation = 2; //setting operation to 'minus'
	}
}

void CJPOCalculatorProjectDlg::OnBnClickedButtonMultiplication()
{
	if (result != _T("")) { //cheching if we have first number
		check_element = 2; //changing editing number to 2
		f_element1 = _ttof(result); //converting CString to numeric value
		result = _T(""); //clear display value
		UpdateData(FALSE); //Update Edit Control
		operation = 3; //setting operation to 'multiplication'
	}
}

void CJPOCalculatorProjectDlg::OnBnClickedButtonDivide()
{
	if (result != _T("")) { //cheching if we have first number
		check_element = 2; //changing editing number to 2
		f_element1 = _ttof(result); //converting CString to numeric value
		result = _T(""); //clear display value
		UpdateData(FALSE); //Update Edit Control
		operation = 4; //setting operation to 'divide'
	}
}

void CJPOCalculatorProjectDlg::OnBnClickedButtonEqual()
{
	if (check_element == 2) { //check if we have to numbers
		if (result != _T("")) { //check if we have second number
			f_element2 = _ttof(result); //converting CString to numeric value
			result = _T(""); //clear displaying value
		}
		if (operation == 1) { // '+' operation
			EndResult = f_element1 + f_element2;
			result.Format(_T("%.3f"), EndResult); //converting float to CString
		}
		if (operation == 2) { // '-' operation
			EndResult = f_element1 - f_element2;
			result.Format(_T("%.3f"), EndResult); //converting float to CString
		}
		if (operation == 3) { // '*' operation
			EndResult = f_element1 * f_element2;
			result.Format(_T("%.3f"), EndResult); //converting float to CString
		}
		if (operation == 4) { // '/' operation
			if (f_element2 == 0) {
				result = "We can't divide by 0";
			}
			else {
				EndResult = f_element1 / f_element2;
				result.Format(_T("%.3f"), EndResult); //converting float to CString
			}
		}
	}
	UpdateData(FALSE); //Update Edit Control
	element2 = _T(""); //clear second number
	element1 = _T(""); //clear first number
	check_element = 1 ; //changing to first number
}

void CJPOCalculatorProjectDlg::OnBnClickedButtonDelete()     // deleting the last digit
{
	if (result != _T("")) { //check if we have some number
		if (check_element == 1) {
			element1 = element1.Left(element1.GetLength() - 1); //deleting last digit
			result = element1; //update display number
		}
		else {
			element2 = element2.Left(element2.GetLength() - 1);
			result = element2;
		}
		UpdateData(FALSE); //Update Edit Control
	}
}


void CJPOCalculatorProjectDlg::OnBnClickedButtonClear() //clear everything
{
	element1 = _T("");
	element2 = _T("");
	result = _T("");
	bin = _T("");
	hex = _T("");
	oct = _T("");
	EndResult = 0;
	UpdateData(FALSE); //Update Edit Control
	check_element = 1;
}


void CJPOCalculatorProjectDlg::OnBnClickedButtonPoint()  //adding a point
{
	if (result != _T("")) { //check if we have some number, we cant have number starting with '.'
		if (result.Find('.') <= 0) { //checking if we have already added '.'
			if (check_element == 1) {
				element1 += "."; //adding '.' to number
				result = element1; //update display number
			}
			else {
				element2 += ".";
				result = element2;
			}
		}
		UpdateData(FALSE); //Update Edit Control
	}
}


void CJPOCalculatorProjectDlg::OnBnClickedButtonOpposite() //changing the number to the opposite
{
	if (result != _T("")) { 
		if (result.Find('-') < 0) { //check if we have already changed the number
			CString minus = _T("-"); //Cstring variable = "-"
			result = minus + result; //adding '-' to display 
		}
		else {
			result.Delete(0, 1); //changing the number to positive
		}
		UpdateData(FALSE); //Update Edit Control
	}
}


void CJPOCalculatorProjectDlg::OnBnClickedButtonSqrt() //calculating square root of a number
{
	if (result != _T("")) { //check if we have some number
		float square_root{}; 
		square_root = _ttof(result); //converting CString to numeric value
		if (square_root < 0) {
			result = "Only for positive numbers!";
		}
		else{
			square_root = sqrt(square_root); //calculating square root
			result.Format(_T("%.3f"), square_root); //converting float to CString
		}
		
		if (check_element == 1) {
			element1.Format(_T("%.3f"), square_root);
		}
		else {
			element2.Format(_T("%.3f"), square_root);
		}
		UpdateData(FALSE); //Update Edit Control
	}
}


void CJPOCalculatorProjectDlg::OnBnClickedButtonBinary() //display binary representation
{
	if (result != _T("")) { //check if we have some number
		bin = result; //display value 
		float f_bin;
		std::string s_bin;
		f_bin = _ttof(bin); //converting CString to numeric value 
		if (f_bin > 65535) {
			bin = "Too big number!";
		}
		else if (f_bin < -65535) {
			bin = "Too small number!";
		}

		else {
			s_bin = std::bitset<16>(f_bin).to_string(); //16-bit binary string
			bin = s_bin.c_str(); // converting string to CString
		}
		UpdateData(FALSE); //Update Edit Control
	}
}


void CJPOCalculatorProjectDlg::OnBnClickedButtonHex() //display hex representation 
{
	if (result != _T("")) { //check if we have some number
		hex = result;  //display value 

		int i_hex; //given value 
		int r; //remainder
		std::string s_hex = ""; //string value that keep hex value
		const char c_hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
		
		i_hex = _ttof(hex); //CString to numeric value 

		if (i_hex > 2147483646) {
			hex = "Too much number!";
		}
		else if (i_hex < 0) {
			hex = "Only for positive numbers!";
		}
		else {
			while (i_hex != 0) //converting to hex
			{
				r = i_hex % 16;
				s_hex = c_hex[r] + s_hex;;
				i_hex = i_hex / 16;
			}
			hex = s_hex.c_str(); //converting string to CString
		}
		
		UpdateData(FALSE); //Update Edit Control
	}
}


void CJPOCalculatorProjectDlg::OnBnClickedButtonOctal()
{
	if (result != _T("")) { //chceck if we have some value 
		oct = result; //display value
		int oct_num{}; //given value
		int r{}; //remainder
		int oct_sum{}; //end octal value

		oct_num = _ttof(oct); //converting CString to numeric value 

		if (oct_num > 2147483646) {
			oct = "Too big number!";
		}
		else if (oct_num < 0) {
			oct = "Only for positive numbers!";
		}
		else {                                         //convering to octal
			for (int i = 1; oct_num > 0; i = i * 10) {
				r = oct_num % 8;
				oct_num = oct_num / 8;
				oct_sum += (r * i);
			}
			oct.Format(_T("%d"), oct_sum); //converting string to CString
		}
		UpdateData(FALSE); //Update Edit Control
	}
}
