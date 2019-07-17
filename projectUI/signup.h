#pragma once
#include <iostream>
#include <cstdlib>
#include<random>
#using <System.dll>
#using <System.data.dll>
namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Summary for signup
	/// </summary>
	public ref class signup : public System::Windows::Forms::Form
	{
	public:
		signup(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  c;
	private: System::Windows::Forms::TextBox^  b;
	private: System::Windows::Forms::TextBox^  a;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cmb_prog;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::Button^  cancelBtn;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  password_textbox;
	private: System::Windows::Forms::ComboBox^  g;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->c = (gcnew System::Windows::Forms::TextBox());
			this->b = (gcnew System::Windows::Forms::TextBox());
			this->a = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmb_prog = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->g = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(436, 83);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 29);
			this->button1->TabIndex = 158;
			this->button1->Text = L"Browse";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->ImageLocation = L"Resources\\\\";
			this->pictureBox1->Location = System::Drawing::Point(332, -4);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(104, 116);
			this->pictureBox1->TabIndex = 157;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(70, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 20);
			this->label3->TabIndex = 145;
			this->label3->Text = L"Last Name :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label3->Visible = false;
			// 
			// c
			// 
			this->c->Enabled = false;
			this->c->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->c->Location = System::Drawing::Point(184, 303);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(169, 26);
			this->c->TabIndex = 135;
			this->c->Visible = false;
			// 
			// b
			// 
			this->b->Enabled = false;
			this->b->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b->Location = System::Drawing::Point(184, 260);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(169, 26);
			this->b->TabIndex = 134;
			this->b->Visible = false;
			// 
			// a
			// 
			this->a->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->a->Enabled = false;
			this->a->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->a->Location = System::Drawing::Point(184, 217);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(169, 26);
			this->a->TabIndex = 133;
			this->a->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(70, 262);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 20);
			this->label5->TabIndex = 130;
			this->label5->Text = L"Middle Name :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(70, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 20);
			this->label4->TabIndex = 129;
			this->label4->Text = L"First Name :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(419, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 20);
			this->label1->TabIndex = 160;
			this->label1->Text = L"Department";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(419, 263);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 20);
			this->label2->TabIndex = 162;
			this->label2->Text = L"Programme";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Visible = false;
			// 
			// cmb_prog
			// 
			this->cmb_prog->FormattingEnabled = true;
			this->cmb_prog->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"BTech", L"Mtech"});
			this->cmb_prog->Location = System::Drawing::Point(533, 265);
			this->cmb_prog->Name = L"cmb_prog";
			this->cmb_prog->Size = System::Drawing::Size(169, 21);
			this->cmb_prog->TabIndex = 163;
			this->cmb_prog->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"BTech/Mtech", L"Phd", L"Professor", L"Staff"});
			this->comboBox1->Location = System::Drawing::Point(340, 136);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(169, 21);
			this->comboBox1->TabIndex = 165;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &signup::comboBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(226, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 20);
			this->label6->TabIndex = 164;
			this->label6->Text = L"Type";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(419, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 20);
			this->label7->TabIndex = 167;
			this->label7->Text = L"Roll No";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label7->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(533, 175);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 26);
			this->textBox1->TabIndex = 166;
			this->textBox1->Visible = false;
			// 
			// backBtn
			// 
			this->backBtn->BackColor = System::Drawing::Color::Teal;
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Location = System::Drawing::Point(301, 332);
			this->backBtn->Margin = System::Windows::Forms::Padding(0);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(166, 51);
			this->backBtn->TabIndex = 168;
			this->backBtn->Text = L"SUBMIT";
			this->backBtn->UseVisualStyleBackColor = false;
			this->backBtn->Click += gcnew System::EventHandler(this, &signup::backBtn_Click);
			// 
			// cancelBtn
			// 
			this->cancelBtn->BackColor = System::Drawing::Color::OrangeRed;
			this->cancelBtn->FlatAppearance->BorderSize = 0;
			this->cancelBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cancelBtn->ForeColor = System::Drawing::Color::White;
			this->cancelBtn->Location = System::Drawing::Point(301, 332);
			this->cancelBtn->Margin = System::Windows::Forms::Padding(0);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(166, 51);
			this->cancelBtn->TabIndex = 169;
			this->cancelBtn->Text = L"SUBMIT";
			this->cancelBtn->UseVisualStyleBackColor = false;
			this->cancelBtn->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(184, 175);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(169, 26);
			this->textBox2->TabIndex = 171;
			this->textBox2->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(70, 177);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 20);
			this->label8->TabIndex = 170;
			this->label8->Text = L"Username";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(419, 301);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 20);
			this->label9->TabIndex = 173;
			this->label9->Text = L"Password";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label9->Visible = false;
			// 
			// password_textbox
			// 
			this->password_textbox->Enabled = false;
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->password_textbox->Location = System::Drawing::Point(533, 299);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->Size = System::Drawing::Size(169, 26);
			this->password_textbox->TabIndex = 172;
			this->password_textbox->Text = L"auto-generate";
			this->password_textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->password_textbox->Visible = false;
			// 
			// g
			// 
			this->g->BackColor = System::Drawing::Color::White;
			this->g->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->g->FormattingEnabled = true;
			this->g->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"----(Select)----", L"CSE", L"MNC", L"ECE", L"EEE", L"BT", 
				L"CST", L"CE", L"EP", L"ME", L"CL", L"DoD"});
			this->g->Location = System::Drawing::Point(533, 222);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(169, 21);
			this->g->TabIndex = 174;
			this->g->Visible = false;
			// 
			// signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 443);
			this->Controls->Add(this->g);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->password_textbox);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->cancelBtn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cmb_prog);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->c);
			this->Controls->Add(this->b);
			this->Controls->Add(this->a);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Name = L"signup";
			this->Text = L"signup";
			this->Load += gcnew System::EventHandler(this, &signup::signup_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void signup_Load(System::Object^  sender, System::EventArgs^  e) {
				 comboBox1->SelectedIndex=-1;
			 }


			 String ^ gen_random(String ^ s, const int len) {
				 String ^ alphanum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

				 for (int i = 0; i < len; i++) {
					 // s[i] = alphanum[rand() % (alphanum->Length() - 1)];
					 // s=s->Concat(alphanum->Substring(rand() % (alphanum->Length() - 1)));
					 // MessageBox::Show("hello" +alphanum->Length());
					 s+= alphanum->Substring(rand() % 62,1);

					 //s->Insert(i,alphanum->Substring(rand() % (alphanum->Length() - 1),1));

				 }
				 //MessageBox::Show(s);

				 // s->Insert(len,"0");
				 return s;
			 }


	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {


				 String ^ password="";

				 password=gen_random(password,5);

				 // MessageBox::Show(password);

				 if(comboBox1->SelectedIndex==-1)
				 {
					 MessageBox::Show("Please select one of the types of User");
				 }
				 else
				 {
					 String ^ category="";
					 if(comboBox1->SelectedIndex==0)
					 {
						 category="Student";
					 }
					 else if(comboBox1->SelectedIndex==1)
					 {
						 category="PhD";
					 }
					 else if(comboBox1->SelectedIndex==2)
					 {
						 category ="Professor";
					 }
					 else
					 {
						 category ="Staff";
					 }
					 try{
						 String ^ fname=a->Text, ^ lname=c->Text, ^ mname=b->Text, ^uname=textBox2->Text;
						 String ^ idt = textBox1->Text , ^ dept=g->Text, ^ prog ="";
						 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
						 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
						 String ^ selectString;
						 if(!(fname!=""||lname!=""||mname!=""))
						 {
							 MessageBox::Show("Enter your name");
							 return ;
						 }
						 DB_Connection->Open();
						 selectString="Select * from "+ category + " where Username='"+textBox2->Text+"'";
						 //MessageBox::Show(selectString);
						 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);
						 OleDbDataReader ^ reader= cmd->ExecuteReader();
						 if(reader->Read())
						 {
							 MessageBox::Show("Invalid Username");
							 return ;
						 }
						 if(g->SelectedIndex==-1||g->SelectedIndex==0)
						 {
							 MessageBox::Show("Enter your Department");
							 return ;
						 }
						 if(cmb_prog->Visible==true && cmb_prog->SelectedIndex==-1)
						 {
							 MessageBox::Show("Select the programme");
							 return ;
						 }
						 DB_Connection->Close();

						 DB_Connection->Open();
						 if(category=="Student")
						 {
							 selectString = "INSERT INTO " + category + " ([Username],[FirstName],[MiddleName],[LastName],[DeptID],[Programme],[RollNumber],[Password]) VALUES ('"+uname+"','"+ fname +"','"+mname+"','"+ lname +"','"+ dept +"','"+ prog +"','"+ idt +"','"+password+"')";
							 //MessageBox::Show(selectString);
						 }
						 else if(category=="PhD")
						 {
							 selectString = "INSERT INTO " + category + " ([Username],[FirstName],[MiddleName],[LastName],[DeptID],[RollNumber],[Password]) VALUES ('"+uname+"','"+ fname +"','"+mname+"','"+ lname +"','"+ dept +"','"+ idt +"','"+password+"')";
						 }
						 else if(category=="Professor")
						 {
							 selectString = "INSERT INTO " + category + " ([Username],[FirstName],[MiddleName],[LastName],[DeptID],[ProfID],[Password]) VALUES ('"+uname+"','"+ fname +"','"+mname+"','"+ lname +"','"+ dept +"','"+ idt +"','"+password+"')";
						 }
						 else if(category=="Staff")
						 {
							 selectString = "INSERT INTO " + category + " ([Username],[FirstName],[MiddleName],[LastName],[DeptID],[StaffID],[Password]) VALUES ('"+uname+"','"+ fname +"','"+mname+"','"+ lname +"','"+ dept +"','"+ idt +"','"+password+"')";
						 }
						 // OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);
						 cmd = gcnew OleDbCommand(selectString, DB_Connection);
						 cmd->ExecuteNonQuery();
					 }
					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message);
						 //con->Close();
					 }
				 }
				 password_textbox->Text = password;
				 MessageBox::Show("Entry added successfully");
				 a->Text="";
				 b->Text="";
				 c->Text="";
				 //g->Text="";
				 g->SelectedIndex=-1;
				 textBox1->Text="";
				 textBox2->Text="";
				 // password_textbox->Text="";

			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 label8->Visible=true;
				 label9->Visible=true;
				 password_textbox->Visible=true;
				 if(comboBox1->SelectedIndex==0)
				 { a->Visible=true;
				 b->Visible=true;
				 c->Visible=true;
				 g->Visible=true;
				 textBox1->Visible=true;
				 textBox2->Visible=true;
				 a->Enabled=true;
				 b->Enabled=true;
				 c->Enabled=true;
				 g->Enabled=true;
				 textBox1->Enabled=true;
				 textBox2->Enabled=true;
				 cmb_prog->Visible=true;
				 comboBox1->Visible=true;
				 label7->Text="Roll Number";
				 label3->Visible=true;
				 label4->Visible=true;
				 label5->Visible=true;
				 label1->Visible=true;
				 label2->Visible=true;
				 label7->Visible=true;
				 }
				 else if(comboBox1->SelectedIndex==1)
				 { a->Visible=true;
				 b->Visible=true;
				 c->Visible=true;
				 g->Visible=true;
				 textBox1->Visible=true;
				 textBox2->Visible=true;
				 a->Enabled=true;
				 b->Enabled=true;
				 c->Enabled=true;
				 g->Enabled=true;
				 textBox1->Enabled=true;
				 textBox2->Enabled=true;
				 cmb_prog->Visible=false;
				 comboBox1->Visible=true;
				 label7->Text="Roll Number";
				 label3->Visible=true;
				 label4->Visible=true;
				 label5->Visible=true;
				 label1->Visible=true;
				 label2->Visible=false;
				 label7->Visible=true;
				 }
				 else if(comboBox1->SelectedIndex==2)
				 { a->Visible=true;
				 b->Visible=true;
				 c->Visible=true;
				 g->Visible=true;
				 textBox1->Visible=true;
				 textBox2->Visible=true;
				 a->Enabled=true;
				 b->Enabled=true;
				 c->Enabled=true;
				 g->Enabled=true;
				 textBox1->Enabled=true;
				 textBox2->Enabled=true;
				 cmb_prog->Visible=false;
				 label7->Text="Professor ID";
				 comboBox1->Visible=true;
				 label3->Visible=true;
				 label4->Visible=true;
				 label5->Visible=true;
				 label1->Visible=true;
				 label2->Visible=false;
				 label7->Visible=true;
				 }
				 else if(comboBox1->SelectedIndex==3)
				 { a->Visible=true;
				 b->Visible=true;
				 c->Visible=true;
				 g->Visible=true;
				 textBox1->Visible=true;
				 textBox2->Visible=true;
				 a->Enabled=true;
				 b->Enabled=true;
				 c->Enabled=true;
				 g->Enabled=true;
				 textBox1->Enabled=true;
				 textBox2->Enabled=true;
				 cmb_prog->Visible=false;
				 label7->Text="Staff ID";
				 comboBox1->Visible=true;
				 label3->Visible=true;
				 label4->Visible=true;
				 label5->Visible=true;
				 label1->Visible=true;
				 label2->Visible=false;
				 label7->Visible=true;
				 }
			 }
	};
}

