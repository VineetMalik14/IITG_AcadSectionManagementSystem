#include <string.h>
#include <cstring>

#pragma once

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for homepageNoticifications
	/// </summary>
	public ref class homepageNoticifications : public System::Windows::Forms::UserControl
	{
	public:
		OleDb::OleDbConnection ^con;	
		String^ connString;


		int present_year;
		int present_sem; // 0 = Spring, 1 = Fall
		String ^ semesterName;
		String ^ session;
		int year_under_query;
		int semester_under_query; 
		int notcf_btn_index;
		String ^ senderFullName;
		String ^ senderPost;
		String ^ senderDept;

		String^ userNameSender;
		String^ messg;
		String^ date_time;
		int x;
		int y;
		String ^ lastClickedNotcfBtn;	
	private: System::Windows::Forms::Panel^  resultPnl;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  dateTimeLbl;
	public: 

		System::Windows::Forms::Button ^ btn_notcf;
		homepageNoticifications(void)
		{
			InitializeComponent();
			connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
			con=gcnew OleDb::OleDbConnection(connString);

			present_year = 2018;
			present_sem = 1; // 0 = Spring, 1 = Fall
			x = -3;
			y = 40 + 42*(notcf_btn_index-1);
			date_time="";
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~homepageNoticifications()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  txtFullName;

	private: System::Windows::Forms::Label^  txtDept;

	private: System::Windows::Forms::Label^  txtDesignation;



	private: System::Windows::Forms::Label^  txtEmail;
	private: System::Windows::Forms::TextBox^  txtMessage;



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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtFullName = (gcnew System::Windows::Forms::Label());
			this->txtDept = (gcnew System::Windows::Forms::Label());
			this->txtDesignation = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::Label());
			this->txtMessage = (gcnew System::Windows::Forms::TextBox());
			this->resultPnl = (gcnew System::Windows::Forms::Panel());
			this->dateTimeLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->resultPnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(29, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(107, 114);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// txtFullName
			// 
			this->txtFullName->AutoSize = true;
			this->txtFullName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtFullName->Location = System::Drawing::Point(157, 44);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(118, 26);
			this->txtFullName->TabIndex = 3;
			this->txtFullName->Text = L"Full Name";
			// 
			// txtDept
			// 
			this->txtDept->AutoSize = true;
			this->txtDept->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtDept->Location = System::Drawing::Point(158, 76);
			this->txtDept->Name = L"txtDept";
			this->txtDept->Size = System::Drawing::Size(54, 21);
			this->txtDept->TabIndex = 4;
			this->txtDept->Text = L"Dept.";
			// 
			// txtDesignation
			// 
			this->txtDesignation->AutoSize = true;
			this->txtDesignation->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtDesignation->Location = System::Drawing::Point(158, 97);
			this->txtDesignation->Name = L"txtDesignation";
			this->txtDesignation->Size = System::Drawing::Size(103, 21);
			this->txtDesignation->TabIndex = 5;
			this->txtDesignation->Text = L"Designation";
			// 
			// txtEmail
			// 
			this->txtEmail->AutoSize = true;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(158, 118);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(68, 21);
			this->txtEmail->TabIndex = 6;
			this->txtEmail->Text = L"EmailID";
			// 
			// txtMessage
			// 
			this->txtMessage->AcceptsReturn = true;
			this->txtMessage->AcceptsTab = true;
			this->txtMessage->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtMessage->Location = System::Drawing::Point(29, 180);
			this->txtMessage->Multiline = true;
			this->txtMessage->Name = L"txtMessage";
			this->txtMessage->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtMessage->Size = System::Drawing::Size(415, 256);
			this->txtMessage->TabIndex = 7;
			// 
			// resultPnl
			// 
			this->resultPnl->Controls->Add(this->dateTimeLbl);
			this->resultPnl->Controls->Add(this->txtMessage);
			this->resultPnl->Controls->Add(this->txtEmail);
			this->resultPnl->Controls->Add(this->txtDesignation);
			this->resultPnl->Controls->Add(this->txtDept);
			this->resultPnl->Controls->Add(this->txtFullName);
			this->resultPnl->Controls->Add(this->pictureBox1);
			this->resultPnl->Location = System::Drawing::Point(326, 18);
			this->resultPnl->Name = L"resultPnl";
			this->resultPnl->Size = System::Drawing::Size(478, 455);
			this->resultPnl->TabIndex = 8;
			this->resultPnl->Visible = false;
			// 
			// dateTimeLbl
			// 
			this->dateTimeLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimeLbl->Location = System::Drawing::Point(25, 142);
			this->dateTimeLbl->Name = L"dateTimeLbl";
			this->dateTimeLbl->Size = System::Drawing::Size(419, 21);
			this->dateTimeLbl->TabIndex = 8;
			this->dateTimeLbl->Text = L"EmailID";
			this->dateTimeLbl->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// homepageNoticifications
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->resultPnl);
			this->Name = L"homepageNoticifications";
			this->Size = System::Drawing::Size(839, 503);
			this->Load += gcnew System::EventHandler(this, &homepageNoticifications::homepageNoticifications_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->resultPnl->ResumeLayout(false);
			this->resultPnl->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void homepageNoticifications_Load(System::Object^  sender, System::EventArgs^  e) {
				 year_under_query=present_year;
				 semester_under_query=present_sem;

				 generateNotcfButtons();
			 }

			 void generateNotcfButtons(){
				 lastClickedNotcfBtn = "";

				 notcf_btn_index = 1;

				 try
				 {				

					 con->Open();

					 //////////////////////////////////////////////////////////////////////////////////////

					 if (semester_under_query == 0)
						 semesterName = "Spring";
					 else if (semester_under_query == 1)
						 semesterName = "Fall";
					 session = Convert::ToString(year_under_query)+"-"+Convert::ToString(Convert::ToInt32(year_under_query)-1999);



					 //////////////////////////////////////////////////////////////////////////////////////

					 String ^ aString = "Select * from Notification where [Type] ='General'";

					 OleDb::OleDbCommand ^ cmd = gcnew OleDb::OleDbCommand(aString, con);
					 OleDb::OleDbDataReader ^ readerData = cmd->ExecuteReader();

					 while(readerData->Read() == true){
						 userNameSender = readerData->GetString(1);	
						 messg=readerData->GetString(4);
						 String^ dt = "";
						 if (!readerData->IsDBNull(3)) dt = readerData->GetString(3);
						 String^ tim = "";
						 if (!readerData->IsDBNull(2)) tim = readerData->GetString(2);
						 date_time=dt+" "+tim;

						 notcf_btn_creator(notcf_btn_index, userNameSender, messg, date_time, con);

						 notcf_btn_index++;

					 }
					 readerData->Close();

					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 con->Close();
					 MessageBox::Show(ex->Message);
				 }
			 }

			 void notcf_btn_creator(int notcf_btn_index, String^ userNameSender, String^ messg, String^ date_time, OleDb::OleDbConnection ^con){
				 btn_notcf = gcnew System::Windows::Forms::Button();
				 //////////////////////////////////////////////////////////////////////////////////////

				 String ^ bString = "Select * from Professor where [Username] ='"+userNameSender+"'";

				 OleDb::OleDbCommand ^ cmd1 = gcnew OleDb::OleDbCommand(bString, con);
				 OleDb::OleDbDataReader ^ reader = cmd1->ExecuteReader();

				 while(reader->Read() == true){
					 String ^firstnm="";
					 if (!reader->IsDBNull(1)) firstnm=reader->GetString(1);

					 String ^middlenm="";
					 if (!reader->IsDBNull(2)) middlenm=reader->GetString(2);

					 String ^lastnm="";
					 if (!reader->IsDBNull(3)) lastnm=reader->GetString(3);
					 senderFullName = firstnm+" "+middlenm+" "+lastnm;	
				 }
				 reader->Close();

				 bString = "Select * from Staff where [Username] ='"+userNameSender+"'";

				 cmd1 = gcnew OleDb::OleDbCommand(bString, con);
				 reader = cmd1->ExecuteReader();

				 while(reader->Read() == true){
					 String ^firstnm="";
					 if (!reader->IsDBNull(1)) firstnm=reader->GetString(1);

					 String ^middlenm="";
					 if (!reader->IsDBNull(2)) middlenm=reader->GetString(2);

					 String ^lastnm="";
					 if (!reader->IsDBNull(3)) lastnm=reader->GetString(3);
					 senderFullName = firstnm+" "+middlenm+" "+lastnm;	
				 }
				 reader->Close();

				 //////////////////////////////////////////////////////////////////////////////////////

				 btn_notcf->Name = Convert::ToString(userNameSender);
				 btn_notcf->Tag = date_time+"       "+messg;
				 btn_notcf->Text = "   "+senderFullName+": "+date_time+" | "+messg;

				 btn_notcf->BackColor = System::Drawing::Color::White;
				 btn_notcf->FlatAppearance->BorderColor = System::Drawing::Color::Teal;
				 btn_notcf->FlatAppearance->BorderSize = 2;
				 btn_notcf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 btn_notcf->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 btn_notcf->Size = System::Drawing::Size(333, 44);
				 btn_notcf->TextAlign = System::Drawing::ContentAlignment::TopLeft;
				 btn_notcf->UseVisualStyleBackColor = false;

				 x = -3;
				 y = 40 + 42*(notcf_btn_index-1);
				 btn_notcf->Location = System::Drawing::Point(x, y);

				 this->Controls->Add(btn_notcf);

				 this->btn_notcf->Click += gcnew System::EventHandler(this, &homepageNoticifications::btn_notcf_Click);

			 }
	private: System::Void btn_notcf_Click(System::Object ^  sender, System::EventArgs^  e) {
				 Button ^temp_btn = gcnew System::Windows::Forms::Button();
				 temp_btn = dynamic_cast<System::Windows::Forms::Button ^>(sender);

				 userNameSender = temp_btn->Name;
				 date_time = Convert::ToString(temp_btn->Tag)->Substring(0,14);
				 int length_of_tag = Convert::ToString(temp_btn->Tag)->Length;
				 messg = Convert::ToString(temp_btn->Tag)->Substring(14,length_of_tag-14);
				 resultPnl->Visible=true;
				 //////////////////////////////////////////////////////////////////////////////////////

				 try{
					 con->Open();

					 String ^ bString = "Select * from Professor where [Username] ='"+userNameSender+"'";
					 String ^ cString = "Select * from ProfStatus where [Username] ='"+userNameSender+"' AND [Session]='"+session+"' AND [Semester]='"+semesterName+"'";
					 OleDb::OleDbCommand ^ cmd1 = gcnew OleDb::OleDbCommand(bString, con);
					 OleDb::OleDbDataReader ^ reader = cmd1->ExecuteReader();

					 int found=0;
					 while(reader->Read() == true){
						 String ^firstnm="";
						 if (!reader->IsDBNull(1)) firstnm=reader->GetString(1);
						 String ^middlenm="";
						 if (!reader->IsDBNull(2)) middlenm=reader->GetString(2);
						 String ^lastnm="";
						 if (!reader->IsDBNull(3)) lastnm=reader->GetString(3);
						 senderFullName = firstnm+" "+middlenm+" "+lastnm;	

						 if (!reader->IsDBNull(8)) senderDept=reader->GetString(8);

						 found++;
					 }
					 reader->Close();

					 cmd1 = gcnew OleDb::OleDbCommand(cString, con);
					 reader = cmd1->ExecuteReader();

					 while(reader->Read() == true){
						 if (!reader->IsDBNull(5)) senderPost=reader->GetString(5);
					 }
					 reader->Close();

					 if (found==0)
					 {
						 String ^ bString = "Select * from Staff where [Username] ='"+userNameSender+"'";
						 String ^ cString = "Select * from StaffStatus where [Username] ='"+userNameSender+"' AND [Session]='"+session+"' AND [Semester]='"+semesterName+"'";

						 OleDb::OleDbCommand ^ cmd1 = gcnew OleDb::OleDbCommand(bString, con);
						 OleDb::OleDbDataReader ^ reader = cmd1->ExecuteReader();

						 while(reader->Read() == true){
							 String ^firstnm="";
							 if (!reader->IsDBNull(1)) firstnm=reader->GetString(1);
							 String ^middlenm="";
							 if (!reader->IsDBNull(2)) middlenm=reader->GetString(2);
							 String ^lastnm="";
							 if (!reader->IsDBNull(3)) lastnm=reader->GetString(3);
							 senderFullName = firstnm+" "+middlenm+" "+lastnm;	
							 if (!reader->IsDBNull(8)) senderDept=reader->GetString(8);

							 found++;
						 }
						 reader->Close();

						 cmd1 = gcnew OleDb::OleDbCommand(cString, con);
						 reader = cmd1->ExecuteReader();

						 while(reader->Read() == true){
							 if (!reader->IsDBNull(5)) senderPost=reader->GetString(5);

						 }
						 reader->Close();
					 }
					 if (found==0)
						 MessageBox::Show("Sender "+userNameSender+"'s details not available in Staff and Faculty Database");

					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }

				 //////////////////////////////////////////////////////////////////////////////////////

				 txtFullName->Text=senderFullName;
				 txtEmail->Text=userNameSender+"@iitg.ac.in";
				 txtDept->Text=senderDept;
				 txtDesignation->Text=senderPost;
				 dateTimeLbl->Text=date_time;
				 txtMessage->Text=messg;

			 }



	};
}
