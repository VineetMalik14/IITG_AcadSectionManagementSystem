#pragma once
/*
#include <map>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iterator>
#include <vector>
*/
#include "globalVars.h"
#using <System.dll>
#using <System.data.dll>

using namespace std ;

namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for CourseEnrollment
	/// </summary>
	public ref class CourseEnrollment : public System::Windows::Forms::Form
	{
	public:
		String^ username ;
		String ^ sess ;
		String ^ sem ;
		CourseEnrollment(String ^temp)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			username = temp ;
			sess = "2018-19" ;
			sem = "Spring" ;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CourseEnrollment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_main;



	private: System::Windows::Forms::Panel^  panel_user_details;
	private: System::Windows::Forms::Label^  label_dept;

	private: System::Windows::Forms::Label^  label_prog;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label_roll;

	private: System::Windows::Forms::Label^  label_name;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_enroll;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  select;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CourseID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CourseName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Credits;
	private: System::Windows::Forms::Label^  label3;



	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel_main = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->select = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->CourseID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CourseName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Credits = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel_user_details = (gcnew System::Windows::Forms::Panel());
			this->label_dept = (gcnew System::Windows::Forms::Label());
			this->label_prog = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_roll = (gcnew System::Windows::Forms::Label());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_enroll = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel_main->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->panel_user_details->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_main
			// 
			this->panel_main->Controls->Add(this->dataGridView1);
			this->panel_main->Location = System::Drawing::Point(82, 142);
			this->panel_main->Name = L"panel_main";
			this->panel_main->Size = System::Drawing::Size(657, 308);
			this->panel_main->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->select, 
				this->CourseID, this->CourseName, this->Credits});
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(651, 302);
			this->dataGridView1->TabIndex = 3;
			// 
			// select
			// 
			this->select->HeaderText = L"Select";
			this->select->Name = L"select";
			this->select->ReadOnly = true;
			// 
			// CourseID
			// 
			this->CourseID->HeaderText = L"Course ID";
			this->CourseID->Name = L"CourseID";
			this->CourseID->ReadOnly = true;
			// 
			// CourseName
			// 
			this->CourseName->HeaderText = L"Course Name";
			this->CourseName->Name = L"CourseName";
			this->CourseName->ReadOnly = true;
			// 
			// Credits
			// 
			this->Credits->HeaderText = L"Credits";
			this->Credits->Name = L"Credits";
			this->Credits->ReadOnly = true;
			// 
			// panel_user_details
			// 
			this->panel_user_details->Controls->Add(this->label_dept);
			this->panel_user_details->Controls->Add(this->label_prog);
			this->panel_user_details->Controls->Add(this->label6);
			this->panel_user_details->Controls->Add(this->label5);
			this->panel_user_details->Controls->Add(this->label_roll);
			this->panel_user_details->Controls->Add(this->label_name);
			this->panel_user_details->Controls->Add(this->label2);
			this->panel_user_details->Controls->Add(this->label1);
			this->panel_user_details->Location = System::Drawing::Point(82, 12);
			this->panel_user_details->Name = L"panel_user_details";
			this->panel_user_details->Size = System::Drawing::Size(657, 100);
			this->panel_user_details->TabIndex = 1;
			// 
			// label_dept
			// 
			this->label_dept->AutoSize = true;
			this->label_dept->Location = System::Drawing::Point(540, 64);
			this->label_dept->Name = L"label_dept";
			this->label_dept->Size = System::Drawing::Size(22, 13);
			this->label_dept->TabIndex = 7;
			this->label_dept->Text = L"-----";
			// 
			// label_prog
			// 
			this->label_prog->AutoSize = true;
			this->label_prog->Location = System::Drawing::Point(540, 20);
			this->label_prog->Name = L"label_prog";
			this->label_prog->Size = System::Drawing::Size(22, 13);
			this->label_prog->TabIndex = 6;
			this->label_prog->Text = L"-----";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(399, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Department :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(399, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Programme :";
			// 
			// label_roll
			// 
			this->label_roll->AutoSize = true;
			this->label_roll->Location = System::Drawing::Point(206, 64);
			this->label_roll->Name = L"label_roll";
			this->label_roll->Size = System::Drawing::Size(22, 13);
			this->label_roll->TabIndex = 3;
			this->label_roll->Text = L"-----";
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Location = System::Drawing::Point(206, 20);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(22, 13);
			this->label_name->TabIndex = 2;
			this->label_name->Text = L"-----";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(72, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Roll Number :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name :";
			// 
			// btn_enroll
			// 
			this->btn_enroll->Location = System::Drawing::Point(625, 456);
			this->btn_enroll->Name = L"btn_enroll";
			this->btn_enroll->Size = System::Drawing::Size(114, 38);
			this->btn_enroll->TabIndex = 2;
			this->btn_enroll->Text = L"ENROLL";
			this->btn_enroll->UseVisualStyleBackColor = true;
			this->btn_enroll->Click += gcnew System::EventHandler(this, &CourseEnrollment::btn_enroll_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(236, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(360, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"You have already done the course registration.";
			// 
			// CourseEnrollment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 520);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_enroll);
			this->Controls->Add(this->panel_user_details);
			this->Controls->Add(this->panel_main);
			this->Name = L"CourseEnrollment";
			this->Text = L"CourseEnrollment";
			this->Load += gcnew System::EventHandler(this, &CourseEnrollment::CourseEnrollment_Load);
			this->panel_main->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->panel_user_details->ResumeLayout(false);
			this->panel_user_details->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CourseEnrollment_Load(System::Object^  sender, System::EventArgs^  e) {


				 try{

					 label3->Hide() ;
					 dataGridView1->ReadOnly = false ;
					 dataGridView1->Columns[1]->ReadOnly = true ;
					 dataGridView1->Columns[2]->ReadOnly = true ;


					 OleDbConnection ^ DB_Connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb");
					 //DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 DB_Connection->Open();
					 String^ selectString="SELECT [FirstName],[MiddleName],[LastName],[RollNumber],[DeptID],[Programme] FROM Student WHERE Username = '"+username+"';";
					 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);

					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
					 String^ roll="";
					 String^ name="";
					 String^ dept="";
					 String^ prog="";



					 while (readerData->Read())
					 {
						 if(!readerData->IsDBNull(0)) name = readerData->GetString(0)+" " ;
						 if(!readerData->IsDBNull(1)) name += readerData->GetString(1) + " " ;
						 if(!readerData->IsDBNull(2)) name += readerData->GetString(2) ;
						 if(!readerData->IsDBNull(3)) roll = readerData->GetString(3);
						 if(!readerData->IsDBNull(4)) dept = readerData->GetString(4);
						 if(!readerData->IsDBNull(5)) prog = readerData->GetString(5);
					 }

					 label_name->Text = name ;
					 label_roll->Text = roll ;
					 label_dept->Text = dept ;
					 label_prog->Text = prog ;


					 selectString="SELECT RollNumber FROM Student WHERE Username = '"+this->username+"';";
					 cmd = gcnew OleDbCommand(selectString, DB_Connection);

					 readerData=cmd->ExecuteReader();
					 roll="";
					 while (readerData->Read())
					 {
						 roll = readerData->GetString(0);
					 }
					 //MessageBox::Show(roll) ;

					 selectString="SELECT CourseID FROM CoursesTT WHERE OfferedTo LIKE '%"+roll->Substring(0,6)+"%';";
					 cmd = gcnew OleDbCommand(selectString, DB_Connection);
					 readerData=cmd->ExecuteReader();
					 String ^CID = "" ;

					 while (readerData->Read())
					 {
						 CID += readerData->GetString(0) + ";";
					 }

					 array <String^>^ courses = CID->Split(';') ;
					 int a = courses->Length ;
					 //MessageBox::Show(Convert::ToString(a)) ;


					 for(int i = 0 ; i < a ; i++){
						 if(courses[i]=="") continue;
						 selectString="SELECT CourseID,CourseName,Credits FROM CourseList WHERE CourseID LIKE '"+courses[i]+"';";
						 //MessageBox::Show(selectString) ;
						 cmd = gcnew OleDbCommand(selectString, DB_Connection);
						 readerData=cmd->ExecuteReader();
						 String^ courseid="",^coursename="",^credit="" ;
						 while (readerData->Read())
						 {
							 courseid = readerData->GetString(0) ;
							 coursename = readerData->GetString(1) ;
							 credit = readerData->GetString(2) ;
						 }

						 dataGridView1->Rows->Add(false,courseid,coursename,credit) ;
					 }




					 selectString="SELECT Username FROM StudentCourses WHERE Username='"+username+"' and [Session]='"+sess+"' and [Semester] = '"+sem+"';";
					 cmd=gcnew OleDb::OleDbCommand(selectString,DB_Connection);
					 readerData=cmd->ExecuteReader();
					 while(readerData->Read())
					 {
						 panel_main->Hide() ;
						 btn_enroll->Hide() ;
						 label3->Show() ;

						 DB_Connection->Close() ;
						 return;
					 }


					 selectString="SELECT * FROM StudentCourses Where Username='"+username+"';" ;
					 cmd=gcnew OleDb::OleDbCommand(selectString,DB_Connection);
					 readerData=cmd->ExecuteReader();
					 std::map<string,bool> m ;
					 //globalVars::StrCnvstr(keyword)

					 while(readerData->Read())
					 {
						 if(!readerData->IsDBNull(4) || readerData->GetString(4)!=""){
							 if(m.find(globalVars::StrCnvstr(readerData->GetString(1))) != m.end()){
								 if(globalVars::StrCnvstr(readerData->GetString(4))!="F"){
									 m[globalVars::StrCnvstr(readerData->GetString(1))] = true ;
								 }
							 }
							 else{
								 if(globalVars::StrCnvstr(readerData->GetString(4))=="F"){
									 m.insert(make_pair(globalVars::StrCnvstr(readerData->GetString(1)),false)) ;
								 }
							 }
						 }
					 }

					 std::map<string,bool>::iterator it ;
					 vector<string> failed_courses ;
					 for(it=m.begin() ; it != m.end() ; it++){
						 if(! it->second ){
							 failed_courses.push_back(it->first) ;
						 }
					 }

					 for(int i = 0 ; i < int(failed_courses.size()) ; i++){
						 selectString="SELECT * FROM CourseList Where CourseID='"+globalVars::strCnvStr(failed_courses[i])+"';" ;
						 cmd=gcnew OleDb::OleDbCommand(selectString,DB_Connection);
						 readerData=cmd->ExecuteReader();


						 if(readerData->Read()){
							 String ^courseid_ = readerData->GetString(0) ;
							 String ^coursename_ = readerData->GetString(1) ;
							 String ^credit_ = readerData->GetString(3);
							 dataGridView1->Rows->Add(false,courseid_,coursename_,credit_) ;
						 }

					 }

					 DB_Connection->Close() ;

				 }
				 catch(Exception ^e){
					 MessageBox::Show(e->Message) ;
				 }
			 }
	private: System::Void btn_enroll_Click(System::Object^  sender, System::EventArgs^  e) {
				 try{
					 array<String^>^ enrolled_courses = gcnew array<String^>(dataGridView1->Rows->Count);
					 DataGridViewCell ^tem ;
					 DataGridViewCell ^tem2 ;
					 String^ selectedcourses="" ;

					 bool atLeastOneSelected = false ;
					 for(int i = 0 ; i < dataGridView1->Rows->Count ; i++){
						 tem = dataGridView1[0,i] ;
						 tem2 = dataGridView1[1,i] ;
						 //MessageBox::Show(Convert::ToString(tem->Value)) ;
						 if(Convert::ToString(tem->Value)=="True"){
							 atLeastOneSelected = true ;
							 enrolled_courses[i]=Convert::ToString(tem2->Value) ;
							 selectedcourses += Convert::ToString(tem2->Value)+";" ;
						 }
						 else{
							 enrolled_courses[i] = "" ;
						 }
					 }

					 if(!atLeastOneSelected){
						 MessageBox::Show("Please select at least one course") ;
						 return ;
					 }
					 for(int i=0; i<dataGridView1->Rows->Count; i++)
					 {


						 if(enrolled_courses[i]!="")
						 {
							 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
							 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
							 DB_Connection->Open();
							 String^ selectString="INSERT INTO StudentCourses ([Username],[CourseID],[Session],[Semester]) VALUES ('"+this->username+"','"+enrolled_courses[i]+"','"+sess+"','"+sem +"');";
							 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);

							 cmd->ExecuteNonQuery() ;
						 }
					 }

					 panel_main->Hide() ;
					 btn_enroll->Hide() ;
					 label3->Text = "You have successfully registered for the courses." ;
					 label3->Show() ;
				 }
				 catch(Exception^ e){
					 MessageBox::Show(e->Message);
				 }
			 }
	};
}
