#pragma once
#include <string.h>
#include <ctime>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for professor_course_adjustment
	/// </summary>
	public ref class professor_course_adjustment : public System::Windows::Forms::UserControl
	{
	public:
		String ^usrnm;     //stores the username of logged in user.
		array <String^>^ strarr;   //used for splitting of strings
		String^ nID; //NotificationID
	public:
		professor_course_adjustment(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		professor_course_adjustment(String ^text)
		{
			InitializeComponent();
			usrnm=text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~professor_course_adjustment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  approve;
	private: System::Windows::Forms::Button^  deny;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->approve = (gcnew System::Windows::Forms::Button());
			this->deny = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(48, 87);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(641, 206);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &professor_course_adjustment::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"All Pending Requests:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 367);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Requester Username:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(44, 417);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Comments:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(331, 364);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(358, 32);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &professor_course_adjustment::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(331, 414);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(358, 85);
			this->textBox2->TabIndex = 5;
			// 
			// approve
			// 
			this->approve->BackColor = System::Drawing::Color::Teal;
			this->approve->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->approve->ForeColor = System::Drawing::Color::White;
			this->approve->Location = System::Drawing::Point(156, 519);
			this->approve->Name = L"approve";
			this->approve->Size = System::Drawing::Size(126, 54);
			this->approve->TabIndex = 6;
			this->approve->Text = L"Approve";
			this->approve->UseVisualStyleBackColor = false;
			this->approve->Click += gcnew System::EventHandler(this, &professor_course_adjustment::approve_Click);
			// 
			// deny
			// 
			this->deny->BackColor = System::Drawing::Color::Teal;
			this->deny->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->deny->ForeColor = System::Drawing::Color::White;
			this->deny->Location = System::Drawing::Point(384, 519);
			this->deny->Name = L"deny";
			this->deny->Size = System::Drawing::Size(101, 54);
			this->deny->TabIndex = 7;
			this->deny->Text = L"Deny";
			this->deny->UseVisualStyleBackColor = false;
			this->deny->Click += gcnew System::EventHandler(this, &professor_course_adjustment::deny_Click);
			// 
			// professor_course_adjustment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->deny);
			this->Controls->Add(this->approve);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"professor_course_adjustment";
			this->Size = System::Drawing::Size(753, 614);
			this->Load += gcnew System::EventHandler(this, &professor_course_adjustment::professor_course_adjustment_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void professor_course_adjustment_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^con;
				 try
				 {

					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();

					 String^ com="Select NotificationID,SenderUsername,SendTime,SendDate,Message from Notification where [OtherReceivers] = '"+this->usrnm+"' and [Type] = 'Request' "+";";

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
					 textBox1->Text = row->Cells["SenderUsername"]->Value->ToString();
					 nID=row->Cells["NotificationID"]->Value->ToString();
					 String ^str = row->Cells["Message"]->Value->ToString();
					 strarr=str->Split(';');
					 textBox2->Text="";
					 for(int i=0;i<strarr->Length;i++)
					 {
						 textBox2->Text+=strarr[i];
						 if(i%2)
							 textBox2->Text+="\r\n";
					 }
				 }
			 }
	private: System::Void approve_Click(System::Object^  sender, System::EventArgs^  e) {
				 time_t now = time(0);
				 tm *ltm = new tm;
				 localtime_s(ltm,&now);
				 if(textBox1->Text!="")
				 {
					 if(strarr[0]=="Drop" && strarr->Length==3)
					 {
						 OleDb::OleDbConnection ^con;
						 try
						 {

							 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
							 con=gcnew OleDb::OleDbConnection(connString);
							 con->Open();
							 String^ com="Delete from StudentCourses where [username]='"+textBox1->Text+"'and [CourseID]='"+strarr[1]+"'and [Session]='"+"2017-18"+"' ;";
							 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
							 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
							 com="insert into Notification(SenderUsername,SendTime,SendDate,Message,OtherReceivers,Type) values('"+this->usrnm+"','"+ltm->tm_hour+":"+ltm->tm_min+"','"+ltm->tm_mday+"/"+(ltm->tm_mon+1)+"/"+(ltm->tm_year+1900)+"','"+strarr[1]+" dropped successfully"+"','"+textBox1->Text+"','Message');";
							 cmd=gcnew OleDb::OleDbCommand(com,con);
							 readerData=cmd->ExecuteReader();
							 String^ msg2="Approved";
							 for(int i=0;i<strarr->Length;i++)
								 msg2+=";"+strarr[i];

							 com="update Notification set [Message]='"+msg2+"' where [NotificationID]="+nID+";";

							 cmd=gcnew OleDb::OleDbCommand(com,con);
							 readerData=cmd->ExecuteReader();

							 con->Close();
							 MessageBox::Show("Course Dropped Successfully");
						 }
						 catch(Exception ^ ex)
						 {
							 MessageBox::Show(ex->Message);
							 //con->Close();
						 }
					 }
					 if(strarr[0]=="Change" && (strarr->Length==5||strarr->Length==6))
					 {
						 OleDb::OleDbConnection ^con;
						 if(strarr->Length==5)
						 {
							 try
							 {

								 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
								 con=gcnew OleDb::OleDbConnection(connString);
								 con->Open();
								 String^ com="Select Username from ProfCourses where [CourseID]='"+strarr[3]+"'and [Session]='"+"2017-18"+"' ;";
								 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
								 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
								 String ^nextUsrnm;
								 while(readerData->Read())
									 nextUsrnm=readerData->GetString(0);
								 String^ msg2=strarr[0]+";"+strarr[1]+";"+strarr[2]+";"+strarr[3]+";"+strarr[4]+";"+"Approved by course Instructor("+this->usrnm+") for "+strarr[1];
								 com="update Notification set [Message]='"+msg2+"' where [NotificationID]='"+nID;
								 cmd=gcnew OleDb::OleDbCommand(com,con);
								 readerData=cmd->ExecuteReader();


								 con->Close();
								 MessageBox::Show("Approved");
							 }
							 catch(Exception ^ ex)
							 {
								 MessageBox::Show(ex->Message);
								 //con->Close();
							 }
						 }
						 if(strarr->Length==6)
						 {
							 try
							 {
								 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
								 con=gcnew OleDb::OleDbConnection(connString);
								 con->Open();
								 String^ msg2=strarr[0]+";"+strarr[1]+";"+strarr[2]+";"+strarr[3]+";"+strarr[4]+";"+strarr[5]+";"+"Approved by course Instructor("+this->usrnm+") for "+strarr[3];
								 String^ com="update Notification set [Message]='"+msg2+"',[OtherReceivers]='"+textBox1->Text+"' where [NotificationID]='"+nID;
								 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
								 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

								 com="update StudentCourses set [CourseID]='"+strarr[3]+"' where [Username]='"+textBox1->Text+"' and [CourseID]='"+strarr[1]+"' and [Session]='"+"2017-18"+"';";
								 cmd=gcnew OleDb::OleDbCommand(com,con);
								 readerData=cmd->ExecuteReader();

								 com="insert into Notification(SenderUsername,SendTime,SendDate,Message,OtherReceivers,Type) values('"+this->usrnm+"','"+ltm->tm_hour+":"+ltm->tm_min+"','"+ltm->tm_mday+"/"+(ltm->tm_mon+1)+"/"+(ltm->tm_year+1900)+"','"+strarr[1]+" changed successfully"+"','"+textBox1->Text+"','Message');";
								 cmd=gcnew OleDb::OleDbCommand(com,con);
								 readerData=cmd->ExecuteReader();
								 con->Close();
								 MessageBox::Show("Approved");
							 }
							 catch(Exception ^ ex)
							 {
								 MessageBox::Show(ex->Message);
								 //con->Close();
							 }
						 }
					 }
				 }

			 }
	private: System::Void deny_Click(System::Object^  sender, System::EventArgs^  e) {
				 time_t now = time(0);
				 tm *ltm = new tm;
				 localtime_s(ltm,&now);
				 OleDb::OleDbConnection ^con;
				 if(strarr[0]!="Denied")
				 {
					 try
					 {
						 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
						 con=gcnew OleDb::OleDbConnection(connString);
						 con->Open();
						 String^ com="insert into Notification(SenderUsername,SendTime,SendDate,Message,OtherReceivers,Type) values('"+this->usrnm+"','"+ltm->tm_hour+":"+ltm->tm_min+"','"+ltm->tm_mday+"/"+(ltm->tm_mon+1)+"/"+(ltm->tm_year+1900)+"','"+strarr[1]+" request denied"+"','"+textBox1->Text+"','Message');";
						 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
						 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

						 String^ msg2="Denied";
						 for(int i=0;i<strarr->Length;i++)
							 msg2+=";"+strarr[i];

						 com="update Notification set [Message]='"+msg2+"' where [NotificationID]="+nID+";";

						 cmd=gcnew OleDb::OleDbCommand(com,con);
						 readerData=cmd->ExecuteReader();
						 con->Close();
					 }
					 catch(Exception ^ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
				 }
			 }
	};
}
