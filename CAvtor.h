//---------------------------------------------------------------------------

#ifndef CAvtorH
#define CAvtorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "DBAccess.hpp"
#include "MemDS.hpp"
#include "MySQLUniProvider.hpp"
#include "Uni.hpp"
#include "UniProvider.hpp"
#include <Data.DB.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Graphics.hpp>
//---------------------------------------------------------------------------
class TAvtor : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *ELogin;
	TLabel *Label2;
	TEdit *EParol;
	TImage *IAvtor;
	TMySQLUniProvider *MySQLUniProvider1;
	TUniQuery *UAvtor;
	TUniConnection *Connect;
	TImage *IExit;
	TEdit *Eip;
	TButton *BZamina;
	TLabel *Leror;
	void __fastcall BZaminaClick(TObject *Sender);
	void __fastcall IExitClick(TObject *Sender);
	void __fastcall IAvtorClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAvtor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAvtor *Avtor;
//---------------------------------------------------------------------------
#endif
