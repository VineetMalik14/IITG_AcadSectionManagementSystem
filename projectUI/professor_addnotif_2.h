#pragma once
#using <System.dll>
#using <System.data.dll>
#include <cstring>
#include <ctime>
#include<cstdio>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;

namespace projectUI {

	/// <summary>
	/// Summary for professor_addnotif_2
	/// </summary>
	public ref class professor_addnotif_2 : public System::Windows::Forms::UserControl
	{
	public:
		String ^usrnm;     //stores the username of logged in user.
	public:
		professor_addnotif_2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		professor_addnotif_2(String ^text)
		{
			InitializeComponent();
			usrnm=text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~professor_addnotif_2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_dept;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  lbl_session;
	private: System::Windows::Forms::ComboBox^  sessionCombo;






	private: System::Windows::Forms::Label^  lbl_prog;
	private: System::Windows::Forms::ComboBox^  programmeCombo;

	private: System::Windows::Forms::Label^  lbl_otherec;
	private: System::Windows::Forms::TextBox^  otherText;

	private: System::Windows::Forms::Label^  lbl_info;
	private: System::Windows::Forms::Label^  lbl_ntf;
	private: System::Windows::Forms::TextBox^  messageText;

	private: System::Windows::Forms::Button^  btn_post;
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
			this->lbl_dept = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->lbl_session = (gcnew System::Windows::Forms::Label());
			this->sessionCombo = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_prog = (gcnew System::Windows::Forms::Label());
			this->programmeCombo = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_otherec = (gcnew System::Windows::Forms::Label());
			this->otherText = (gcnew System::Windows::Forms::TextBox());
			this->lbl_info = (gcnew System::Windows::Forms::Label());
			this->lbl_ntf = (gcnew System::Windows::Forms::Label());
			this->messageText = (gcnew System::Windows::Forms::TextBox());
			this->btn_post = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_dept
			// 
			this->lbl_dept->AutoSize = true;
			this->lbl_dept->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_dept->Location = System::Drawing::Point(51, 49);
			this->lbl_dept->Name = L"lbl_dept";
			this->lbl_dept->Size = System::Drawing::Size(135, 23);
			this->lbl_dept->TabIndex = 0;
			this->lbl_dept->Text = L"Department:";
			this->lbl_dept->Click += gcnew System::EventHandler(this, &professor_addnotif_2::label1_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"CSE", L"EEE", L"ECE", L"MA", L"BSBE", L"ME", 
				L"CE", L"DD", L"CST", L"CH"});
			this->checkedListBox1->Location = System::Drawing::Point(319, 49);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(242, 112);
			this->checkedListBox1->TabIndex = 1;
			// 
			// lbl_session
			// 
			this->lbl_session->AutoSize = true;
			this->lbl_session->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_session->Location = System::Drawing::Point(51, 198);
			this->lbl_session->Name = L"lbl_session";
			this->lbl_session->Size = System::Drawing::Size(154, 23);
			this->lbl_session->TabIndex = 2;
			this->lbl_session->Text = L"Joining Session:";
			// 
			// sessionCombo
			// 
			this->sessionCombo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sessionCombo->FormattingEnabled = true;
			this->sessionCombo->Location = System::Drawing::Point(319, 195);
			this->sessionCombo->Name = L"sessionCombo";
			this->sessionCombo->Size = System::Drawing::Size(242, 31);
			this->sessionCombo->TabIndex = 3;
			this->sessionCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &professor_addnotif_2::sessionCombo_SelectedIndexChanged);
			// 
			// lbl_prog
			// 
			this->lbl_prog->AutoSize = true;
			this->lbl_prog->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_prog->Location = System::Drawing::Point(51, 263);
			this->lbl_prog->Name = L"lbl_prog";
			this->lbl_prog->Size = System::Drawing::Size(130, 23);
			this->lbl_prog->TabIndex = 8;
			this->lbl_prog->Text = L"Programme:";
			// 
			// programmeCombo
			// 
			this->programmeCombo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->programmeCombo->FormattingEnabled = true;
			this->programmeCombo->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Btech", L"Mtech", L"BDes", L"MDes", L"Phd", 
				L"MS"});
			this->programmeCombo->Location = System::Drawing::Point(319, 260);
			this->programmeCombo->Name = L"programmeCombo";
			this->programmeCombo->Size = System::Drawing::Size(242, 31);
			this->programmeCombo->TabIndex = 9;
			// 
			// lbl_otherec
			// 
			this->lbl_otherec->AutoSize = true;
			this->lbl_otherec->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_otherec->Location = System::Drawing::Point(51, 328);
			this->lbl_otherec->Name = L"lbl_otherec";
			this->lbl_otherec->Size = System::Drawing::Size(230, 23);
			this->lbl_otherec->TabIndex = 10;
			this->lbl_otherec->Text = L"Other receivers(if any):";
			// 
			// otherText
			// 
			this->otherText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->otherText->Location = System::Drawing::Point(319, 325);
			this->otherText->Name = L"otherText";
			this->otherText->Size = System::Drawing::Size(242, 32);
			this->otherText->TabIndex = 11;
			// 
			// lbl_info
			// 
			this->lbl_info->AutoSize = true;
			this->lbl_info->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_info->ForeColor = System::Drawing::Color::Teal;
			this->lbl_info->Location = System::Drawing::Point(316, 362);
			this->lbl_info->Name = L"lbl_info";
			this->lbl_info->Size = System::Drawing::Size(191, 19);
			this->lbl_info->TabIndex = 12;
			this->lbl_info->Text = L"*seperated by semi-colons";
			// 
			// lbl_ntf
			// 
			this->lbl_ntf->AutoSize = true;
			this->lbl_ntf->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_ntf->Location = System::Drawing::Point(51, 412);
			this->lbl_ntf->Name = L"lbl_ntf";
			this->lbl_ntf->Size = System::Drawing::Size(101, 23);
			this->lbl_ntf->TabIndex = 13;
			this->lbl_ntf->Text = L"Message:";
			// 
			// messageText
			// 
			this->messageText->Location = System::Drawing::Point(319, 412);
			this->messageText->Multiline = true;
			this->messageText->Name = L"messageText";
			this->messageText->Size = System::Drawing::Size(329, 109);
			this->messageText->TabIndex = 14;
			this->messageText->TextChanged += gcnew System::EventHandler(this, &professor_addnotif_2::textBox2_TextChanged);
			// 
			// btn_post
			// 
			this->btn_post->BackColor = System::Drawing::Color::Teal;
			this->btn_post->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_post->ForeColor = System::Drawing::Color::White;
			this->btn_post->Location = System::Drawing::Point(319, 539);
			this->btn_post->Name = L"btn_post";
			this->btn_post->Size = System::Drawing::Size(126, 45);
			this->btn_post->TabIndex = 15;
			this->btn_post->Text = L"POST";
			this->btn_post->UseVisualStyleBackColor = false;
			this->btn_post->Click += gcnew System::EventHandler(this, &professor_addnotif_2::btn_post_Click);
			// 
			// professor_addnotif_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_post);
			this->Controls->Add(this->messageText);
			this->Controls->Add(this->lbl_ntf);
			this->Controls->Add(this->lbl_info);
			this->Controls->Add(this->otherText);
			this->Controls->Add(this->lbl_otherec);
			this->Controls->Add(this->programmeCombo);
			this->Controls->Add(this->lbl_prog);
			this->Controls->Add(this->sessionCombo);
			this->Controls->Add(this->lbl_session);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->lbl_dept);
			this->Name = L"professor_addnotif_2";
			this->Size = System::Drawing::Size(753, 614);
			this->Load += gcnew System::EventHandler(this, &professor_addnotif_2::professor_addnotif_2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void professor_addnotif_2_Load(System::Object^  sender, System::EventArgs^  e) {

				 time_t now = time(0);
				 tm *ltm = new tm;
				 localtime_s(ltm,&now);

				 for(int i=(ltm->tm_year-100);i>((ltm->tm_year-100)-8);i--)
				 {
					 char str1[10];
					 sprintf_s(str1,"20%02d-%02d",i,i+1);
					 String^ s=gcnew String(str1);
					 sessionCombo->Items->Add(s);
				 }
				 OleDb::OleDbConnection ^con;
				 try
				 {
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();
					 String^ com="select distinct [CourseID] from CourseList;";
					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
					 while (readerData->Read())
					 {
						 //					comboBox3->Items->Add(readerData->GetString(0));
					 }
					 con->Close();


				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }


			 }
	private: System::Void btn_post_Click(System::Object^  sender, System::EventArgs^  e) {
				 time_t now = time(0);
				 tm *ltm = new tm;
				 localtime_s(ltm,&now);
				 if(messageText->Text=="")
				 { 
					 MessageBox::Show("Empty Message");
					 return;
				 }
				 if(otherText->Text=="")
				 {

					 if(checkedListBox1->SelectedItems->Count==0)
					 { 
						 MessageBox::Show("No Dept Selected");
						 return;
					 }
					 if(sessionCombo->Text=="")
					 {
						 MessageBox::Show("Select Session");
						 return;
					 }
					 if(programmeCombo->Text=="")
					 {
						 MessageBox::Show("Select Programme");
						 return;
					 }

				 }
				 if(otherText->Text!="")
				 {
					 OleDb::OleDbConnection ^con;
					 try
					 {
						 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

						 con=gcnew OleDb::OleDbConnection(connString);
						 con->Open();
						 String^ com="insert into Notification(SenderUsername,SendTime,SendDate,Message,OtherReceivers,Type) values('"+this->usrnm+"','"+ltm->tm_hour+":"+ltm->tm_min+"','"+ltm->tm_mday+"/"+(ltm->tm_mon+1)+"/"+(ltm->tm_year+1900)+"','"+messageText->Text+"','"+otherText->Text+"','Message');";
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
				 if (checkedListBox1->SelectedItems->Count!=0)
				 {
					 for(int i=0;i<checkedListBox1->Items->Count;i++)
					 {
						 if(checkedListBox1->GetItemCheckState(i)==CheckState::Checked)
						 {
							 OleDb::OleDbConnection ^con;
							 try
							 {
								 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
								 //checkedListBox1->Items
								 con=gcnew OleDb::OleDbConnection(connString);
								 con->Open();
								 String^ com="insert into Notification(SenderUsername,SendTime,SendDate,Message,DeptID,[Session],Programme,Type) values('"+this->usrnm+"','"+ltm->tm_hour+":"+ltm->tm_min+":"+ltm->tm_sec+"','"+ltm->tm_mday+"/"+(ltm->tm_mon+1)+"/"+(ltm->tm_year+1900)+"','"+messageText->Text+"','"+checkedListBox1->Items[i]+"','"+sessionCombo->Text+"','"+programmeCombo->Text+"','Message');";
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
					 }
				 }


			 }
	private: System::Void sessionCombo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
