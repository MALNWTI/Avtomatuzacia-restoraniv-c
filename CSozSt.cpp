//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "CSozSt.h"
#include "CTab.h"
#include "CAvtor.h"
#include "CKilTov.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "Uni"
#pragma resource "*.fmx"
TSozSt *SozSt;
int i=1;
String b;
int o;
String on;
//---------------------------------------------------------------------------
__fastcall TSozSt::TSozSt(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSozSt::TeaCofeClick(TObject *Sender)
{
GMenu->Visible=false;
GTeaCofe->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::BackZKClick(TObject *Sender)
{
GMenu->Visible=true;
GTeaCofe->Visible=false;
GAlkogol->Visible=false;
GNapoi->Visible=false;
GKokteili->Visible=false;
GSalatu->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::IBackClick(TObject *Sender)
{
UVuvod->Active=true;
i=1;
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
if(Nt==1)
{SDelete->SQL->Text=("UPDATE tab1 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL;");
SDelete->Execute(); }
if(Nt==2)
{SDelete->SQL->Text=("UPDATE tab2 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL;");
SDelete->Execute(); }
if(Nt==3)
{SDelete->SQL->Text=("UPDATE tab3 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL;");
SDelete->Execute(); }
if(Nt==4)
{SDelete->SQL->Text=("UPDATE tab4 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL;");
SDelete->Execute(); }
if(Nt==5)
{SDelete->SQL->Text=("UPDATE tab5 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL;");
SDelete->Execute(); }
if(Nt==6)
{SDelete->SQL->Text=("UPDATE tab6 SET tname=NULL, kilkist=NULL, zina=NULL, onesht=NULL;");
SDelete->Execute(); }
UVuvod->Refresh();
Tab->Visible=true;
SozSt->Close();
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::AmerukanoClick(TObject *Sender)
{int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=14;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Amerikano', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Amerikano', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Amerikano', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Amerikano', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Amerikano', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Amerikano', onesht="+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::BlackTeaClick(TObject *Sender)
{
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=15;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Black Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Black Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Black Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Black Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Black Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Black Tea', onesht=1"+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::Button1Click(TObject *Sender)
{
i=1;
int idN,idK;
String Nt;
String Km;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
idK=Kmisc->ItemIndex;
Km=IntToStr(idK+1);
String Ntable("UPDATE tble SET Ntable="+Nt+" Where idtable="+Nt+";");
String kmisc("UPDATE tble SET kmisc="+Km+" Where idtable="+Nt+";");
SStvorenna->SQL->Text=Ntable+kmisc;
SStvorenna->Execute();
if(Nt==1)
{Tab->St1->Visible=true;}
if(Nt==2)
{Tab->St2->Visible=true;}
if(Nt==3)
{Tab->St3->Visible=true;}
if(Nt==4)
{Tab->St4->Visible=true;}
if(Nt==5)
{Tab->St5->Visible=true;}
if(Nt==6)
{Tab->St6->Visible=true;}
Tab->Visible=true;
SozSt->Close();
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::EspresoClick(TObject *Sender)
{
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=14;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Espresso', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Espresso', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Espresso', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Espresso', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Espresso', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Espresso', onesht=1"+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::FruktTeaClick(TObject *Sender)
{
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=15;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Fruit Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Fruit Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Fruit Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Fruit Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Fruit Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Fruit Tea', onesht=1"+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::GarChokoladClick(TObject *Sender)
{
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=22;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Hot Chokolate', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Hot Chokolate', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Hot Chokolate', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Hot Chokolate', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Hot Chokolate', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Hot Chokolate', onesht=1"+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::GreenTeaClick(TObject *Sender)
{
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=15;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Green Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Green Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Green Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Green Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Green Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Green Tea', onesht=1"+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::KakaoClick(TObject *Sender)
{
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=20;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Kakao', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Kakao', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Kakao', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Kakao', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Kakao', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Kakao', onesht=1"+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::KapuzinoClick(TObject *Sender)
{
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=18;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Cappuccino', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Cappuccino', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Cappuccino', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Cappuccino', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Cappuccino', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Cappuccino', onesht=1"+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::LateClick(TObject *Sender)
{
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=18;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Latte', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Latte', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Latte', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Latte', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Latte', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Latte', onesht=1"+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::MokazinoClick(TObject *Sender)
{
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=20;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Caffe Mocha', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Caffe Mocha', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Caffe Mocha', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Caffe Mocha', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Caffe Mocha', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Caffe Mocha', onesht=1"+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::TravTeaClick(TObject *Sender)
{
int idN;
String Nt;
idN=Ntab->ItemIndex;
Nt=IntToStr(idN+1);
o=20;
on=IntToStr(o);
b=i;
if(Nt==1)
{SStvSt->SQL->Text=("UPDATE tab1 SET tname='Herbal Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==2)
{SStvSt->SQL->Text=("UPDATE tab2 SET tname='Herbal Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==3)
{SStvSt->SQL->Text=("UPDATE tab3 SET tname='Herbal Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==4)
{SStvSt->SQL->Text=("UPDATE tab4 SET tname='Herbal Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==5)
{SStvSt->SQL->Text=("UPDATE tab5 SET tname='Herbal Tea', onesht="+on+" WHERE idtab="+b+";");}
if(Nt==6)
{SStvSt->SQL->Text=("UPDATE tab6 SET tname='Herbal Tea', onesht=1"+on+" WHERE idtab="+b+";");}
SStvSt->Execute();
KilTov->Show();
i++;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TSozSt::AlkogolClick(TObject *Sender)
{
GMenu->Visible=false;
GAlkogol->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::NapoiClick(TObject *Sender)
{
GMenu->Visible=false;
GNapoi->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::KokteliClick(TObject *Sender)
{
GMenu->Visible=false;
GKokteili->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::SalatuClick(TObject *Sender)
{
GMenu->Visible=false;
GSalatu->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::SikClick(TObject *Sender)
{
GNapoi->Visible=false;
GSoku->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TSozSt::BackSokuClick(TObject *Sender)
{
GNapoi->Visible=true;
GSoku->Visible=false;
}
//---------------------------------------------------------------------------

