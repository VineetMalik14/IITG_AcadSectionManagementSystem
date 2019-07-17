#pragma once
#using <System.dll>
#using <System.data.dll>

#include "professor_sendGrades.h"
#include "professor_currentCourses.h"
#include "professor_addnotif_1.h"
#include "professor_viewNotifications.h"
#include "professor_updateProfile.h"
#include "professor_current_students.h"
#include "professor_sendCoursePreference.h"
#include "professor_ta_manage.h"
#include "professor_course_adjustment.h"
#include "professor_tt.h"

namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Summary for professor
	/// </summary>
	public ref class professor : public System::Windows::Forms::Form
	{
	public:
		String ^usrnm;     //stores the username of logged in user.
	private: System::Windows::Forms::Button^  logout_btn;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	public: 

	public: 
		Form ^previous;    //object for the previous form.
	public:
		professor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		professor(String ^text,Form ^a)
		{
			InitializeComponent();
			usrnm=text;
			previous=a;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~professor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Button^  btn_vn;

	protected: 

	private: System::Windows::Forms::Button^  btn_cs;
	private: System::Windows::Forms::Button^  btn_an;


	private: System::Windows::Forms::Button^  btn_cc;

	private: System::Windows::Forms::Button^  btn_tt;

	private: System::Windows::Forms::Button^  btn_scp;

	private: System::Windows::Forms::Button^  btn_sg;

	private: System::Windows::Forms::Button^  btn_up;
	private: System::Windows::Forms::Button^  btn_tam;
	private: System::Windows::Forms::Button^  btn_caa;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(professor::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->btn_caa = (gcnew System::Windows::Forms::Button());
			this->btn_vn = (gcnew System::Windows::Forms::Button());
			this->btn_cs = (gcnew System::Windows::Forms::Button());
			this->btn_an = (gcnew System::Windows::Forms::Button());
			this->btn_cc = (gcnew System::Windows::Forms::Button());
			this->btn_tt = (gcnew System::Windows::Forms::Button());
			this->btn_scp = (gcnew System::Windows::Forms::Button());
			this->btn_sg = (gcnew System::Windows::Forms::Button());
			this->btn_up = (gcnew System::Windows::Forms::Button());
			this->btn_tam = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->AutoScroll = true;
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox3);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox2);
			this->splitContainer1->Panel1->Controls->Add(this->label5);
			this->splitContainer1->Panel1->Controls->Add(this->logout_btn);
			this->splitContainer1->Panel1->Controls->Add(this->btn_caa);
			this->splitContainer1->Panel1->Controls->Add(this->btn_vn);
			this->splitContainer1->Panel1->Controls->Add(this->btn_cs);
			this->splitContainer1->Panel1->Controls->Add(this->btn_an);
			this->splitContainer1->Panel1->Controls->Add(this->btn_cc);
			this->splitContainer1->Panel1->Controls->Add(this->btn_tt);
			this->splitContainer1->Panel1->Controls->Add(this->btn_scp);
			this->splitContainer1->Panel1->Controls->Add(this->btn_sg);
			this->splitContainer1->Panel1->Controls->Add(this->btn_up);
			this->splitContainer1->Panel1->Controls->Add(this->btn_tam);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::Control;
			this->splitContainer1->Panel2->Controls->Add(this->panel1);
			this->splitContainer1->Panel2->Controls->Add(this->label4);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->label1);
			this->splitContainer1->Panel2->Controls->Add(this->pictureBox1);
			this->splitContainer1->Size = System::Drawing::Size(764, 501);
			this->splitContainer1->SplitterDistance = 195;
			this->splitContainer1->SplitterWidth = 3;
			this->splitContainer1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(40, 34);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(162, 909);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 11;
			// 
			// logout_btn
			// 
			this->logout_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->logout_btn->FlatAppearance->BorderSize = 0;
			this->logout_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->logout_btn->ForeColor = System::Drawing::Color::White;
			this->logout_btn->Location = System::Drawing::Point(0, 153);
			this->logout_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(172, 53);
			this->logout_btn->TabIndex = 10;
			this->logout_btn->Text = L"Logout";
			this->logout_btn->UseVisualStyleBackColor = false;
			this->logout_btn->Click += gcnew System::EventHandler(this, &professor::logout_btn_Click);
			// 
			// btn_caa
			// 
			this->btn_caa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btn_caa->FlatAppearance->BorderSize = 0;
			this->btn_caa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_caa->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_caa->ForeColor = System::Drawing::Color::White;
			this->btn_caa->Location = System::Drawing::Point(0, 855);
			this->btn_caa->Margin = System::Windows::Forms::Padding(2, 2, 2, 24);
			this->btn_caa->Name = L"btn_caa";
			this->btn_caa->Size = System::Drawing::Size(172, 53);
			this->btn_caa->TabIndex = 9;
			this->btn_caa->Text = L"Course Adjustment Approval";
			this->btn_caa->UseVisualStyleBackColor = false;
			this->btn_caa->Click += gcnew System::EventHandler(this, &professor::btn_caa_Click);
			// 
			// btn_vn
			// 
			this->btn_vn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btn_vn->FlatAppearance->BorderSize = 0;
			this->btn_vn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_vn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_vn->ForeColor = System::Drawing::Color::White;
			this->btn_vn->Location = System::Drawing::Point(0, 715);
			this->btn_vn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_vn->Name = L"btn_vn";
			this->btn_vn->Size = System::Drawing::Size(172, 53);
			this->btn_vn->TabIndex = 7;
			this->btn_vn->Text = L"View Notification";
			this->btn_vn->UseVisualStyleBackColor = false;
			this->btn_vn->Click += gcnew System::EventHandler(this, &professor::btn_vn_Click);
			// 
			// btn_cs
			// 
			this->btn_cs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btn_cs->FlatAppearance->BorderSize = 0;
			this->btn_cs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cs->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_cs->ForeColor = System::Drawing::Color::White;
			this->btn_cs->Location = System::Drawing::Point(0, 648);
			this->btn_cs->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_cs->Name = L"btn_cs";
			this->btn_cs->Size = System::Drawing::Size(172, 53);
			this->btn_cs->TabIndex = 6;
			this->btn_cs->Text = L"Current Students";
			this->btn_cs->UseVisualStyleBackColor = false;
			this->btn_cs->Click += gcnew System::EventHandler(this, &professor::btn_cs_Click);
			// 
			// btn_an
			// 
			this->btn_an->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btn_an->FlatAppearance->BorderSize = 0;
			this->btn_an->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_an->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_an->ForeColor = System::Drawing::Color::White;
			this->btn_an->Location = System::Drawing::Point(0, 785);
			this->btn_an->Margin = System::Windows::Forms::Padding(2, 2, 2, 24);
			this->btn_an->Name = L"btn_an";
			this->btn_an->Size = System::Drawing::Size(172, 53);
			this->btn_an->TabIndex = 8;
			this->btn_an->Text = L"Add Notification";
			this->btn_an->UseVisualStyleBackColor = false;
			this->btn_an->Click += gcnew System::EventHandler(this, &professor::btn_an_Click);
			// 
			// btn_cc
			// 
			this->btn_cc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btn_cc->FlatAppearance->BorderSize = 0;
			this->btn_cc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cc->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_cc->ForeColor = System::Drawing::Color::White;
			this->btn_cc->Location = System::Drawing::Point(0, 575);
			this->btn_cc->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_cc->Name = L"btn_cc";
			this->btn_cc->Size = System::Drawing::Size(172, 53);
			this->btn_cc->TabIndex = 5;
			this->btn_cc->Text = L"Courses";
			this->btn_cc->UseVisualStyleBackColor = false;
			this->btn_cc->Click += gcnew System::EventHandler(this, &professor::btn_cc_Click);
			// 
			// btn_tt
			// 
			this->btn_tt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btn_tt->FlatAppearance->BorderSize = 0;
			this->btn_tt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_tt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_tt->ForeColor = System::Drawing::Color::White;
			this->btn_tt->Location = System::Drawing::Point(0, 506);
			this->btn_tt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_tt->Name = L"btn_tt";
			this->btn_tt->Size = System::Drawing::Size(172, 53);
			this->btn_tt->TabIndex = 4;
			this->btn_tt->Text = L"Time Table";
			this->btn_tt->UseVisualStyleBackColor = false;
			this->btn_tt->Click += gcnew System::EventHandler(this, &professor::btn_tt_Click);
			// 
			// btn_scp
			// 
			this->btn_scp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btn_scp->FlatAppearance->BorderSize = 0;
			this->btn_scp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_scp->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_scp->ForeColor = System::Drawing::Color::White;
			this->btn_scp->Location = System::Drawing::Point(0, 362);
			this->btn_scp->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_scp->Name = L"btn_scp";
			this->btn_scp->Size = System::Drawing::Size(172, 53);
			this->btn_scp->TabIndex = 2;
			this->btn_scp->Text = L"Send Course Preference";
			this->btn_scp->UseVisualStyleBackColor = false;
			this->btn_scp->Click += gcnew System::EventHandler(this, &professor::btn_scp_Click);
			// 
			// btn_sg
			// 
			this->btn_sg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btn_sg->FlatAppearance->BorderSize = 0;
			this->btn_sg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sg->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_sg->ForeColor = System::Drawing::Color::White;
			this->btn_sg->Location = System::Drawing::Point(0, 287);
			this->btn_sg->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_sg->Name = L"btn_sg";
			this->btn_sg->Size = System::Drawing::Size(172, 53);
			this->btn_sg->TabIndex = 1;
			this->btn_sg->Text = L"Send Grades";
			this->btn_sg->UseVisualStyleBackColor = false;
			this->btn_sg->Click += gcnew System::EventHandler(this, &professor::btn_sg_Click);
			// 
			// btn_up
			// 
			this->btn_up->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btn_up->FlatAppearance->BorderSize = 0;
			this->btn_up->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_up->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_up->ForeColor = System::Drawing::Color::White;
			this->btn_up->Location = System::Drawing::Point(0, 216);
			this->btn_up->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_up->Name = L"btn_up";
			this->btn_up->Size = System::Drawing::Size(172, 53);
			this->btn_up->TabIndex = 0;
			this->btn_up->Text = L"Update Profile";
			this->btn_up->UseVisualStyleBackColor = false;
			this->btn_up->Click += gcnew System::EventHandler(this, &professor::btn_up_Click);
			// 
			// btn_tam
			// 
			this->btn_tam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btn_tam->FlatAppearance->BorderSize = 0;
			this->btn_tam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_tam->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_tam->ForeColor = System::Drawing::Color::White;
			this->btn_tam->Location = System::Drawing::Point(0, 434);
			this->btn_tam->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_tam->Name = L"btn_tam";
			this->btn_tam->Size = System::Drawing::Size(172, 53);
			this->btn_tam->TabIndex = 3;
			this->btn_tam->Text = L"TA Request";
			this->btn_tam->UseVisualStyleBackColor = false;
			this->btn_tam->Click += gcnew System::EventHandler(this, &professor::btn_tam_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(-3, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(568, 84);
			this->panel1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(305, 399);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 26);
			this->label4->TabIndex = 5;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Teal;
			this->label3->Location = System::Drawing::Point(138, 399);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(305, 357);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Teal;
			this->label1->Location = System::Drawing::Point(138, 357);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(215, 153);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(112, 142);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(40, 34);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 100);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 18;
			this->pictureBox3->TabStop = false;
			// 
			// professor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 501);
			this->Controls->Add(this->splitContainer1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"professor";
			this->Text = L"professor";
			this->Load += gcnew System::EventHandler(this, &professor::professor_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_sg_Click(System::Object^  sender, System::EventArgs^  e) {
				 splitContainer1->Panel2->Controls->Clear();
				 splitContainer1->Panel2->Controls->Add(gcnew professor_sendGrades(this->usrnm));
			 }
	private: System::Void btn_cc_Click(System::Object^  sender, System::EventArgs^  e) {
				 splitContainer1->Panel2->Controls->Clear();
				 splitContainer1->Panel2->Controls->Add(gcnew professor_currentCourses(this->usrnm));
			 }
	private: System::Void btn_an_Click(System::Object^  sender, System::EventArgs^  e) {
				 splitContainer1->Panel2->Controls->Clear();
				 splitContainer1->Panel2->Controls->Add(gcnew professor_addnotif_1(this->usrnm));
			 }
	private: System::Void btn_vn_Click(System::Object^  sender, System::EventArgs^  e) {
				 splitContainer1->Panel2->Controls->Clear();
				 splitContainer1->Panel2->Controls->Add(gcnew professor_viewNotifications(this->usrnm));
			 }
	private: System::Void btn_up_Click(System::Object^  sender, System::EventArgs^  e) {
				 splitContainer1->Panel2->Controls->Clear();
				 splitContainer1->Panel2->Controls->Add(gcnew professor_updateProfile(this->usrnm));
			 }

	private: System::Void btn_scp_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn_tam_Click(System::Object^  sender, System::EventArgs^  e) {
				 splitContainer1->Panel2->Controls->Clear();
				 splitContainer1->Panel2->Controls->Add(gcnew professor_ta_manage(this->usrnm));
			 }
	private: System::Void btn_cs_Click(System::Object^  sender, System::EventArgs^  e) {
				 splitContainer1->Panel2->Controls->Clear();
				 splitContainer1->Panel2->Controls->Add(gcnew professor_current_students(this->usrnm));
			 }
	private: System::Void btn_caa_Click(System::Object^  sender, System::EventArgs^  e) {
				 splitContainer1->Panel2->Controls->Clear();
				 splitContainer1->Panel2->Controls->Add(gcnew professor_course_adjustment(this->usrnm));
			 }
	private: System::Void logout_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 previous->Show();
				 professor::Close();
			 }
	private: System::Void btn_tt_Click(System::Object^  sender, System::EventArgs^  e) {
				 splitContainer1->Panel2->Controls->Clear();
				 splitContainer1->Panel2->Controls->Add(gcnew professor_tt(this->usrnm));

			 }
	private: System::Void professor_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^con;
				 try
				 {
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();
					 String^ com2="SELECT [FirstName],[MiddleName],[LastName],[PassportSizePhotograph] FROM Professor WHERE [Username]='"+this->usrnm+"';";

					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com2,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
					 label2->Text=this->usrnm;
					 while(readerData->Read())
					 {
						 if(!readerData->IsDBNull(3))
							 pictureBox1->ImageLocation=readerData->GetString(3);
						 label4->Text=readerData->GetString(0);

						 if(!readerData->IsDBNull(1))
							 label4->Text+=" "+readerData->GetString(1);
						 if(!readerData->IsDBNull(2))
							 label4->Text+=" "+readerData->GetString(2);
						 label4->Text=label4->Text->Trim();

					 }


				 }
				 catch(Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }

			 }

	};
}
