#pragma once

#include "Search.h"
#include "StudentForm.h"
#include "homepageNotifications.h"
#include "professor.h"
#include "HOD.h"
#include "login_as.h"
#include "Admin.h"
#include "Exam_TT__.h"
using namespace std ;


#using <System.dll>
#using <System.data.dll>


namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for Homepage
	/// </summary>
	public ref class Homepage : public System::Windows::Forms::Form
	{
	public:

		UserControlSearch ^s;
		homepageNoticifications ^ h;
		String^ sess ;
	private: System::Windows::Forms::Button^  button2;
	public: 
		String^ sem ;
		Homepage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			sess = "2018-19" ;
			sem = "Spring" ;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Homepage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  formsPanel;
	protected: 
	private: System::Windows::Forms::Button^  PFormsBtn;
	private: System::Windows::Forms::Button^  MFormsBtn;
	private: System::Windows::Forms::Button^  GenFormsBtn;
	private: System::Windows::Forms::Button^  BMFormsBtn;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  searchBtn;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  formsBtn;
	private: System::Windows::Forms::Button^  AcadCalBtn;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  noticeBrdBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox2;









	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::Button^  helpBtn;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Panel^  loginPnl;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  loginBtn;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  txtUsername;














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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Homepage::typeid));
			this->formsPanel = (gcnew System::Windows::Forms::Panel());
			this->PFormsBtn = (gcnew System::Windows::Forms::Button());
			this->MFormsBtn = (gcnew System::Windows::Forms::Button());
			this->GenFormsBtn = (gcnew System::Windows::Forms::Button());
			this->BMFormsBtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->formsBtn = (gcnew System::Windows::Forms::Button());
			this->AcadCalBtn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->helpBtn = (gcnew System::Windows::Forms::Button());
			this->noticeBrdBtn = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->loginPnl = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->formsPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->loginPnl->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// formsPanel
			// 
			this->formsPanel->BackColor = System::Drawing::Color::Teal;
			this->formsPanel->Controls->Add(this->PFormsBtn);
			this->formsPanel->Controls->Add(this->MFormsBtn);
			this->formsPanel->Controls->Add(this->GenFormsBtn);
			this->formsPanel->Controls->Add(this->BMFormsBtn);
			this->formsPanel->Location = System::Drawing::Point(922, 176);
			this->formsPanel->Margin = System::Windows::Forms::Padding(0);
			this->formsPanel->Name = L"formsPanel";
			this->formsPanel->Size = System::Drawing::Size(133, 118);
			this->formsPanel->TabIndex = 21;
			this->formsPanel->Visible = false;
			// 
			// PFormsBtn
			// 
			this->PFormsBtn->BackColor = System::Drawing::Color::Teal;
			this->PFormsBtn->FlatAppearance->BorderSize = 0;
			this->PFormsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PFormsBtn->ForeColor = System::Drawing::Color::White;
			this->PFormsBtn->Location = System::Drawing::Point(1, 84);
			this->PFormsBtn->Margin = System::Windows::Forms::Padding(1);
			this->PFormsBtn->Name = L"PFormsBtn";
			this->PFormsBtn->Size = System::Drawing::Size(130, 27);
			this->PFormsBtn->TabIndex = 3;
			this->PFormsBtn->Text = L"   PhD   ";
			this->PFormsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->PFormsBtn->UseVisualStyleBackColor = false;
			this->PFormsBtn->Click += gcnew System::EventHandler(this, &Homepage::PFormsBtn_Click);
			// 
			// MFormsBtn
			// 
			this->MFormsBtn->BackColor = System::Drawing::Color::Teal;
			this->MFormsBtn->FlatAppearance->BorderSize = 0;
			this->MFormsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MFormsBtn->ForeColor = System::Drawing::Color::White;
			this->MFormsBtn->Location = System::Drawing::Point(1, 57);
			this->MFormsBtn->Margin = System::Windows::Forms::Padding(1);
			this->MFormsBtn->Name = L"MFormsBtn";
			this->MFormsBtn->Size = System::Drawing::Size(130, 27);
			this->MFormsBtn->TabIndex = 2;
			this->MFormsBtn->Text = L"   MTech/MDes   ";
			this->MFormsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->MFormsBtn->UseVisualStyleBackColor = false;
			this->MFormsBtn->Click += gcnew System::EventHandler(this, &Homepage::MFormsBtn_Click);
			// 
			// GenFormsBtn
			// 
			this->GenFormsBtn->BackColor = System::Drawing::Color::Teal;
			this->GenFormsBtn->FlatAppearance->BorderSize = 0;
			this->GenFormsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GenFormsBtn->ForeColor = System::Drawing::Color::White;
			this->GenFormsBtn->Location = System::Drawing::Point(1, 30);
			this->GenFormsBtn->Margin = System::Windows::Forms::Padding(1);
			this->GenFormsBtn->Name = L"GenFormsBtn";
			this->GenFormsBtn->Size = System::Drawing::Size(130, 27);
			this->GenFormsBtn->TabIndex = 1;
			this->GenFormsBtn->Text = L"   General   ";
			this->GenFormsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->GenFormsBtn->UseVisualStyleBackColor = false;
			this->GenFormsBtn->Click += gcnew System::EventHandler(this, &Homepage::GenFormsBtn_Click);
			// 
			// BMFormsBtn
			// 
			this->BMFormsBtn->BackColor = System::Drawing::Color::Teal;
			this->BMFormsBtn->FlatAppearance->BorderSize = 0;
			this->BMFormsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BMFormsBtn->ForeColor = System::Drawing::Color::White;
			this->BMFormsBtn->Location = System::Drawing::Point(1, 1);
			this->BMFormsBtn->Margin = System::Windows::Forms::Padding(1);
			this->BMFormsBtn->Name = L"BMFormsBtn";
			this->BMFormsBtn->Size = System::Drawing::Size(130, 28);
			this->BMFormsBtn->TabIndex = 0;
			this->BMFormsBtn->Text = L"   BTech/BDes/MSc   ";
			this->BMFormsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->BMFormsBtn->UseVisualStyleBackColor = false;
			this->BMFormsBtn->Click += gcnew System::EventHandler(this, &Homepage::BMFormsBtn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(11, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 47);
			this->button1->TabIndex = 10;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Homepage::button1_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->BackColor = System::Drawing::Color::Teal;
			this->searchBtn->FlatAppearance->BorderSize = 0;
			this->searchBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchBtn->ForeColor = System::Drawing::Color::White;
			this->searchBtn->Location = System::Drawing::Point(576, 0);
			this->searchBtn->Margin = System::Windows::Forms::Padding(0);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(80, 47);
			this->searchBtn->TabIndex = 9;
			this->searchBtn->Text = L"SEARCH";
			this->searchBtn->UseVisualStyleBackColor = false;
			this->searchBtn->Click += gcnew System::EventHandler(this, &Homepage::searchBtn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Teal;
			this->label4->Location = System::Drawing::Point(122, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 25);
			this->label4->TabIndex = 20;
			this->label4->Text = L"All at one place.";
			// 
			// formsBtn
			// 
			this->formsBtn->BackColor = System::Drawing::Color::Teal;
			this->formsBtn->FlatAppearance->BorderSize = 0;
			this->formsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->formsBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->formsBtn->ForeColor = System::Drawing::Color::White;
			this->formsBtn->Location = System::Drawing::Point(982, 0);
			this->formsBtn->Margin = System::Windows::Forms::Padding(0);
			this->formsBtn->Name = L"formsBtn";
			this->formsBtn->Size = System::Drawing::Size(73, 47);
			this->formsBtn->TabIndex = 5;
			this->formsBtn->Text = L"FORMS";
			this->formsBtn->UseVisualStyleBackColor = false;
			this->formsBtn->Click += gcnew System::EventHandler(this, &Homepage::formsBtn_Click);
			// 
			// AcadCalBtn
			// 
			this->AcadCalBtn->BackColor = System::Drawing::Color::Teal;
			this->AcadCalBtn->FlatAppearance->BorderSize = 0;
			this->AcadCalBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AcadCalBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AcadCalBtn->ForeColor = System::Drawing::Color::White;
			this->AcadCalBtn->Location = System::Drawing::Point(793, 0);
			this->AcadCalBtn->Margin = System::Windows::Forms::Padding(0);
			this->AcadCalBtn->Name = L"AcadCalBtn";
			this->AcadCalBtn->Size = System::Drawing::Size(189, 47);
			this->AcadCalBtn->TabIndex = 1;
			this->AcadCalBtn->Text = L"ACADEMIC CALENDAR";
			this->AcadCalBtn->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(122, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(381, 25);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Student | Faculty | Administration";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Teal;
			this->label6->Location = System::Drawing::Point(120, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(399, 41);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Academic System IITG";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->helpBtn);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->searchBtn);
			this->panel2->Controls->Add(this->formsBtn);
			this->panel2->Controls->Add(this->AcadCalBtn);
			this->panel2->Controls->Add(this->noticeBrdBtn);
			this->panel2->Location = System::Drawing::Point(0, 129);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1067, 47);
			this->panel2->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(313, 15);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 19);
			this->textBox1->TabIndex = 24;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Visible = false;
			// 
			// helpBtn
			// 
			this->helpBtn->BackColor = System::Drawing::Color::Teal;
			this->helpBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpBtn.BackgroundImage")));
			this->helpBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->helpBtn->FlatAppearance->BorderSize = 0;
			this->helpBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->helpBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->helpBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->helpBtn->Font = (gcnew System::Drawing::Font(L"Chiller", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpBtn->ForeColor = System::Drawing::Color::Gold;
			this->helpBtn->Location = System::Drawing::Point(541, 10);
			this->helpBtn->Margin = System::Windows::Forms::Padding(0);
			this->helpBtn->Name = L"helpBtn";
			this->helpBtn->Size = System::Drawing::Size(26, 26);
			this->helpBtn->TabIndex = 21;
			this->helpBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->helpBtn->UseVisualStyleBackColor = true;
			this->helpBtn->Visible = false;
			this->helpBtn->Click += gcnew System::EventHandler(this, &Homepage::helpBtn_Click);
			// 
			// noticeBrdBtn
			// 
			this->noticeBrdBtn->BackColor = System::Drawing::Color::Teal;
			this->noticeBrdBtn->FlatAppearance->BorderSize = 0;
			this->noticeBrdBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->noticeBrdBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->noticeBrdBtn->ForeColor = System::Drawing::Color::White;
			this->noticeBrdBtn->Location = System::Drawing::Point(651, 0);
			this->noticeBrdBtn->Margin = System::Windows::Forms::Padding(0);
			this->noticeBrdBtn->Name = L"noticeBrdBtn";
			this->noticeBrdBtn->Size = System::Drawing::Size(142, 47);
			this->noticeBrdBtn->TabIndex = 0;
			this->noticeBrdBtn->Text = L"NOTICE BOARD";
			this->noticeBrdBtn->UseVisualStyleBackColor = false;
			this->noticeBrdBtn->Click += gcnew System::EventHandler(this, &Homepage::noticeBrdBtn_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Teal;
			this->panel4->Controls->Add(this->radioButton2);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->radioButton1);
			this->panel4->Controls->Add(this->radioButton3);
			this->panel4->Location = System::Drawing::Point(200, 1);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(187, 83);
			this->panel4->TabIndex = 22;
			this->panel4->Visible = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(8, 33);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 17);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Faculty";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::White;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"----(Select)----", L"CSE", L"MNC", L"ECE", L"EEE", 
				L"BT", L"CST", L"CE", L"EP", L"ME", L"CL", L"DoD"});
			this->comboBox1->Location = System::Drawing::Point(109, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(75, 21);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->Visible = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(8, 10);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Student";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(8, 57);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(79, 17);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Admin Staff";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(11, 15);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->loginPnl);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Location = System::Drawing::Point(113, 176);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(839, 503);
			this->panel1->TabIndex = 23;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Homepage::panel1_Paint);
			// 
			// loginPnl
			// 
			this->loginPnl->BackColor = System::Drawing::Color::Teal;
			this->loginPnl->Controls->Add(this->panel3);
			this->loginPnl->Location = System::Drawing::Point(214, 156);
			this->loginPnl->Name = L"loginPnl";
			this->loginPnl->Size = System::Drawing::Size(411, 190);
			this->loginPnl->TabIndex = 28;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->linkLabel1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->loginBtn);
			this->panel3->Controls->Add(this->txtPassword);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->txtUsername);
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(405, 184);
			this->panel3->TabIndex = 0;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::OrangeRed;
			this->linkLabel1->Location = System::Drawing::Point(261, 148);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(90, 13);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"www.iitg.ac.in/cb";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Homepage::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(40, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"For any issue lodge a service request in";
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::Teal;
			this->loginBtn->FlatAppearance->BorderSize = 0;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::White;
			this->loginBtn->Location = System::Drawing::Point(34, 102);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(317, 32);
			this->loginBtn->TabIndex = 3;
			this->loginBtn->Text = L"LOGIN";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &Homepage::loginBtn_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(34, 67);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(317, 29);
			this->txtPassword->TabIndex = 2;
			this->txtPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::DimGray;
			this->textBox2->Location = System::Drawing::Point(258, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 29);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"@iitg.ac.in";
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(34, 32);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(223, 29);
			this->txtUsername->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Teal;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(148, 0);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 47);
			this->button2->TabIndex = 25;
			this->button2->Text = L"EXAM TT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Homepage::button2_Click);
			// 
			// Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1064, 609);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->formsPanel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"Homepage";
			this->Text = L"Homepage";
			this->Load += gcnew System::EventHandler(this, &Homepage::Homepage_Load);
			this->formsPanel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->loginPnl->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			private: System::Void loginBtn_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^con;	 
				 try{				
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();

					 String ^ aString = "Select * from Student where [Username] ='"+txtUsername-> Text+"';";
					 //					 MessageBox::Show(aString);

					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(aString,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

					 int count=0;
					 String ^password;
					 String ^usrnm;
					 while(readerData->Read())
					 {
						 password=readerData->GetString(5);
						 usrnm=readerData->GetString(0);
						 //						 MessageBox::Show(password);
						 count++;
					 }

					 //checking if any entry found with the username specified by user
					 if(count!=0){
						 //matching the password entered
						 if(txtPassword->Text == password){
							 Homepage::Hide();
							 Homepage ^homepage=gcnew Homepage(); 
							 StudentForm ^student=gcnew StudentForm(usrnm,homepage);  //passing the homepage object in order to return back.
							 student->ShowDialog();
							 con->Close();
						 }
						 else{
							 MessageBox::Show("Please check your password and try again!");
						 }
					 }
					 aString = "Select * from Professor where [Username] ='"+txtUsername-> Text+"';";
					 cmd=gcnew OleDb::OleDbCommand(aString,con);
					 readerData=cmd->ExecuteReader();
					 count=0;
					 while(readerData->Read())
					 {
						 password=readerData->GetString(5);
						 usrnm=readerData->GetString(0);
						 count++;
					 }

					 aString = "Select * from Departments where [Username] ='"+txtUsername-> Text+"' and [Designation]='HoD' and [Session]='"+sess+"' and [Semester]='"+sem+"';";
					 cmd=gcnew OleDb::OleDbCommand(aString,con);
					 readerData=cmd->ExecuteReader();

					 bool isHoD = false ;
					 if(readerData->Read()){
						 isHoD = true ;
					 }

					 if(count!=0){
						 //matching the password entered
						 if(txtPassword->Text == password){

							 Homepage ^homepage=gcnew Homepage();
							 HOD ^_hod_ = gcnew HOD(usrnm,homepage) ;
							 professor ^prof=gcnew professor(usrnm,homepage);  //passing the homepage object in order to return back.

							 con->Close();
							 Homepage::Hide();
							 //Homepage::Close();
							 //prof->ShowDialog();

							 login_as ^ login_as_ = gcnew login_as(_hod_,prof) ;
							 login_as_->ShowDialog() ;

						 }
						 else{
							 MessageBox::Show("Please check your password and try again!");
						 }
					 }
					 aString = "Select * from Staff where [Username] ='"+txtUsername-> Text+"';";
					 cmd=gcnew OleDb::OleDbCommand(aString,con);
					 readerData=cmd->ExecuteReader();
					 count=0;
					 while(readerData->Read())
					 {
						 password=readerData->GetString(5);
						 usrnm=readerData->GetString(0);
						 count++;
					 }
					 if(count!=0){
						 //matching the password entered
						 if(txtPassword->Text == password){

							 Homepage ^homepage=gcnew Homepage(); 
							 Admin::Form1 ^prof=gcnew Admin::Form1(usrnm,homepage);  //passing the homepage object in order to return back.

							 con->Close();
							 Homepage::Hide();
							 //Homepage::Close();
							 prof->ShowDialog();



						 }
						 else{
							 MessageBox::Show("Please check your password and try again!");
						 }
					 }
					 con->Close();
					 //MessageBox::Show("Please Check Username");
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }
			 };
	private: System::Void BMFormsBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			    Process::Start("http://intranet.iitg.ernet.in/acad/forms/btbdmsc_index.htm");
		    }
	private: System::Void GenFormsBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			    Process::Start("http://intranet.iitg.ernet.in/acad/forms/common_formindex.htm");
		    }
	private: System::Void MFormsBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			    Process::Start("http://intranet.iitg.ernet.in/acad/forms/mtech_formindex.htm");
		    }
	private: System::Void PFormsBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			    Process::Start("http://intranet.iitg.ernet.in/acad/forms/formindexphd.htm");
		    }
	private: System::Void Homepage_Load(System::Object^  sender, System::EventArgs^  e) {
		    }

	private: System::Void searchBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			    formsPanel->Visible=false;
				 textBox1->Visible=true;
			    helpBtn->Visible=true;
			    comboBox1->Visible=true;
			    panel4->Visible=true;
			    this->comboBox1->SelectedIndex = 0;
			    this->radioButton1->Checked=true;
				panel1->Controls->Remove(h);	    
			}
	

