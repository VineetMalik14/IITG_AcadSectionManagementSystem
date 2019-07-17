/////////////////////////////////////////////////
#include"stdafx.h"
#include "globalVars.h"
#include <algorithm>
#include "TTfunctions.h"
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

/////////////////////////////////////////////////////////////

//Function to assign rooms for all exams
//For each slot abtain a list of courses in that slot
//For each course abtain a list of students in them
//Student Assignment pending

//////////////////////////////////////////////////////////////
int assignExamRooms() {
	// Obtain all rooms with their capacity and store in pair form ordered by room capacity increasing
	vector < pair<int, string>> roomSlot[4], ref;

	OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
	DB_Connection->ConnectionString = globalVars::strCnvStr(globalVars::connString);
	DB_Connection->Open();

	try
	{
		OleDbCommand cmd1, cmd2;
		cmd1.Connection = DB_Connection;
		cmd2.Connection = DB_Connection;

		cmd1.CommandText = "DELETE * FROM ExamTT";
		cmd1.ExecuteScalar();

		cmd1.CommandText = "SELECT * FROM Rooms ORDER BY Capacity ASC";
		OleDbDataReader ^ dr1 = cmd1.ExecuteReader();


		while (dr1->Read()) {
			int Capacity = StrCnvInt(dr1["Capacity"]->ToString());
			string RoomID = globalVars::StrCnvstr( dr1["RoomID"]->ToString());
			for (int i = 0; i < globalVars::countSlots - 1; ++i)
			{
				cmd2.CommandText = "INSERT INTO ExamTT (RoomID,DaySlot) VALUES (\"" + globalVars::strCnvStr(RoomID) + "\",\"" + 
				globalVars::strCnvStr(globalVars::Slots[i]) + "\" )";
				cmd2.ExecuteScalar();
			}
			ref.push_back(make_pair(Capacity / 4, RoomID));
		}

	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	try
	{
		OleDbCommand cmd1, cmd2;
		cmd1.Connection = DB_Connection;
		cmd2.Connection = DB_Connection;
		int c = 0;
		for (int i = 0; i < globalVars::countSlots - 1; ++i)
		{
			String ^ DaySlot = globalVars::strCnvStr(globalVars::Slots[i]);
			cmd1.CommandText = "SELECT CoursesTT.CourseID,count(*) AS CT FROM CoursesTT INNER JOIN StudentCourses ON CoursesTT.CourseID=StudentCourses.CourseID " +
			                   "WHERE CoursesTT.SlotAssigned=\"" + DaySlot +
			                   "\" GROUP BY CoursesTT.CourseID ORDER BY count(*) DESC";
			OleDbDataReader ^ dr1 = cmd1.ExecuteReader();
			for (int i = 0; i < 4; ++i)
			{
				roomSlot[i] = ref;
			}

			while (dr1->Read()) {
				int ctEnroll = StrCnvInt(dr1["CT"]->ToString());
				String ^ CourseID = dr1["CourseID"]->ToString();

				// For each Course Assign a slot in the rooms in slot c
				while (ctEnroll > 0) {
					ctEnroll -= roomSlot[c][roomSlot[c].size() - 1].first;

					//Assign the Room slot to the Course
					cmd2.CommandText = "UPDATE ExamTT SET Slot" + Convert::ToString(c + 1) + " = \"" + CourseID + "\" WHERE RoomID = \"" +
					                   globalVars::strCnvStr(roomSlot[c][roomSlot[c].size() - 1].second) + "\" AND DaySlot=\"" + DaySlot + "\"";
					cmd2.ExecuteScalar();

					// Loop invariants
					roomSlot[c].pop_back();
					c = (c + 1) % 4;
				}
			}

			dr1->Close();
		}
	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	return 1;
}
