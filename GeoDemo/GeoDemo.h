// GeoDemo.h : main header file for the GEODEMO application
//

#if !defined(AFX_GEODEMO_H__AAF101C1_ACEC_4B5F_833E_59F780524D93__INCLUDED_)
#define AFX_GEODEMO_H__AAF101C1_ACEC_4B5F_833E_59F780524D93__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CGeoDemoApp:
// See GeoDemo.cpp for the implementation of this class
//

class CGeoDemoApp : public CWinApp
{
public:
	CGeoDemoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGeoDemoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CGeoDemoApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GEODEMO_H__AAF101C1_ACEC_4B5F_833E_59F780524D93__INCLUDED_)
