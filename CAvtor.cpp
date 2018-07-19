//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "CAvtor.h"
#include "CTab.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "MySQLUniProvider"
#pragma link "Uni"
#pragma link "UniProvider"
#pragma resource "*.fmx"
TAvtor *Avtor;
//---------------------------------------------------------------------------
__fastcall TAvtor::TAvtor(TComponent* Owner)
	: TForm(Owner)
{
Connect->Connected=false;
}
//---------------------------------------------------------------------------

void __fastcall TAvtor::BZaminaClick(TObject *Sender)
{
Connect->Server=Eip->Text;
}
//---------------------------------------------------------------------------

void __fastcall TAvtor::IExitClick(TObject *Sender)
{
Avtor->Close();
}
//---------------------------------------------------------------------------

void __fastcall TAvtor::IAvtorClick(TObject *Sender)
{
Leror->Visible=false;
String log;
String par;
Connect->Connected=true;
UAvtor->Active=true;
UAvtor->Open();
UAvtor->First();
while ((ELogin->Text!=log)&&(EParol->Text!=par))
{
	log=UAvtor->FieldByName("login")->AsString;
	par=UAvtor->FieldByName("parol")->AsString;
	UAvtor->Next();
}
if(((ELogin->Text==log)&&(ELogin->Text!=""))&&(EParol->Text==par))
{Tab->Show();
 Avtor->Visible=false;}
else
Leror->Visible=true;
}
//---------------------------------------------------------------------------

