//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "COpTab.h"
#include "CTab.h"
#include "CSozSt.h"
#include "CAvtor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "Uni"
#pragma resource "*.fmx"
TOpTab *OpTab;
extern int t;
//---------------------------------------------------------------------------
__fastcall TOpTab::TOpTab(TComponent* Owner)
	: TForm(Owner)
{
UOpTab->Active=true;
UOpTab->Execute();
String Nt;
String Km;
String id;
NambTabl->Open();
NambTabl->First();
while (id!=t)
{
	Nt=NambTabl->FieldByName("Ntable")->AsString;
	Km=NambTabl->FieldByName("kmisc")->AsString;
	id=NambTabl->FieldByName("idtable")->AsString;
	NambTabl->Next();
}
ENTab->Text=Nt;
EKilKli->Text=Km;
}
//---------------------------------------------------------------------------
//--------------------------------------------------------------------------

void __fastcall TOpTab::IExitClick(TObject *Sender)
{
Tab->Visible=true;
OpTab->Close();
}
//---------------------------------------------------------------------------

