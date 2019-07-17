#include "stdafx.h"
#include "globalVars.h"
#include "TTfunctions.h"

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;


// M is the maximum no. of Profs in the dept.
// N is the maximum no. of Courses in the dept.
const int M=100, N=100;

// ctProfs = no. of Profs in the dept.
// ctCourses = no. of Courses in the dept.
int ctProfs=0, ctCourses=0;

// A DFS based recursive function that returns true if a matching for vertex u is possible 
bool bpm(bool bpGraph[M][N], int u, bool seen[], int matchR[])
{     
	// Try every Course one by one 
	for (int v = 0; v < ctCourses; v++) 
	{ 
		// If Professor u is interested in Course v and v is not visited 
		if (bpGraph[u][v] && !seen[v]) 
		{ 
			// Mark v as visited 
			seen[v] = true;  

			// If Course 'v' is not assigned to a Professor OR previously assigned Professor for Course v (which is matchR[v])  
			// has an alternate Course available. Since v is marked as visited in the above line, matchR[v] in the following  
			// recursive call will not get Course 'v' again 
			if (matchR[v] < 0 || bpm(bpGraph, matchR[v], seen, matchR)) 
			{ 
				matchR[v] = u; 
				return true; 
			} 
		} 
	} 
	return false; 
} 

// Calculates maximum number of matching from M to N 
void maxBPM(bool bpGraph[M][N], int matchR[]) 
{   
	// Count of Courses assigned to Professors 
	int result = 0;  
	for (int u = 0; u < ctProfs; u++) 
	{ 
		// Mark all Courses as not seen for next Professor. 
		bool seen[N];
		std::memset(seen, 0, sizeof(seen)); 

		// Find if the Professor 'u' can get a Course 
		if (bpm(bpGraph, u, seen, matchR)) 
			result++; 
	}  
} 

