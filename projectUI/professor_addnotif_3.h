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



namespace projectUI {

	/// <summary>
	/// Summary for professor_addnotif_3
	/// </summary>
	public ref class professor_addnotif_3 : public System::Windows::Forms::UserControl
	{
	public:
		String ^usrnm;     //stores the username of logged in user.
	public:
		professor_addnotif_3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		professor_addnotif_3(String ^text)
		{
			InitializeComponent();
			usrnm=text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~professor_addnotif_3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_request;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  btn_submit;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
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
			this->lbl_request = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lbl_request
			// 
			this->lbl_request->AutoSize = true;
			this->lbl_request->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_request->Location = System::Drawing::Point(51, 177);
			this->lbl_request->Name = L"lbl_request";
			this->lbl_request->Size = System::Drawing::Size(94, 23);
			this->lbl_request->TabIndex = 0;
			this->lbl_request->Text = L"Request:";
			this->lbl_request->Click += gcnew System::EventHandler(this, &professor_addnotif_3::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Change Name", L"Change Passport Expiry Date", 
				L"Other Request"});
			this->comboBox1->Location = System::Drawing::Point(351, 174);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(342, 31);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &professor_addnotif_3::comboBox1_SelectedIndexChanged);
			// 
			// btn_submit
			// 
			this->btn_submit->BackColor = System::Drawing::Color::Teal;
			this->btn_submit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_submit->ForeColor = System::Drawing::Color::White;
			this->btn_submit->Location = System::Drawing::Point(287, 408);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(135, 50);
			this->btn_submit->TabIndex = 2;
			this->btn_submit->Text = L"SUBMIT";
			this->btn_submit->UseVisualStyleBackColor = false;
			this->btn_submit->Click += gcnew System::EventHandler(this, &professor_addnotif_3::btn_submit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 241);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 309);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(351, 238);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(342, 32);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(351, 306);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(342, 32);
			this->textBox2->TabIndex = 6;
			// 
			// professor_addnotif_3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_submit);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lbl_request);
			this->Name = L"professor_addnotif_3";
			this->Size = System::Drawing::Size(751, 614);
			this->Load += gcnew System::EventHandler(this, &professor_addnotif_3::professor_addnotif_3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn_submit_Click(System::Object^  sender, System::EventArgs^  e) {
				 time_t now = time(0);
				 tm *ltm = new tm;
				 localtime_s(ltm,&now);
				 OleDb::OleDbConnection ^con;
				 try
				 {
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();
					 String ^req;
					 if(comboBox1->SelectedIndex==0)
					 {
						 req="Change Name to :"+textBox1->Text;
					 }
					 else if(comboBox1->SelectedIndex==1)
					 {
						 req="Change Passport Expiry Date to :"+textBox1->Text;
					 }
					 else if(comboBox1->SelectedIndex==2)
					 {
						 req="Other Request :"+textBox1->Text;
					 }
					 String^ com="insert into Notification(SenderUsername,SendTime,SendDate,Message,OtherReceivers,Type) values('"+this->usrnm+"','"+ltm->tm_hour+":"+ltm->tm_min+"','"+ltm->tm_mday+"/"+(ltm->tm_mon+1)+"/"+(ltm->tm_year+1900)+"','"+req+"','"+"Admin"+"','Request');";
					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
					 MessageBox::Show(com);
					 con->Close();


				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(comboBox1->SelectedIndex==0)
				 {
					 label1->Show();
					 label1->Text="Enter Your New Name";
					 textBox1->Show();

				 }
				 if(comboBox1->SelectedIndex==1)
				 {
					 label1->Show();
					 label1->Text="Enter Your New Passport Expiry\n Date in dd/mm/yyyy:";
					 textBox1->Show();

				 }
				 if(comboBox1->SelectedIndex==2)
				 {
					 label1->Show();
					 label1->Text="Enter Your Request :";
					 textBox1->Show();

				 }

			 }
	private: System::Void professor_addnotif_3_Load(System::Object^  sender, System::EventArgs^  e) {
				 label1->Hide();
				 label2->Hide();
				 textBox1->Hide();
				 textBox2->Hide();
			 }
	};
}
