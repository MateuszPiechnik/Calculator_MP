#include <iostream>
#include <Cstring>
#include <bitset>
#include <string>
// JPO_Calculator_ProjectDlg.h : header file
//

#pragma once


// CJPOCalculatorProjectDlg dialog
class CJPOCalculatorProjectDlg : public CDialogEx
{
// Construction
public:
	CJPOCalculatorProjectDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_JPO_CALCULATOR_PROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CString result = _T(""); // display variable
	CString element1 = _T(""); //keep displayed value of 1 number
	CString element2 = _T(""); //keep displayed value of 2 number
	CString bin = _T(""); //display bin value
	CString hex = _T(""); //display hex value
	CString oct = _T("");; //display oct value

	int check_element{ 1 }; // check on which number we operate 
	int operation{}; // check which operator was clicked 
	float f_element1{}; // float value of 1 number
	float f_element2{}; //float value of 2 number
	float EndResult{}; //value after operation
	

public:
	afx_msg void OnEnChangeEdit1();
	// button functions
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();

	afx_msg void OnBnClickedButtonPlus();
	afx_msg void OnBnClickedButtonEqual();
	afx_msg void OnBnClickedButtonMinus();
	afx_msg void OnBnClickedButtonMultiplication();
	afx_msg void OnBnClickedButtonDivide();

	afx_msg void OnBnClickedButtonDelete();
	afx_msg void OnBnClickedButtonClear();

	afx_msg void OnBnClickedButtonPoint();
	afx_msg void OnBnClickedButtonOpposite();

	afx_msg void OnBnClickedButtonSqrt();
	afx_msg void OnBnClickedButtonBinary();
	afx_msg void OnBnClickedButtonHex();
	afx_msg void OnBnClickedButtonOctal();

};