// Driver Code 
bool ProfAssignment(String ^ Dept) 
{ 
	// An array to keep track of the Professors assigned to each course. The value of matchR[i] is the 
	// Professor number assigned to Course i, the value -1 indicates nobody is assigned. 
	int matchR[N];

	// Let us create a bpGraph shown in the above example 
	map<string,int> profs; 
	map<int,string> revprof;
	profs[""]=-1; revprof[-1]="";

	array<String ^>^ DeptCourses;

	bool bpGraph[M][N];

	int ok=1;
	OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
	DB_Connection->ConnectionString = globalVars::strCnvStr(globalVars::connString);
	DB_Connection->Open();

	//-----------------------------------------------------------------------------------------------------
	// Checking if the "TimeSlot" is filled for each course.

	try{

		OleDbCommand  cmd ;
		cmd.CommandText = "SELECT CoursesTT.* FROM CoursesTT";
		cmd.Connection=DB_Connection;
		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();

			if(temp->Substring(0,2)==Dept){
				if(dr1["TimeSlot"]->ToString()!="A" && dr1["TimeSlot"]->ToString()!="M"){
					ok=0;
					MessageBox::Show("TimeSlot is not filled properly for some course.");
					break;
				}
			}
		}
	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	//-----------------------------------------------------------------------------------------------------

	if(ok==0){
		return false;
	}

	//-----------------------------------------------------------------------------------------------------
	// Initiallising all preferences as empty.

	map<string,string> CoursePrefPreMidsem, CoursePrefPostMidsem;

	try{

		OleDbCommand  cmd ;
		cmd.CommandText = "SELECT CoursesTT.* FROM CoursesTT";
		cmd.Connection=DB_Connection;
		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();

			if(temp->Substring(0,2)==Dept){
				OleDbCommand cmd2;
				cmd2.CommandText="UPDATE CoursesTT SET CoursesTT.ProfAppliedPreMidsem = \"\", CoursesTT.ProfAppliedPostMidsem = \"\", CoursesTT.ProfAssignedPreMidsem = \"\", CoursesTT.ProfAssignedPostMidsem = \"\", CoursesTT.SlotsApplied = \"\", CoursesTT.SlotAssigned = \"\" WHERE (((CoursesTT.CourseID)=\""+temp+"\"))";
				cmd2.Connection=DB_Connection;
				cmd2.ExecuteScalar();

				CoursePrefPreMidsem[globalVars::StrCnvstr(temp)]="";
				CoursePrefPostMidsem[globalVars::StrCnvstr(temp)]="";
			}
		}
	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	//-----------------------------------------------------------------------------------------------------


	//-----------------------------------------------------------------------------------------------------
	// Storing preferences from ProfStatus table into the CoursesTT table.

	try{
		OleDbCommand cmd;

		String ^ Cmdstr = "SELECT ProfStatus.Username, ProfStatus.CoursePreferencePreMidsem, ProfStatus.CoursePreferencePostMidsem FROM ProfStatus WHERE (((ProfStatus.Status)=\"Active\") AND ((ProfStatus.[Session])=\""+globalVars::strCnvStr(globalVars::nextSession)+"\") AND ((ProfStatus.Semester)=\""+globalVars::strCnvStr(globalVars::nextSemester)+"\") AND ((ProfStatus.DeptID)=\""+Dept+"\"))";
		
		cmd.CommandText=Cmdstr;
		cmd.Connection=DB_Connection;

		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		while(dr1->Read()){
			string PID=globalVars::StrCnvstr(dr1["Username"]->ToString());
			string PrefPre=globalVars::StrCnvstr(dr1["CoursePreferencePreMidsem"]->ToString());
			string PrefPost=globalVars::StrCnvstr(dr1["CoursePreferencePostMidsem"]->ToString());
			string itCourseAppliedPre, itCourseAppliedPost;
			istringstream ss(PrefPre), sss(PrefPost);
			while(getline(ss,itCourseAppliedPre,';')){
				CoursePrefPreMidsem[itCourseAppliedPre] += ";"+PID;
			}
			while(getline(sss,itCourseAppliedPost,';')){
				CoursePrefPostMidsem[itCourseAppliedPost] += ";"+PID;
			}
		}

		dr1->Close();


		cmd.CommandText = "SELECT CoursesTT.* FROM CoursesTT";
		cmd.Connection=DB_Connection;
		dr1 = cmd.ExecuteReader();

		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();

			if(temp->Substring(0,2)==Dept){
				String ^ t1=globalVars::strCnvStr(CoursePrefPreMidsem[globalVars::StrCnvstr(temp)]);
				String ^ t2=globalVars::strCnvStr(CoursePrefPostMidsem[globalVars::StrCnvstr(temp)]);

				OleDbCommand cmd2;
				cmd2.CommandText="UPDATE CoursesTT SET CoursesTT.ProfAppliedPreMidsem = \""+t1+"\", CoursesTT.ProfAppliedPostMidsem = \""+t2+"\" WHERE (((CoursesTT.CourseID)=\""+temp+"\"))";
				cmd2.Connection=DB_Connection;
				cmd2.ExecuteScalar();
			}
		}
	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	//-----------------------------------------------------------------------------------------------------


	//-----------------------------------------------------------------------------------------------------
// M-Pre

	DeptCourses = gcnew array<String ^>(M);

	// Initially all Courses have no Profs assigned to them 
	memset(matchR, -1, sizeof(matchR));

	for (int r=0;r<M;r++)
	{
		for(int c=0;c<N;c++){
			bpGraph[r][c]=0;
		}
	}

	// Input will be given by some mechanism. 
	try{
		String ^ Cmdstr = "SELECT ProfStatus.Username, ProfStatus.DeptID FROM ProfStatus WHERE (((ProfStatus.Status)=\"Active\") AND ((ProfStatus.[Session])=\""+globalVars::strCnvStr(globalVars::nextSession)+"\") AND ((ProfStatus.Semester)=\""+globalVars::strCnvStr(globalVars::nextSemester)+"\") AND ((ProfStatus.DeptID)=\""+Dept+"\"))";
		OleDbCommand  cmd ;
		cmd.CommandText=Cmdstr;
		cmd.Connection=DB_Connection;

		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		ctProfs=0;
		ctCourses=0;

		while(dr1->Read()){
			string st=globalVars::StrCnvstr(dr1["Username"]->ToString());
			profs[st]=ctProfs;
			revprof[ctProfs]=st;
			ctProfs++;
		}

		dr1->Close();

		cmd.CommandText = "SELECT CoursesTT.CourseID, CoursesTT.ProfAppliedPreMidsem FROM CoursesTT WHERE (((CoursesTT.TimeSlot)=\"M\")) ORDER BY CoursesTT.CourseID";
		dr1=cmd.ExecuteReader();
		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();

			if(temp->Substring(0,2)==Dept){
				string ProfApplied= globalVars::StrCnvstr(dr1["ProfAppliedPreMidsem"]->ToString());
				string itProfApplied;
				istringstream ss(ProfApplied);
				while(getline(ss,itProfApplied,';')){
					bpGraph[profs[itProfApplied]][ctCourses]=1;
				}
				ctCourses++;
			}
		}
	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	maxBPM(bpGraph,matchR);

	try{

		OleDbCommand  cmd ;
		cmd.CommandText = "SELECT CoursesTT.CourseID, CoursesTT.ProfAppliedPreMidsem FROM CoursesTT WHERE (((CoursesTT.TimeSlot)=\"M\")) ORDER BY CoursesTT.CourseID";
		cmd.Connection=DB_Connection;
		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		int ct=0;
		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();
			
			if(temp->Substring(0,2)==Dept){
				if(matchR[ct]==-1){
					ok=0;
				}

				OleDbCommand cmd2;
				cmd2.CommandText="UPDATE CoursesTT SET ProfAssignedPreMidsem=\"";
				cmd2.CommandText+= globalVars::strCnvStr(revprof[matchR[ct++]]);
				cmd2.CommandText+="\" WHERE CourseID=\"" + temp +"\"" ;
				cmd2.Connection=DB_Connection;
				//MessageBox::Show(cmd2.CommandText);
				cmd2.ExecuteScalar();

			}
		}

	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	//-----------------------------------------------------------------------------------------------------


	//-----------------------------------------------------------------------------------------------------
// M-Post

	DeptCourses = gcnew array<String ^>(M);

	// Initially all Courses have no Profs assigned to them 
	memset(matchR, -1, sizeof(matchR));

	for (int r=0;r<M;r++)
	{
		for(int c=0;c<N;c++){
			bpGraph[r][c]=0;
		}
	}

	// Input will be given by some mechanism. 
	try{

		String ^ Cmdstr = "SELECT ProfStatus.Username, ProfStatus.DeptID FROM ProfStatus WHERE (((ProfStatus.Status)=\"Active\") AND ((ProfStatus.[Session])=\""+globalVars::strCnvStr(globalVars::nextSession)+"\") AND ((ProfStatus.Semester)=\""+globalVars::strCnvStr(globalVars::nextSemester)+"\") AND ((ProfStatus.DeptID)=\""+Dept+"\"))";
		OleDbCommand  cmd ;
		cmd.CommandText=Cmdstr;
		cmd.Connection=DB_Connection;

		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		ctProfs=0;
		ctCourses=0;

		while(dr1->Read()){
			string st=globalVars::StrCnvstr(dr1["Username"]->ToString());
			profs[st]=ctProfs;
			revprof[ctProfs]=st;
			ctProfs++;
		}

		dr1->Close();

		cmd.CommandText = "SELECT CoursesTT.CourseID, CoursesTT.ProfAppliedPostMidsem FROM CoursesTT WHERE (((CoursesTT.TimeSlot)=\"M\")) ORDER BY CoursesTT.CourseID";
		dr1=cmd.ExecuteReader();
		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();

			if(temp->Substring(0,2)==Dept){
				string ProfApplied= globalVars::StrCnvstr(dr1["ProfAppliedPostMidsem"]->ToString());
				string itProfApplied;
				istringstream ss(ProfApplied);
				while(getline(ss,itProfApplied,';')){
					bpGraph[profs[itProfApplied]][ctCourses]=1;
				}
				ctCourses++;
			}
		}
	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	maxBPM(bpGraph,matchR);

	try{

		OleDbCommand  cmd ;
		cmd.CommandText = "SELECT CoursesTT.CourseID, CoursesTT.ProfAppliedPostMidsem FROM CoursesTT WHERE (((CoursesTT.TimeSlot)=\"M\")) ORDER BY CoursesTT.CourseID";
		cmd.Connection=DB_Connection;
		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		int ct=0;
		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();
			
			if(temp->Substring(0,2)==Dept){
				if(matchR[ct]==-1){
					ok=0;
				}

				OleDbCommand cmd2;
				cmd2.CommandText="UPDATE CoursesTT SET ProfAssignedPostMidsem=\"";
				cmd2.CommandText+= globalVars::strCnvStr(revprof[matchR[ct++]]);
				cmd2.CommandText+="\" WHERE CourseID=\"" + temp +"\"" ;
				cmd2.Connection=DB_Connection;
				//MessageBox::Show(cmd2.CommandText);
				cmd2.ExecuteScalar();

			}
		}

	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	//-----------------------------------------------------------------------------------------------------


	//-----------------------------------------------------------------------------------------------------
// A-Pre

	DeptCourses = gcnew array<String ^>(M);

	// Initially all Courses have no Profs assigned to them 
	memset(matchR, -1, sizeof(matchR));

	for (int r=0;r<M;r++)
	{
		for(int c=0;c<N;c++){
			bpGraph[r][c]=0;
		}
	}

	// Input will be given by some mechanism. 
	try{

		String ^ Cmdstr = "SELECT ProfStatus.Username, ProfStatus.DeptID FROM ProfStatus WHERE (((ProfStatus.Status)=\"Active\") AND ((ProfStatus.[Session])=\""+globalVars::strCnvStr(globalVars::nextSession)+"\") AND ((ProfStatus.Semester)=\""+globalVars::strCnvStr(globalVars::nextSemester)+"\") AND ((ProfStatus.DeptID)=\""+Dept+"\"))";
		OleDbCommand  cmd ;
		cmd.CommandText=Cmdstr;
		cmd.Connection=DB_Connection;

		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		ctProfs=0;
		ctCourses=0;

		while(dr1->Read()){
			string st=globalVars::StrCnvstr(dr1["Username"]->ToString());
			profs[st]=ctProfs;
			revprof[ctProfs]=st;
			ctProfs++;
		}

		dr1->Close();

		cmd.CommandText = "SELECT CoursesTT.CourseID, CoursesTT.ProfAppliedPreMidsem FROM CoursesTT WHERE (((CoursesTT.TimeSlot)=\"A\")) ORDER BY CoursesTT.CourseID";
		dr1=cmd.ExecuteReader();
		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();

			if(temp->Substring(0,2)==Dept){
				string ProfApplied= globalVars::StrCnvstr(dr1["ProfAppliedPreMidsem"]->ToString());
				string itProfApplied;
				istringstream ss(ProfApplied);
				while(getline(ss,itProfApplied,';')){
					bpGraph[profs[itProfApplied]][ctCourses]=1;
				}
				ctCourses++;
			}
		}
	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	maxBPM(bpGraph,matchR);

	try{

		OleDbCommand  cmd ;
		cmd.CommandText = "SELECT CoursesTT.CourseID, CoursesTT.ProfAppliedPreMidsem FROM CoursesTT WHERE (((CoursesTT.TimeSlot)=\"A\")) ORDER BY CoursesTT.CourseID";
		cmd.Connection=DB_Connection;
		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		int ct=0;
		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();
			
			if(temp->Substring(0,2)==Dept){
				if(matchR[ct]==-1){
					ok=0;
				}

				OleDbCommand cmd2;
				cmd2.CommandText="UPDATE CoursesTT SET ProfAssignedPreMidsem=\"";
				cmd2.CommandText+= globalVars::strCnvStr(revprof[matchR[ct++]]);
				cmd2.CommandText+="\" WHERE CourseID=\"" + temp +"\"" ;
				cmd2.Connection=DB_Connection;
				//MessageBox::Show(cmd2.CommandText);
				cmd2.ExecuteScalar();

			}
		}

	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	//-----------------------------------------------------------------------------------------------------


	//-----------------------------------------------------------------------------------------------------
// A-Post

	DeptCourses = gcnew array<String ^>(M);

	// Initially all Courses have no Profs assigned to them 
	memset(matchR, -1, sizeof(matchR));

	for (int r=0;r<M;r++)
	{
		for(int c=0;c<N;c++){
			bpGraph[r][c]=0;
		}
	}

	// Input will be given by some mechanism. 
	try{

		String ^ Cmdstr = "SELECT ProfStatus.Username, ProfStatus.DeptID FROM ProfStatus WHERE (((ProfStatus.Status)=\"Active\") AND ((ProfStatus.[Session])=\""+globalVars::strCnvStr(globalVars::nextSession)+"\") AND ((ProfStatus.Semester)=\""+globalVars::strCnvStr(globalVars::nextSemester)+"\") AND ((ProfStatus.DeptID)=\""+Dept+"\"))";
		OleDbCommand  cmd ;
		cmd.CommandText=Cmdstr;
		cmd.Connection=DB_Connection;

		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		ctProfs=0;
		ctCourses=0;

		while(dr1->Read()){
			string st=globalVars::StrCnvstr(dr1["Username"]->ToString());
			profs[st]=ctProfs;
			revprof[ctProfs]=st;
			ctProfs++;
		}

		dr1->Close();

		cmd.CommandText = "SELECT CoursesTT.CourseID, CoursesTT.ProfAppliedPostMidsem FROM CoursesTT WHERE (((CoursesTT.TimeSlot)=\"A\")) ORDER BY CoursesTT.CourseID";
		dr1=cmd.ExecuteReader();
		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();

			if(temp->Substring(0,2)==Dept){
				string ProfApplied= globalVars::StrCnvstr(dr1["ProfAppliedPostMidsem"]->ToString());
				string itProfApplied;
				istringstream ss(ProfApplied);
				while(getline(ss,itProfApplied,';')){
					bpGraph[profs[itProfApplied]][ctCourses]=1;
				}
				ctCourses++;
			}
		}
	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	maxBPM(bpGraph,matchR);

	try{

		OleDbCommand  cmd ;
		cmd.CommandText = "SELECT CoursesTT.CourseID, CoursesTT.ProfAppliedPostMidsem FROM CoursesTT WHERE (((CoursesTT.TimeSlot)=\"A\")) ORDER BY CoursesTT.CourseID";
		cmd.Connection=DB_Connection;
		OleDbDataReader ^ dr1 = cmd.ExecuteReader();

		int ct=0;
		while(dr1->Read()){
			String ^ temp=dr1["CourseID"]->ToString();
			
			if(temp->Substring(0,2)==Dept){
				if(matchR[ct]==-1){
					ok=0;
				}

				OleDbCommand cmd2;
				cmd2.CommandText="UPDATE CoursesTT SET ProfAssignedPostMidsem=\"";
				cmd2.CommandText+= globalVars::strCnvStr(revprof[matchR[ct++]]);
				cmd2.CommandText+="\" WHERE CourseID=\"" + temp +"\"" ;
				cmd2.Connection=DB_Connection;
				//MessageBox::Show(cmd2.CommandText);
				cmd2.ExecuteScalar();

			}
		}

	}
	catch(Exception ^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	//-----------------------------------------------------------------------------------------------------

	if(ok==0){
		MessageBox::Show("For some course there can be no Prof assigned.");
	}

	//-----------------------------------------------------------------------------------------------------

	return true; 
}