//---------------------------------------------------------------------------

#ifndef CDelTablH
#define CDelTablH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "DBAccess.hpp"
#include "Uni.hpp"
#include <FMX.Controls.Presentation.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TDelTabl : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TComboBox *NambTable;
	TButton *Button1;
	TUniSQL *SDelete;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDelTabl(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDelTabl *DelTabl;
//---------------------------------------------------------------------------
#endif
