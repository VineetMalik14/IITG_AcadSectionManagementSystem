#include "stdafx.h"
#include "globalVars.h"
#include <msclr/marshal_cppstd.h>

namespace globalVars {
	std::string curSession;
	std::string curSemester;
	std::string nextSession;
	std::string nextSemester;
	std::string connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
	std::string CourseCodes[] =   {"CS", "EE", "ME", "CL", "DS", "BT", "CE", "CH", "PH", "MA", "HS"};
	std::string courseNumCodes[] = {"01", "02", "03", "04", "05", "06", "07", "12", "21", "23", "41"};
	std::string Slots[] = {"A", "B", "C", "D", "E", "A1", "B1", "C1", "D1", "E1", "F", "G"};
	int countDepts = 11;
	int countSlots = 12;
	std::string StrCnvstr(System::String ^ x) {
		return msclr::interop::marshal_as<std::string>(x);
	}
	System::String ^ strCnvStr(std::string x) {
		return msclr::interop::marshal_as<System::String ^>(x);
	} 
	System::String ^ retNumCode(std::string s) {
		if (s == "CS") return "01";
		if (s == "EE") return "02";
		if (s == "ME") return "03";
		if (s == "CL") return "04";
		if (s == "DS") return "05";
		if (s == "BT") return "06";
		if (s == "CE") return "07";
		if (s == "CH") return "12";
		if (s == "PH") return "21";
		if (s == "MA") return "23";
		if (s == "HS") return "41";
	}

	System::String ^ retNumCode(System::String ^ s) {
		if (s == "CS") return "01";
		if (s == "EE") return "02";
		if (s == "ME") return "03";
		if (s == "CL") return "04";
		if (s == "DS") return "05";
		if (s == "BT") return "06";
		if (s == "CE") return "07";
		if (s == "CH") return "12";
		if (s == "PH") return "21";
		if (s == "MA") return "23";
		if (s == "HS") return "41";
	}

	System::String ^ ClassSlotToLabSlot(System::String ^ s) {
		if (s == "A") return "ML5";
		if (s == "B") return "ML4";
		if (s == "C") return "ML3";
		if (s == "D") return "ML2";
		if (s == "E") return "ML1";
		if (s == "A1") return "AL5";
		if (s == "B1") return "AL4";
		if (s == "C1") return "AL3";
		if (s == "D1") return "AL2";
		if (s == "E1") return "AL1";
	}

	void newSemester() {
		if (curSemester == "Fall") {
			curSemester = "Spring";
		} else {
			curSemester = "Fall";
			std::stringstream ss(curSession.substr(5, 2));
			int year;
			ss >> year;
			year++;
			ss << "20" << year << "-" << year + 1;
			curSession = ss.str();
		}
	}
}