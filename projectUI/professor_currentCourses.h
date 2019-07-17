#pragma once
#using <System.dll>
#using <System.data.dll>
#include <string.h>
#include <ctime>
#include <cstring>
#include <cstdio>

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
	/// Summary for professor_currentCourses
	/// </summary>
	public ref class professor_currentCourses : public System::Windows::Forms::UserControl
	{
	public:
		String ^usrnm;     //stores the username of logged in user.
	public:

		professor_currentCourses(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		professor_currentCourses(String ^text)
		{
			InitializeComponent();
			usrnm=text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~professor_currentCourses()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 
	private: System::Windows::Forms::Label^  Heading;



	private: System::Windows::Forms::Label^  programChoice;






	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

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
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->programChoice = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Heading->Location = System::Drawing::Point(42, 88);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(183, 28);
			this->Heading->TabIndex = 1;
			this->Heading->Text = L"List of Courses:";
			// 
			// programChoice
			// 
			this->programChoice->AutoSize = true;
			this->programChoice->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->programChoice->Location = System::Drawing::Point(43, 167);
			this->programChoice->Name = L"programChoice";
			this->programChoice->Size = System::Drawing::Size(155, 23);
			this->programChoice->TabIndex = 4;
			this->programChoice->Text = L"Select Session :";
			this->programChoice->Click += gcnew System::EventHandler(this, &professor_currentCourses::programChoice_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(47, 272);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(663, 198);
			this->dataGridView1->TabIndex = 10;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(272, 164);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 31);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &professor_currentCourses::comboBox1_SelectedIndexChanged);
			// 
			// professor_currentCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->programChoice);
			this->Controls->Add(this->Heading);
			this->Name = L"professor_currentCourses";
			this->Size = System::Drawing::Size(753, 593);
			this->Load += gcnew System::EventHandler(this, &professor_currentCourses::professor_currentCourses_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void professor_currentCourses_Load(System::Object^  sender, System::EventArgs^  e) {
				 time_t now = time(0);
				 tm *ltm = new tm;
				 localtime_s(ltm,&now);

				 for(int i=(ltm->tm_year-100);i>((ltm->tm_year-100)-8);i--)
				 {
					 char str1[10];
					 sprintf_s(str1,"20%02d-%02d",i,i+1);
					 String^ s=gcnew String(str1);
					 comboBox1->Items->Add(s);
				 }
			 }


	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (comboBox1->Text!="")
				 {
					 OleDb::OleDbConnection ^con;
					 time_t now = time(0);
					 tm *ltm = new tm;
					 localtime_s(ltm,&now);
					 try
					 {

						 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

						 con=gcnew OleDb::OleDbConnection(connString);
						 con->Open();
						 String^ com="Select * from ProfCourses where [Username] = '" + this->usrnm + "' and [Session] ='"+comboBox1->Text+"';";
						 //MessageBox::Show(com);
						 String^ com2="Select * from CourseList where ";


						 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
						 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
						 int count=0;
						 while (readerData->Read())
						 {
							 com2=com2+"[CourseID] = '"+readerData->GetString(1)+"' or ";
							 count++;
						 }
						 if(count==0)
							 return;
						 com2=com2->Substring(0,com2->Length -3)+";";

						 //MessageBox::Show(com2);
						 cmd=gcnew OleDb::OleDbCommand(com2,con);
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
	private: System::Void programChoice_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};

}
