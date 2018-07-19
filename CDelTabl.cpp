//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "CDelTabl.h"
#include "CAvtor.h"
#include "CTab.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "Uni"
#pragma resource "*.fmx"
TDelTabl *DelTabl;
//---------------------------------------------------------------------------
__fastcall TDelTabl::TDelTabl(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TDelTabl::Button1Click(TObject *Sender)
{
int Nt;
Nt=NambTable->ItemIndex;
if(Nt==0)
	{SDelete->SQL->Text=("UPDATE tab1 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute();
	 Tab->St1->Visible=false;}
	if(Nt==1)
	{SDelete->SQL->Text=("UPDATE tab2 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute();
	 Tab->St2->Visible=false;}
	if(Nt==2)
	{SDelete->SQL->Text=("UPDATE tab3 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute();
	 Tab->St3->Visible=false;}
	if(Nt==3)
	{SDelete->SQL->Text=("UPDATE tab4 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute();
	 Tab->St4->Visible=false;}
	if(Nt==4)
	{SDelete->SQL->Text=("UPDATE tab5 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute();
	 Tab->St5->Visible=false;}
	if(Nt==5)
	{SDelete->SQL->Text=("UPDATE tab6 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL WHERE idtab>1;");
	 SDelete->Execute();
	 Tab->St6->Visible=false;}
DelTabl->Close();
}
//---------------------------------------------------------------------------
