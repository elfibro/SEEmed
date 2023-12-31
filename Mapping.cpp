////////////////////////////////////////////////////////////////////////
//
// Mapping.cpp
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


#include "StdAfx.h"
#include "Mapping.h"
#include "MappingMapTodolibarr2.h"
using namespace std;




#ifdef _DEBUG
	#define new DEBUG_NEW
	#undef THIS_FILE
	static char THIS_FILE[] = __FILE__;
#endif

CWinApp theApp;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	tcerr << _T("Mapping Application") << endl;



	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		cerr << "Fatal Error: MFC initialization failed" << endl;
		return 1;
	}
	try
	{
		CoInitialize(NULL);
		{
			MappingMapTodolibarr2 MappingMapTodolibarr2Object;
			MappingMapTodolibarr2Object.Run(
				_T("Provider=SQLNCLI11.1; Data Source=CFPEI-ALEX\\SQLEXPRESS; User ID=\"\";Initial Catalog=SEEmed_0895452f-b7c1-4c00-a316-c6a6d0ea4bf4;Initial File Name=\"\";Integrated Security=SSPI"),
					_T("DSN=dolibarr2;UID=dolibarr;Pwd=HU!DnNLvuv9a7n;DATABASE=dolibarr;DSN=dolibarr2"),
					_T("DSN=dolibarr2;UID=dolibarr;Pwd=HU!DnNLvuv9a7n;DATABASE=dolibarr;DSN=dolibarr2"),
		_T("DSN=dolibarr2;UID=dolibarr;Pwd=HU!DnNLvuv9a7n;DATABASE=dolibarr;DSN=dolibarr2"));
		}
		CoUninitialize();

		tcerr << _T("Finished") << endl;
		return 0;
	}
	catch (CAltovaException& e)
	{
		if (e.IsUserException())
			tcerr << _T("User Exception: ");
		else
		tcerr << _T("Error: ");
		tcerr  << e.GetInfo().c_str() << endl;
		return 1;
	}
	catch (_com_error& e)
	{
#ifdef UNICODE
		TCHAR* source = e.Source();
		source = source ? source : _T("unknown");
		TCHAR* description = e.Description();
		description = description ? description : _T("no further information available");
#else
		_bstr_t src = e.Source();
		string_type source = (string_type)(((TCHAR*)src) ? src : "unknown");
		_bstr_t desc = e.Description();
		string_type description = (string_type)(((TCHAR*)desc) ? desc : "no further information available");
#endif
		tcerr << _T("COM-Error from ") << source << _T(":") << endl;
		tcerr << description << endl;
		return 1;
	}
	catch (altova::UserException& exception)
	{
		tcerr << "User Exception: " << exception.message() << endl;
		return 1;
	}catch (altova::Exception& exception)
	{
		tcerr << "Exception: " << exception.message() << endl;
		return 1;
	}
	catch (altova::Error& exception)
	{
		tcerr << "Error: " << exception.message() << endl;
		return 1;
	}
	catch (std::exception& e)
	{
		cerr << "Exception: " << e.what() << endl;
		return 1;
	}
	catch (CMemoryException*)
	{
		tcerr << _T("Out of memory") << endl;
		return 1;
	}
	catch (...)
	{
		tcerr << _T("Unknown error") << endl;
		return 1;
	}
}
