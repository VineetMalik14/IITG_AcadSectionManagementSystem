#pragma once
//#include "stdafx.h"
#using <mscorlib.dll>
#using <System.Data.dll>
#using <System.dll>
#include <vector>
#include <cstring>
#include <string>
#include <map>
#include <sstream>
#include <iostream>


#ifndef GLOBALVARS
#define GLOBALVARS
#define StrCnvInt(x) System::Convert::ToInt32(x)

namespace globalVars
{

	std::string StrCnvstr(System::String ^ x);
	System::String ^ strCnvStr(std::string x);

	extern std::string curSession;
	extern std::string curSemester;
	extern std::string nextSession;
	extern std::string nextSemester;
	extern std::string connString;
	extern std::string CourseCodes[];
	extern std::string courseNumCodes[];
	extern std::string Slots[];
	extern int countDepts;
	extern int countSlots;
	System::String^ retNumCode(std::string s);
	System::String^ retNumCode(System::String ^ s);
	System::String ^ ClassSlotToLabSlot(System::String ^ s);
	void newSemester();
}

#endif