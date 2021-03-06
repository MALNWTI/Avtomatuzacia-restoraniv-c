//---------------------------------------------------------------------------

#ifndef CTabH
#define CTabH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TTab : public TForm
{
__published:	// IDE-managed Components
	TImage *IExit;
	TImage *IDel;
	TImage *IRed;
	TImage *IDod;
	TButton *St1;
	TButton *St2;
	TButton *St3;
	TButton *St4;
	TButton *St5;
	TButton *St6;
	void __fastcall IExitClick(TObject *Sender);
	void __fastcall IDodClick(TObject *Sender);
	void __fastcall St1Click(TObject *Sender);
	void __fastcall St2Click(TObject *Sender);
	void __fastcall St3Click(TObject *Sender);
	void __fastcall St4Click(TObject *Sender);
	void __fastcall St5Click(TObject *Sender);
	void __fastcall St6Click(TObject *Sender);
	void __fastcall IDelClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTab(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTab *Tab;
//---------------------------------------------------------------------------
#endif
