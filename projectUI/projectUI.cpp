// projectUI.cpp : main project file.
// projectUI.cpp : main project file.

#include "stdafx.h"
#include "Homepage.h"
#include "globalVars.h"

using namespace projectUI;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// At Every Start ------------------------------------------

	OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
	DB_Connection->ConnectionString = globalVars::strCnvStr(globalVars::connString);
	DB_Connection->Open();

	OleDbCommand  cmd ;
	cmd.CommandText = "SELECT CurrVars.[Session], CurrVars.Semester FROM CurrVars";
	cmd.Connection=DB_Connection;
	OleDbDataReader ^ dr1 = cmd.ExecuteReader();
	dr1->Read();
	globalVars::curSession = globalVars::StrCnvstr(dr1["Session"]->ToString());
	globalVars::curSemester = globalVars::StrCnvstr(dr1["Semester"]->ToString());
	globalVars::nextSession = globalVars::curSession;
	globalVars::nextSemester = globalVars::curSemester;
	dr1->Close();
	DB_Connection->Close();

	// Create the main window and run it
	Application::Run(gcnew Homepage());
	return 0;
}

