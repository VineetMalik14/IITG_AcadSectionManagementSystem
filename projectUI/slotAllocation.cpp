/////////////////////////////////////////////////
#include "StdAfx.h"
#include <algorithm>
#include "globalVars.h"
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

//////////////////////////////////////////////////////////////

int assignSlots()
{
	// Create a map of batches along with all slots empty
	map<string, map<string, bool>> batch;

	map<string, bool> IsSlotAssigned; 

	// reference vector for inserting into batch as value
	map<string, bool> ref;
	for (size_t c = 0; c < globalVars::countSlots; c++)
	{
		ref[globalVars::Slots[c]] = false;
	}

	OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
	DB_Connection->ConnectionString = globalVars::strCnvStr(globalVars::connString);
	DB_Connection->Open();


	OleDbCommand cmd3;
	cmd3.Connection = DB_Connection;
	cmd3.CommandText = "SELECT CoursesTT.CourseID FROM CoursesTT";

	OleDbDataReader ^ Dr3 = cmd3.ExecuteReader();
	while (Dr3->Read())
	{
		IsSlotAssigned[globalVars::StrCnvstr(Dr3["CourseID"]->ToString())] = false;
	}
	Dr3->Close();

	try
	{
		OleDbCommand cmd1;
		cmd1.Connection = DB_Connection;

		cmd1.CommandText = "SELECT CourseList.CourseType, CoursesTT.TimeSlot, CoursesTT.OfferedTo, CoursesTT.CourseID, CourseList.Credits FROM CourseList INNER JOIN CoursesTT ON CourseList.CourseID = CoursesTT.CourseID ORDER BY Len(OfferedTo) DESC ";

		// Obtain all the batches that are offered to this course
		OleDbDataReader ^ Dr1 = cmd1.ExecuteReader();
		while (Dr1->Read())
		{
			if(IsSlotAssigned[globalVars::StrCnvstr(Dr1["CourseID"]->ToString())] == true){
				continue;
			}

			string class_credits, lab_credits;
			stringstream ssCredits(globalVars::StrCnvstr(Dr1["Credits"]->ToString()));
			getline(ssCredits, class_credits, '-');

			// Assign classroom courses first.
			if(class_credits!="0"){

				string OfferedTo;
				stringstream ss(globalVars::StrCnvstr(Dr1["OfferedTo"]->ToString()));
				vector<string> currBatches;
				while (getline(ss, OfferedTo, ';'))
				{
					if (batch.find(OfferedTo) == batch.end())
						batch[OfferedTo] = ref;
					currBatches.push_back(OfferedTo);
				}
				string slot = "A";
				if (Dr1["CourseType"] == "Minor")
					slot = "F";
				else if (Dr1["TimeSlot"]->ToString() == "M")
				{
					int st = 0, end = 5;
					for (size_t i = st; i < end; i++)
					{
						int c = 0;
						for (c = 0; c < currBatches.size(); c++)
						{
							if (batch[currBatches[c]][globalVars::Slots[i]])
								break;
						}

						if (c != currBatches.size())
							continue;

						slot = globalVars::Slots[i];
						for (c = 0; c < currBatches.size(); c++)
						{
							batch[currBatches[c]][slot]=true;
						}
						break;
					}
				}
				else
				{
					int st = 5, end = 10;
					for (size_t i = st; i < end; i++)
					{
						int c = 0;
						for (c = 0; c < currBatches.size(); c++)
						{
							if (batch[currBatches[c]][globalVars::Slots[i]])
								break;
						}

						if (c != currBatches.size())
							continue;
						slot = globalVars::Slots[i];
						for (c = 0; c < currBatches.size(); c++)
						{
							batch[currBatches[c]][slot]=true;
						}

						break;
					}
				}

				vector<string> clubbedCourses;
				clubbedCourses.push_back(globalVars::StrCnvstr(Dr1["CourseID"]->ToString()));

				OleDbCommand cmd2;
				cmd2.Connection = DB_Connection;

				cmd2.CommandText = "SELECT CoursesTT.CourseID, CoursesTT.ClubbedWith FROM CoursesTT WHERE (((CoursesTT.CourseID)=\""+ globalVars::strCnvStr(clubbedCourses[0]) +"\"))";
				//MessageBox::Show(cmd2.CommandText);
				OleDbDataReader ^ Dr2 = cmd2.ExecuteReader();
				string clubbed;
				Dr2->Read();

				stringstream ss2(globalVars::StrCnvstr(Dr2["ClubbedWith"]->ToString()));
				while(getline(ss2, clubbed, ';')){
					clubbedCourses.push_back(clubbed);
				}

				Dr2->Close();

				int i1=0;
				while(i1<clubbedCourses.size()){
					cmd2.CommandText = "UPDATE CoursesTT SET SlotAssigned = \""+globalVars::strCnvStr(slot)+"\" WHERE CourseID=\""+ globalVars::strCnvStr(clubbedCourses[i1]) +"\"";
					cmd2.ExecuteScalar();
					IsSlotAssigned[clubbedCourses[i1]]=true;
					i1++;
				}
			}

			getline(ssCredits, class_credits, '-');
			getline(ssCredits, class_credits, '-');

			lab_credits=class_credits;

			if(lab_credits!="0"){

				string OfferedTo;
				stringstream ss(globalVars::StrCnvstr(Dr1["OfferedTo"]->ToString()));
				vector<string> currBatches;
				while (getline(ss, OfferedTo, ';'))
				{
					if (batch.find(OfferedTo) == batch.end())
						batch[OfferedTo] = ref;
					currBatches.push_back(OfferedTo);
				}

				string slot = "A";
				if (Dr1["CourseType"] == "Minor")
					slot = "F";
				else if (Dr1["TimeSlot"]->ToString() == "M")
				{
					int st = 0, end = 5;
					for (size_t i = st; i < end; i++)
					{
						int c = 0;
						for (c = 0; c < currBatches.size(); c++)
						{
							if (batch[currBatches[c]][globalVars::Slots[i]])
								break;
						}

						if (c != currBatches.size())
							continue;

						slot = globalVars::Slots[i];
						for (c = 0; c < currBatches.size(); c++)
						{
							batch[currBatches[c]][slot]=true;
						}
						break;
					}
				}
				else
				{
					int st = 5, end = 10;
					for (size_t i = st; i < end; i++)
					{
						int c = 0;
						for (c = 0; c < currBatches.size(); c++)
						{
							if (batch[currBatches[c]][globalVars::Slots[i]])
								break;
						}

						if (c != currBatches.size())
							continue;
						slot = globalVars::Slots[i];
						for (c = 0; c < currBatches.size(); c++)
						{
							batch[currBatches[c]][slot]=true;
						}

						break;
					}
				}
				vector<string> clubbedCourses;
				clubbedCourses.push_back(globalVars::StrCnvstr(Dr1["CourseID"]->ToString()));

				OleDbCommand cmd2;
				cmd2.Connection = DB_Connection;

				cmd2.CommandText = "SELECT CoursesTT.CourseID, CoursesTT.ClubbedWith FROM CoursesTT WHERE (((CoursesTT.CourseID)=\""+ globalVars::strCnvStr(clubbedCourses[0]) +"\"))";
				OleDbDataReader ^ Dr2 = cmd2.ExecuteReader();

				string clubbedWith;
				Dr2->Read();

				stringstream ss2(globalVars::StrCnvstr(Dr2["ClubbedWith"]->ToString()));
				while(getline(ss2, clubbedWith, ';')){
					clubbedCourses.push_back(clubbedWith);
				}

				Dr2->Close();

				int i1=0;
				while(i1<clubbedCourses.size()){
					cmd2.CommandText = "UPDATE CoursesTT SET SlotAssigned = \""+globalVars::ClassSlotToLabSlot(globalVars::strCnvStr(slot))+"\" WHERE CourseID=\""+ globalVars::strCnvStr(clubbedCourses[i1]) +"\"";
					cmd2.ExecuteScalar();
					IsSlotAssigned[clubbedCourses[i1]]=true;
					i1++;
				}
			}
		}
	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	try{

		OleDbCommand  cmd ;
		cmd.CommandText = "SELECT CoursesTT.* FROM CoursesTT";
		cmd.Connection=DB_Connection;
		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	return 0;
}
