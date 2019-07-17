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
	/// Summary for professor_ta_manage
	/// </summary>
	public ref class professor_ta_manage : public System::Windows::Forms::UserControl
	{
	public:
		String ^usrnm;     //stores the username of logged in user.
	public:
		professor_ta_manage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		professor_ta_manage(String ^text)
		{
			InitializeComponent();
			usrnm=text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~professor_ta_manage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  sendRequest;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->sendRequest = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(44, 110);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(656, 252);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &professor_ta_manage::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Select from the following list:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(316, 391);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(384, 32);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 394);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Username:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(316, 433);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(384, 32);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(316, 474);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(384, 32);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 436);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 477);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Roll Number:";
			// 
			// sendRequest
			// 
			this->sendRequest->BackColor = System::Drawing::Color::Teal;
			this->sendRequest->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sendRequest->ForeColor = System::Drawing::Color::White;
			this->sendRequest->Location = System::Drawing::Point(316, 523);
			this->sendRequest->Name = L"sendRequest";
			this->sendRequest->Size = System::Drawing::Size(141, 44);
			this->sendRequest->TabIndex = 8;
			this->sendRequest->Text = L"Request TA";
			this->sendRequest->UseVisualStyleBackColor = false;
			this->sendRequest->Click += gcnew System::EventHandler(this, &professor_ta_manage::sendRequest_Click);
			// 
			// professor_ta_manage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->sendRequest);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"professor_ta_manage";
			this->Size = System::Drawing::Size(753, 614);
			this->Load += gcnew System::EventHandler(this, &professor_ta_manage::professor_ta_manage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void professor_ta_manage_Load(System::Object^  sender, System::EventArgs^  e) {

				 //Utility function to populate the datagridview every time a course is selected or a grade is submitted
				 OleDb::OleDbConnection ^con;
				 try
				 {

					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();
					 //Query to get all the students enrolled in the selected course
					 String^ com="Select Username,RollNumber,FirstName,LastName from Phd where [Professor] = '"+this->usrnm+"' and [Status] = 'Active' "+";";

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
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 if (e->RowIndex>=0)
				 {
					 DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
					 textBox1->Text = row->Cells["Username"]->Value->ToString();
					 textBox2->Text = row->Cells["FirstName"]->Value->ToString()+" "+row->Cells["LastName"]->Value->ToString();
					 textBox3->Text = row->Cells["RollNumber"]->Value->ToString();

				 }
			 }
	private: System::Void sendRequest_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text!="")
				 {
					 time_t now = time(0);
					 tm *ltm = new tm;
					 localtime_s(ltm,&now);
					 OleDb::OleDbConnection ^con;
					 try
					 {
						 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

						 con=gcnew OleDb::OleDbConnection(connString);
						 con->Open();
						 String ^req="Requested TA : "+textBox1->Text;
						 String^ com="insert into Notification(SenderUsername,SendTime,SendDate,Message,OtherReceivers,Type) values('"+this->usrnm+"','"+ltm->tm_hour+":"+ltm->tm_min+"','"+ltm->tm_mday+"/"+(ltm->tm_mon+1)+"/"+(ltm->tm_year+1900)+"','"+req+"','"+"Admin"+"','Request');";
						 MessageBox::Show(com);

						 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
						 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

						 con->Close();


					 }
					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message);
						 con->Close();
					 }
				 }
				 else
				 {
					 MessageBox::Show("Select a Person");
				 }
			 }
	};
}
