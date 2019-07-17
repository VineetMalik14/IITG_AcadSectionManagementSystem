/////////////////////////////////////////////////
#include"stdafx.h"
#include "globalVars.h"
#include <algorithm>
#include"TTfunctions.h"
///////////////////////////////////////////////// 
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
////////////////////////////////////////////////////////////

int CountRegisteredCourse(String ^ CourseID);
bool compr(pair <int,string> a, pair<int, string> b);

/////////////////////////////////////////////////////////////

//Function to assign rooms to various classes
//For each go to interdepartmental courses and assign a room
//Room Assignment for HSS and MA coming soon

//////////////////////////////////////////////////////////////
int assignRooms() {
	// Obtain all rooms with their capacity and store in pair form ordered by room capacity increasing
	vector <pair<int, string>> rooms;

	// Create a map of slots  referring to vector rooms
	map<string, vector<pair<int, string>>> slots;


	try
	{
		OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
		DB_Connection->ConnectionString = globalVars::strCnvStr(globalVars::connString);
		DB_Connection->Open();
		OleDbCommand cmd1;
		cmd1.Connection = DB_Connection;

		//Assign classroom courses first.
		cmd1.CommandText = "SELECT * FROM Rooms ORDER BY Capacity ASC";

		OleDbDataReader ^ Dr1 = cmd1.ExecuteReader();
		while (Dr1->Read()) {
			string RoomID = globalVars::StrCnvstr(Dr1["RoomID"]->ToString() );
			int Capacity = StrCnvInt(Dr1["Capacity"]->ToString());
			rooms.push_back(make_pair(Capacity, RoomID));
		}

	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	// Initialise each slot with a rooms
	for (int c = 0; c < globalVars::countSlots; ++c)
	{
		slots[globalVars::Slots[c]] = rooms;
	}

	/*******************************************************************************
	*For each course in CourseTT
		Compute number of students
		Assign a room in the assigned slot according to requirements
		remove the assigned room from that slot
	********************************************************************************/

	try
	{
		OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
		DB_Connection->ConnectionString = globalVars::strCnvStr(globalVars::connString);
		DB_Connection->Open();
		OleDbCommand cmd1;
		cmd1.Connection = DB_Connection;
		cmd1.CommandText = "SELECT CoursesTT.* FROM CourseList INNER JOIN CoursesTT ON CourseList.CourseID = CoursesTT.CourseID "+
			" WHERE CourseList.Credits Like \"_-_-0-_\" ORDER BY CoursesTT.CourseID ";

		OleDbDataReader^ dr1 = cmd1.ExecuteReader();
		while (dr1->Read()) {
			try
			{
				string SlotAssigned = globalVars::StrCnvstr( dr1["SlotAssigned"]->ToString());
				String ^ CourseID = dr1["CourseID"]->ToString();
				int ctRegistered = CountRegisteredCourse(CourseID);

				// Search for a room in that time slot satisfying capacity requirements
				string s="0";
				pair <int,string> asdf= make_pair(ctRegistered,s);
				int pos = lower_bound(
					slots[SlotAssigned].begin(),
					slots[SlotAssigned].end(),
					asdf,compr) -
				          slots[SlotAssigned].begin();

				OleDbCommand cmd2;
				cmd2.Connection = DB_Connection;
				cmd2.CommandText = "UPDATE CoursesTT SET RoomAssigned=\"" +
					globalVars::strCnvStr(slots[SlotAssigned][pos].second) +
					"\" WHERE CourseID=\""+CourseID+"\"";
				slots[SlotAssigned].erase(slots[SlotAssigned].begin()+pos);
				cmd2.ExecuteScalar();
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	return 0;
}

int CountRegisteredCourse(String ^ CourseID)
{
	try
	{
		OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
		DB_Connection->ConnectionString = globalVars::strCnvStr(globalVars::connString);
		DB_Connection->Open();
		OleDbCommand cmd1;
		cmd1.Connection = DB_Connection;
		cmd1.CommandText = "SELECT Count(*) AS [CtStu] FROM [StudentCourses] WHERE [CourseID] = \"" + CourseID +
		                   "\" AND [Session]=\"" + 
						   globalVars::strCnvStr(globalVars::curSession) + 
						   "\" AND [Semester]=\"" +
		                   globalVars::strCnvStr(globalVars::curSemester)+"\"";

		OleDbDataReader^ dr1 = cmd1.ExecuteReader();
		dr1->Read();

		return StrCnvInt(dr1["CtStu"]->ToString());

	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	return 0;


}

bool compr(pair<int,string> a, pair<int, string> b) {
	return a.first < b.first;
}
