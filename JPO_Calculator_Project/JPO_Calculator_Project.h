
// JPO_Calculator_Project.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CJPOCalculatorProjectApp:
// See JPO_Calculator_Project.cpp for the implementation of this class
//

class CJPOCalculatorProjectApp : public CWinApp
{
public:
	CJPOCalculatorProjectApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CJPOCalculatorProjectApp theApp;
