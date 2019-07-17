#pragma once
#using <System.dll>
#using <System.data.dll>
#include <string.h>
#include <ctime>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;

namespace projectUI {

	/// <summary>
	/// Summary for professor_sendGrades
	/// </summary>
	public ref class professor_sendGrades : public System::Windows::Forms::UserControl
	{
	public:
		String ^usrnm;     //stores the username of logged in user.
	public:
		professor_sendGrades(void)
		{
			InitializeComponent();
			//FillCombo();
			//
			//TODO: Add the constructor code here
			//
		}
		professor_sendGrades(String ^text)
		{
			InitializeComponent();
			usrnm=text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~professor_sendGrades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_selectcourse;
	private: System::Windows::Forms::ComboBox^  cmb_selectcourse;
	private: System::Windows::Forms::Label^  lbl_students;
	protected: 

	protected: 


	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtb_student;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lbl_FirstName;
	private: System::Windows::Forms::Label^  lbl_lastname;
	private: System::Windows::Forms::Label^  lbl_rollno;
	private: System::Windows::Forms::TextBox^  txt_FN;
	private: System::Windows::Forms::TextBox^  txt_LN;
	private: System::Windows::Forms::TextBox^  txt_RN;


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
			this->lbl_selectcourse = (gcnew System::Windows::Forms::Label());
			this->cmb_selectcourse = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_students = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtb_student = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl_FirstName = (gcnew System::Windows::Forms::Label());
			this->lbl_lastname = (gcnew System::Windows::Forms::Label());
			this->lbl_rollno = (gcnew System::Windows::Forms::Label());
			this->txt_FN = (gcnew System::Windows::Forms::TextBox());
			this->txt_LN = (gcnew System::Windows::Forms::TextBox());
			this->txt_RN = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_selectcourse
			// 
			this->lbl_selectcourse->AutoSize = true;
			this->lbl_selectcourse->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_selectcourse->Location = System::Drawing::Point(28, 57);
			this->lbl_selectcourse->Name = L"lbl_selectcourse";
			this->lbl_selectcourse->Size = System::Drawing::Size(150, 23);
			this->lbl_selectcourse->TabIndex = 0;
			this->lbl_selectcourse->Text = L"Select Course:";
			// 
			// cmb_selectcourse
			// 
			this->cmb_selectcourse->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cmb_selectcourse->FormattingEnabled = true;
			this->cmb_selectcourse->Location = System::Drawing::Point(238, 54);
			this->cmb_selectcourse->Name = L"cmb_selectcourse";
			this->cmb_selectcourse->Size = System::Drawing::Size(121, 31);
			this->cmb_selectcourse->TabIndex = 1;
			this->cmb_selectcourse->Text = L"-Select-";
			this->cmb_selectcourse->SelectedIndexChanged += gcnew System::EventHandler(this, &professor_sendGrades::cmb_selectcourse_SelectedIndexChanged);
			// 
			// lbl_students
			// 
			this->lbl_students->AutoSize = true;
			this->lbl_students->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_students->Location = System::Drawing::Point(28, 100);
			this->lbl_students->Name = L"lbl_students";
			this->lbl_students->Size = System::Drawing::Size(160, 23);
			this->lbl_students->TabIndex = 2;
			this->lbl_students->Text = L"List Of Students:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(32, 140);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(668, 150);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &professor_sendGrades::dataGridView1_CellContentClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 332);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Username:";
			// 
			// txtb_student
			// 
			this->txtb_student->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtb_student->Location = System::Drawing::Point(335, 329);
			this->txtb_student->Name = L"txtb_student";
			this->txtb_student->ReadOnly = true;
			this->txtb_student->Size = System::Drawing::Size(229, 32);
			this->txtb_student->TabIndex = 5;
			this->txtb_student->TextChanged += gcnew System::EventHandler(this, &professor_sendGrades::txtb_student_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 482);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Select Grade:";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(335, 482);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 31);
			this->comboBox2->TabIndex = 7;
			this->comboBox2->Text = L"-Select-";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(238, 540);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 47);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &professor_sendGrades::button1_Click);
			// 
			// lbl_FirstName
			// 
			this->lbl_FirstName->AutoSize = true;
			this->lbl_FirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_FirstName->Location = System::Drawing::Point(28, 370);
			this->lbl_FirstName->Name = L"lbl_FirstName";
			this->lbl_FirstName->Size = System::Drawing::Size(116, 23);
			this->lbl_FirstName->TabIndex = 9;
			this->lbl_FirstName->Text = L"First Name:";
			// 
			// lbl_lastname
			// 
			this->lbl_lastname->AutoSize = true;
			this->lbl_lastname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_lastname->Location = System::Drawing::Point(28, 408);
			this->lbl_lastname->Name = L"lbl_lastname";
			this->lbl_lastname->Size = System::Drawing::Size(120, 23);
			this->lbl_lastname->TabIndex = 10;
			this->lbl_lastname->Text = L"Last Name:";
			// 
			// lbl_rollno
			// 
			this->lbl_rollno->AutoSize = true;
			this->lbl_rollno->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_rollno->Location = System::Drawing::Point(28, 446);
			this->lbl_rollno->Name = L"lbl_rollno";
			this->lbl_rollno->Size = System::Drawing::Size(135, 23);
			this->lbl_rollno->TabIndex = 11;
			this->lbl_rollno->Text = L"Roll Number:";
			// 
			// txt_FN
			// 
			this->txt_FN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt_FN->Location = System::Drawing::Point(335, 367);
			this->txt_FN->Name = L"txt_FN";
			this->txt_FN->ReadOnly = true;
			this->txt_FN->Size = System::Drawing::Size(229, 32);
			this->txt_FN->TabIndex = 12;
			// 
			// txt_LN
			// 
			this->txt_LN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt_LN->Location = System::Drawing::Point(335, 405);
			this->txt_LN->Name = L"txt_LN";
			this->txt_LN->ReadOnly = true;
			this->txt_LN->Size = System::Drawing::Size(229, 32);
			this->txt_LN->TabIndex = 13;
			// 
			// txt_RN
			// 
			this->txt_RN->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt_RN->Location = System::Drawing::Point(335, 443);
			this->txt_RN->Name = L"txt_RN";
			this->txt_RN->ReadOnly = true;
			this->txt_RN->Size = System::Drawing::Size(229, 32);
			this->txt_RN->TabIndex = 14;
			// 
			// professor_sendGrades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->txt_RN);
			this->Controls->Add(this->txt_LN);
			this->Controls->Add(this->txt_FN);
			this->Controls->Add(this->lbl_rollno);
			this->Controls->Add(this->lbl_lastname);
			this->Controls->Add(this->lbl_FirstName);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtb_student);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->lbl_students);
			this->Controls->Add(this->cmb_selectcourse);
			this->Controls->Add(this->lbl_selectcourse);
			this->Name = L"professor_sendGrades";
			this->Size = System::Drawing::Size(755, 616);
			this->Load += gcnew System::EventHandler(this, &professor_sendGrades::professor_sendGrades_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void professor_sendGrades_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Filling the combobox with the current courses of the professor
				 FillCombo();
			 }
	private: void FillCombo(void){
				 //Utility function to populate the combobox

				 //Establishing the connection with database
				 OleDb::OleDbConnection ^con;
				 time_t now = time(0);
				 tm *ltm = new tm;
				 localtime_s(ltm,&now);
				 try
				 {

					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();

					 //Query to get all the courses of the logged in professor
					 String^ com="Select * from ProfCourses where [Username] = '" + this->usrnm + "' and [Session] like '20%" +(ltm->tm_year-100)+"%'"+";";

					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
					 String^ vName;

					 while (readerData->Read())
					 {
						 //Adding each course in the combobox items
						 vName=readerData->GetString(1);
						 cmb_selectcourse->Items->Add(vName);

					 }
					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }

				 //Populating the grades combobox with all the possible grades
				 comboBox2->Items->Add("AS");
				 comboBox2->Items->Add("AA");
				 comboBox2->Items->Add("AB");
				 comboBox2->Items->Add("BB");
				 comboBox2->Items->Add("BC");
				 comboBox2->Items->Add("CC");
				 comboBox2->Items->Add("CD");
				 comboBox2->Items->Add("DD");
				 comboBox2->Items->Add("F");
			 }
	private: void FillTable(void){

				 //Utility function to populate the datagridview every time a course is selected or a grade is submitted
				 if(cmb_selectcourse->Text!="-Select-")
				 {
					 String^ course = cmb_selectcourse->Text;
					 OleDb::OleDbConnection ^con;
					 time_t now = time(0);
					 tm *ltm = new tm;
					 localtime_s(ltm,&now);
					 try
					 {

						 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

						 con=gcnew OleDb::OleDbConnection(connString);
						 con->Open();
						 //Query to get all the students enrolled in the selected course
						 String^ com="Select * from StudentCourses where [CourseID] = '" + course + "' and [Session] like '20%" +(ltm->tm_year-100)+"%'"+";";

						 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);

						 //Populating the datagridview
						 OleDb::OleDbDataAdapter^ adapter=gcnew OleDb::OleDbDataAdapter();
						 adapter->SelectCommand=cmd;
						 DataTable^ data =gcnew DataTable();
						 adapter->Fill(data);
						 BindingSource^ bSource=gcnew BindingSource();
						 bSource->DataSource=data;
						 dataGridView1->DataSource=bSource;
						 adapter->Update(data);
						 con->Close();
					 }
					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message);
						 con->Close();
					 }
				 }
			 }

	private: System::Void cmb_selectcourse_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 //Populating datagridview every time a new course is selected
				 FillTable();
			 }

	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

				 //Function to display the username and grade(if present) from the selected row in datagridview 

				 if (e->RowIndex>=0)
				 {
					 DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
					 txtb_student->Text = row->Cells["Username"]->Value->ToString();
					 if(row->Cells["Grade"]->Value->ToString()!="")
					 {
						 comboBox2->Text=row->Cells["Grade"]->Value->ToString();
					 }
				 }


			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Displaying error if no grade is selected
				 if (this->comboBox2->Text=="-Select-")
				 {
					 MessageBox::Show("Please select a grade!");
				 }
				 OleDb::OleDbConnection ^con;
				 time_t now = time(0);
				 tm *ltm = new tm;
				 localtime_s(ltm,&now);
				 try
				 {

					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();
					 //Query to update the grade of the selected user in thee database
					 String^ com="Update StudentCourses set [Grade]='"+ this->comboBox2->Text +"' where [Username]='"+ this->txtb_student->Text +"' and [Session] like '20%" +(ltm->tm_year-100)+"%' and [CourseID] = '"+ this->cmb_selectcourse->Text +"';";
					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
					 con->Close();
					 //populating the datagridview again with the updated database
					 FillTable();
					 //clearing the textbox and combobox values 
					 txtb_student->Clear();
					 comboBox2->Text="-Select-";
					 txt_FN->Clear();
					 txt_LN->Clear();
					 txt_RN->Clear();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }

			 }
	private: System::Void txtb_student_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 //getting the name and roll no of the student using username 
				 OleDb::OleDbConnection ^con;			
				 try
				 {

					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();
					 //Query to get the student from the database using username
					 String^ com="Select * from Student where [Username] = '" + this->txtb_student->Text +"';";

					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();


					 while (readerData->Read())
					 {
						 //Filling the textboxes
						 txt_FN->Text=readerData->GetString(1);
						 txt_LN->Text=readerData->GetString(3);
						 txt_RN->Text=readerData->GetString(4);
					 }
					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }
			 }
	};
}
