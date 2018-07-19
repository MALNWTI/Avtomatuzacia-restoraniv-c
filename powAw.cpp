//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("CVuvodTabl.cpp", VuvodTabl);
USEFORM("CTab.cpp", Tab);
USEFORM("CDelTabl.cpp", DelTabl);
USEFORM("CAvtor.cpp", Avtor);
USEFORM("CSozSt.cpp", SozSt);
USEFORM("CKilTov.cpp", KilTov);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TAvtor), &Avtor);
		Application->CreateForm(__classid(TTab), &Tab);
		Application->CreateForm(__classid(TSozSt), &SozSt);
		Application->CreateForm(__classid(TKilTov), &KilTov);
		Application->CreateForm(__classid(TVuvodTabl), &VuvodTabl);
		Application->CreateForm(__classid(TDelTabl), &DelTabl);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
