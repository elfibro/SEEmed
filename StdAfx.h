////////////////////////////////////////////////////////////////////////
//
// StdAfx.h
//
// This file was generated by MapForce 2023r2.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the MapForce Documentation for further details.
// http://www.altova.com/mapforce
//
////////////////////////////////////////////////////////////////////////


#ifndef Mapping_STDAFX_H_INCLUDED
#define Mapping_STDAFX_H_INCLUDED

#pragma once

#ifdef _MFC_VER	// suppress annoying warnings in Visual C++
#pragma warning ( disable : 4800 )	// forcing value to bool 'true' or 'false' (performance warning)
#endif // _MFC_VER


#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#include <afx.h>
#include <afxwin.h>			// MFC core and standard components
#include <afxext.h>			// MFC extensions
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#include <comdef.h>

#ifndef _AFX_NO_AFXCMN_SUPPORT
	#include <afxcmn.h>		// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT


#include <exception>




// If you get a compiler error on the line below, add the path to the DLL
// at Tools|Options|Projects and Solutions|VC++ Directories|Include Files
// Hint: Depending on your installation it might be C:\Program Files\Common Files\System\ADO
#import "msado15.dll" rename("EOF", "EndOfFile") no_implementation


#pragma warning( disable: 4786 )
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <set>
#include <memory>

#include "../Altova/Altova.h"
#include "../Altova/SchemaTypes.h"
#include "../Altova/AltovaException.h"



#include "../AltovaDb/AltovaDB.h"

#include "../AltovaFunctions/Core.h"
#include "../AltovaFunctions/Lang.h"
#include "../AltovaFunctions/Edifact.h"
using namespace altova;

#include "vmf_vmf1_entretorsultat.h"
#include "vmf_vmf2_entretorsultat.h"
#include "vmf_vmf3_entretorsultat.h"


//{{AFX_INSERT_LOCATION}}

#endif // Mapping_STDAFX_H_INCLUDED