private: System::Void helpBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		    //checking if department selected for search
		    if(comboBox1->SelectedIndex == 0){
			    MessageBox::Show("Please Select Department from Dropdown Menu!");
		    }
		    else{
			    String ^table = "Student";
			    if (radioButton2->Checked) table="Professor";
			    if (radioButton3->Checked) table="Staff";

			    s = gcnew UserControlSearch(textBox1->Text,comboBox1->Text,table);
			    textBox1->Visible=false;
			    helpBtn->Visible=false;
			    panel4->Visible=false;
			    comboBox1->Visible=false;
			    loginPnl->Hide();
			    panel1->Controls->Add(s);		    }
	    }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Visible=false;
			 helpBtn->Visible=false;
			 panel4->Visible=false;
			 formsPanel->Visible=false;
			 panel1->Controls->Remove(s);
			panel1->Controls->Remove(h);
		    loginPnl->Show();
	    }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 Process::Start("http://iitg.ac.in/cb");
		 }

private: System::Void noticeBrdBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Visible=false;
			 helpBtn->Visible=false;
			 panel4->Visible=false;
			 h = gcnew homepageNoticifications();
			 formsPanel->Visible=false;
			 loginPnl->Hide();		
			 panel1->Controls->Remove(s);
			 panel1->Controls->Add(h);
		 }
private: System::Void formsBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Visible=false;
			 helpBtn->Visible=false;
			 panel4->Visible=false;
			 formsPanel->Visible=true;
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Exam_TT__ ^f=gcnew Exam_TT__();
			 f->ShowDialog();

		 }
};
}
