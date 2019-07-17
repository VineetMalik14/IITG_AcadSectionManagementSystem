#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

namespace projectUI {

	/// <summary>
	/// Summary for DetailedStudentProfile
	/// </summary>
	public ref class DetailedStudentProfile : public System::Windows::Forms::UserControl
	{
	public:
		String ^usrnm;
		Panel ^parent;
		String ^ profilePicPath;
	private: System::Windows::Forms::Button^  browseBtn;
	public: 

	public: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialogPhoto;
	private: System::Windows::Forms::TextBox^  txtPhoto;
	private: System::Windows::Forms::ComboBox^  m;
	private: System::Windows::Forms::ComboBox^  t;
			 UserControl ^previous;

	public:
		DetailedStudentProfile(String ^text,UserControl ^b,Panel ^a)
		{
			InitializeComponent();
			usrnm=text;
			parent=a;
			previous=b;
			profilePicPath = "";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DetailedStudentProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  cancelBtn;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  editBtn;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  x;
	private: System::Windows::Forms::TextBox^  w;
	private: System::Windows::Forms::TextBox^  v;
	private: System::Windows::Forms::TextBox^  u;

	private: System::Windows::Forms::TextBox^  l;
	private: System::Windows::Forms::TextBox^  k;
	private: System::Windows::Forms::TextBox^  j;
	private: System::Windows::Forms::TextBox^  i;
	private: System::Windows::Forms::TextBox^  h;
	private: System::Windows::Forms::TextBox^  g;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::Button^  UpdateBtn;
	private: System::Windows::Forms::TextBox^  s;
	private: System::Windows::Forms::TextBox^  r;
	private: System::Windows::Forms::TextBox^  q;
	private: System::Windows::Forms::TextBox^  p;
	private: System::Windows::Forms::TextBox^  o;
	private: System::Windows::Forms::TextBox^  n;
	private: System::Windows::Forms::TextBox^  f;
	private: System::Windows::Forms::TextBox^  e;
	private: System::Windows::Forms::TextBox^  d;
	private: System::Windows::Forms::TextBox^  c;
	private: System::Windows::Forms::TextBox^  b;
	private: System::Windows::Forms::TextBox^  a;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->m = (gcnew System::Windows::Forms::ComboBox());
			this->t = (gcnew System::Windows::Forms::ComboBox());
			this->txtPhoto = (gcnew System::Windows::Forms::TextBox());
			this->browseBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->x = (gcnew System::Windows::Forms::TextBox());
			this->w = (gcnew System::Windows::Forms::TextBox());
			this->v = (gcnew System::Windows::Forms::TextBox());
			this->u = (gcnew System::Windows::Forms::TextBox());
			this->l = (gcnew System::Windows::Forms::TextBox());
			this->k = (gcnew System::Windows::Forms::TextBox());
			this->j = (gcnew System::Windows::Forms::TextBox());
			this->i = (gcnew System::Windows::Forms::TextBox());
			this->h = (gcnew System::Windows::Forms::TextBox());
			this->g = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->UpdateBtn = (gcnew System::Windows::Forms::Button());
			this->s = (gcnew System::Windows::Forms::TextBox());
			this->r = (gcnew System::Windows::Forms::TextBox());
			this->q = (gcnew System::Windows::Forms::TextBox());
			this->p = (gcnew System::Windows::Forms::TextBox());
			this->o = (gcnew System::Windows::Forms::TextBox());
			this->n = (gcnew System::Windows::Forms::TextBox());
			this->f = (gcnew System::Windows::Forms::TextBox());
			this->e = (gcnew System::Windows::Forms::TextBox());
			this->d = (gcnew System::Windows::Forms::TextBox());
			this->c = (gcnew System::Windows::Forms::TextBox());
			this->b = (gcnew System::Windows::Forms::TextBox());
			this->a = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openFileDialogPhoto = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->AutoScrollMargin = System::Drawing::Size(0, 25);
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->m);
			this->panel1->Controls->Add(this->t);
			this->panel1->Controls->Add(this->txtPhoto);
			this->panel1->Controls->Add(this->browseBtn);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->backBtn);
			this->panel1->Controls->Add(this->cancelBtn);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->editBtn);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->x);
			this->panel1->Controls->Add(this->w);
			this->panel1->Controls->Add(this->v);
			this->panel1->Controls->Add(this->u);
			this->panel1->Controls->Add(this->l);
			this->panel1->Controls->Add(this->k);
			this->panel1->Controls->Add(this->j);
			this->panel1->Controls->Add(this->i);
			this->panel1->Controls->Add(this->h);
			this->panel1->Controls->Add(this->g);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->UpdateBtn);
			this->panel1->Controls->Add(this->s);
			this->panel1->Controls->Add(this->r);
			this->panel1->Controls->Add(this->q);
			this->panel1->Controls->Add(this->p);
			this->panel1->Controls->Add(this->o);
			this->panel1->Controls->Add(this->n);
			this->panel1->Controls->Add(this->f);
			this->panel1->Controls->Add(this->e);
			this->panel1->Controls->Add(this->d);
			this->panel1->Controls->Add(this->c);
			this->panel1->Controls->Add(this->b);
			this->panel1->Controls->Add(this->a);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1121, 622);
			this->panel1->TabIndex = 75;
			// 
			// m
			// 
			this->m->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->m->Enabled = false;
			this->m->FormattingEnabled = true;
			this->m->Items->AddRange(gcnew cli::array< System::Object^  >(13) {L"Dihing", L"Manas", L"Umiam", L"Barak", L"Kameng", L"Brahmaputra", 
				L"Lohit", L"Dibang", L"Kapili", L"Siang", L"MSH", L"Shubhansiri", L"Dhansiri"});
			this->m->Location = System::Drawing::Point(756, 244);
			this->m->Name = L"m";
			this->m->Size = System::Drawing::Size(224, 30);
			this->m->TabIndex = 131;
			// 
			// t
			// 
			this->t->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t->Enabled = false;
			this->t->FormattingEnabled = true;
			this->t->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"A+", L"A-", L"B+", L"B-", L"AB+", L"AB-", L"O+", L"O-"});
			this->t->Location = System::Drawing::Point(756, 614);
			this->t->Name = L"t";
			this->t->Size = System::Drawing::Size(224, 30);
			this->t->TabIndex = 130;
			// 
			// txtPhoto
			// 
			this->txtPhoto->Location = System::Drawing::Point(733, 155);
			this->txtPhoto->Name = L"txtPhoto";
			this->txtPhoto->Size = System::Drawing::Size(149, 30);
			this->txtPhoto->TabIndex = 129;
			this->txtPhoto->Visible = false;
			// 
			// browseBtn
			// 
			this->browseBtn->BackColor = System::Drawing::Color::OrangeRed;
			this->browseBtn->FlatAppearance->BorderSize = 0;
			this->browseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->browseBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->browseBtn->ForeColor = System::Drawing::Color::White;
			this->browseBtn->Location = System::Drawing::Point(619, 155);
			this->browseBtn->Margin = System::Windows::Forms::Padding(0);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(102, 31);
			this->browseBtn->TabIndex = 128;
			this->browseBtn->Text = L"Browse";
			this->browseBtn->UseVisualStyleBackColor = false;
			this->browseBtn->Visible = false;
			this->browseBtn->Click += gcnew System::EventHandler(this, &DetailedStudentProfile::browseBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->ImageLocation = L"Resources\\\\";
			this->pictureBox1->Location = System::Drawing::Point(480, 42);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(139, 143);
			this->pictureBox1->TabIndex = 127;
			this->pictureBox1->TabStop = false;
			// 
			// backBtn
			// 
			this->backBtn->BackColor = System::Drawing::Color::Teal;
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Location = System::Drawing::Point(573, 889);
			this->backBtn->Margin = System::Windows::Forms::Padding(0);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(221, 63);
			this->backBtn->TabIndex = 92;
			this->backBtn->Text = L"BACK";
			this->backBtn->UseVisualStyleBackColor = false;
			this->backBtn->Click += gcnew System::EventHandler(this, &DetailedStudentProfile::backBtn_Click);
			// 
			// cancelBtn
			// 
			this->cancelBtn->BackColor = System::Drawing::Color::OrangeRed;
			this->cancelBtn->FlatAppearance->BorderSize = 0;
			this->cancelBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cancelBtn->ForeColor = System::Drawing::Color::White;
			this->cancelBtn->Location = System::Drawing::Point(573, 889);
			this->cancelBtn->Margin = System::Windows::Forms::Padding(0);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(221, 63);
			this->cancelBtn->TabIndex = 126;
			this->cancelBtn->Text = L"CANCEL";
			this->cancelBtn->UseVisualStyleBackColor = false;
			this->cancelBtn->Click += gcnew System::EventHandler(this, &DetailedStudentProfile::cancelBtn_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(576, 250);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 22);
			this->label8->TabIndex = 124;
			this->label8->Text = L"Hostel";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// editBtn
			// 
			this->editBtn->BackColor = System::Drawing::Color::Teal;
			this->editBtn->FlatAppearance->BorderSize = 0;
			this->editBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->editBtn->ForeColor = System::Drawing::Color::White;
			this->editBtn->Location = System::Drawing::Point(305, 889);
			this->editBtn->Margin = System::Windows::Forms::Padding(0);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(221, 63);
			this->editBtn->TabIndex = 123;
			this->editBtn->Text = L"EDIT";
			this->editBtn->UseVisualStyleBackColor = false;
			this->editBtn->Click += gcnew System::EventHandler(this, &DetailedStudentProfile::editBtn_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(131, 775);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(82, 22);
			this->label25->TabIndex = 122;
			this->label25->Text = L"Gender";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(131, 722);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(140, 22);
			this->label26->TabIndex = 121;
			this->label26->Text = L"Birth category";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(131, 670);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(108, 22);
			this->label27->TabIndex = 120;
			this->label27->Text = L"Nationality";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(573, 832);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(115, 22);
			this->label14->TabIndex = 119;
			this->label14->Text = L"Passport no";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(573, 779);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(111, 22);
			this->label15->TabIndex = 118;
			this->label15->Text = L"Aadhar no";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(573, 726);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(73, 22);
			this->label16->TabIndex = 117;
			this->label16->Text = L"weight";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(573, 673);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(70, 22);
			this->label17->TabIndex = 116;
			this->label17->Text = L"Height";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(573, 620);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(117, 22);
			this->label18->TabIndex = 115;
			this->label18->Text = L"Bloodgroup";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(573, 462);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(164, 22);
			this->label19->TabIndex = 114;
			this->label19->Text = L"Admission session";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(573, 514);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(139, 22);
			this->label20->TabIndex = 113;
			this->label20->Text = L"Father\'s name";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(573, 567);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(146, 22);
			this->label21->TabIndex = 112;
			this->label21->Text = L"Mother\'s name";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(131, 828);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(52, 22);
			this->label22->TabIndex = 111;
			this->label22->Text = L"DOB";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(573, 409);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(90, 22);
			this->label23->TabIndex = 110;
			this->label23->Text = L"Pincode:";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(573, 303);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 22);
			this->label12->TabIndex = 109;
			this->label12->Text = L"RoomNo:";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(573, 356);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 22);
			this->label11->TabIndex = 108;
			this->label11->Text = L"Address:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(131, 617);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 22);
			this->label2->TabIndex = 107;
			this->label2->Text = L"Programme";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(131, 564);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 22);
			this->label1->TabIndex = 106;
			this->label1->Text = L"Department";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// x
			// 
			this->x->Enabled = false;
			this->x->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->x->Location = System::Drawing::Point(756, 830);
			this->x->Margin = System::Windows::Forms::Padding(4);
			this->x->Name = L"x";
			this->x->Size = System::Drawing::Size(224, 30);
			this->x->TabIndex = 105;
			// 
			// w
			// 
			this->w->Enabled = false;
			this->w->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->w->Location = System::Drawing::Point(756, 778);
			this->w->Margin = System::Windows::Forms::Padding(4);
			this->w->Name = L"w";
			this->w->Size = System::Drawing::Size(224, 30);
			this->w->TabIndex = 104;
			// 
			// v
			// 
			this->v->Enabled = false;
			this->v->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->v->Location = System::Drawing::Point(756, 724);
			this->v->Margin = System::Windows::Forms::Padding(4);
			this->v->Name = L"v";
			this->v->Size = System::Drawing::Size(224, 30);
			this->v->TabIndex = 103;
			// 
			// u
			// 
			this->u->Enabled = false;
			this->u->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->u->Location = System::Drawing::Point(756, 671);
			this->u->Margin = System::Windows::Forms::Padding(4);
			this->u->Name = L"u";
			this->u->Size = System::Drawing::Size(224, 30);
			this->u->TabIndex = 102;
			// 
			// l
			// 
			this->l->Enabled = false;
			this->l->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l->Location = System::Drawing::Point(311, 826);
			this->l->Margin = System::Windows::Forms::Padding(4);
			this->l->Name = L"l";
			this->l->Size = System::Drawing::Size(224, 30);
			this->l->TabIndex = 100;
			// 
			// k
			// 
			this->k->Enabled = false;
			this->k->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->k->Location = System::Drawing::Point(311, 774);
			this->k->Margin = System::Windows::Forms::Padding(4);
			this->k->Name = L"k";
			this->k->Size = System::Drawing::Size(224, 30);
			this->k->TabIndex = 99;
			// 
			// j
			// 
			this->j->Enabled = false;
			this->j->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->j->Location = System::Drawing::Point(311, 720);
			this->j->Margin = System::Windows::Forms::Padding(4);
			this->j->Name = L"j";
			this->j->Size = System::Drawing::Size(224, 30);
			this->j->TabIndex = 98;
			// 
			// i
			// 
			this->i->Enabled = false;
			this->i->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->i->Location = System::Drawing::Point(311, 667);
			this->i->Margin = System::Windows::Forms::Padding(4);
			this->i->Name = L"i";
			this->i->Size = System::Drawing::Size(224, 30);
			this->i->TabIndex = 97;
			// 
			// h
			// 
			this->h->Enabled = false;
			this->h->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->h->Location = System::Drawing::Point(311, 614);
			this->h->Margin = System::Windows::Forms::Padding(4);
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(224, 30);
			this->h->TabIndex = 96;
			// 
			// g
			// 
			this->g->Enabled = false;
			this->g->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->g->Location = System::Drawing::Point(311, 561);
			this->g->Margin = System::Windows::Forms::Padding(4);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(224, 30);
			this->g->TabIndex = 95;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(131, 511);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(159, 22);
			this->label9->TabIndex = 94;
			this->label9->Text = L"Mobile Number :";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(131, 352);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 22);
			this->label3->TabIndex = 93;
			this->label3->Text = L"Last Name :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// UpdateBtn
			// 
			this->UpdateBtn->BackColor = System::Drawing::Color::Teal;
			this->UpdateBtn->FlatAppearance->BorderSize = 0;
			this->UpdateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdateBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->UpdateBtn->ForeColor = System::Drawing::Color::White;
			this->UpdateBtn->Location = System::Drawing::Point(305, 889);
			this->UpdateBtn->Margin = System::Windows::Forms::Padding(0);
			this->UpdateBtn->Name = L"UpdateBtn";
			this->UpdateBtn->Size = System::Drawing::Size(221, 63);
			this->UpdateBtn->TabIndex = 91;
			this->UpdateBtn->Text = L"UPDATE";
			this->UpdateBtn->UseVisualStyleBackColor = false;
			this->UpdateBtn->Click += gcnew System::EventHandler(this, &DetailedStudentProfile::UpdateBtn_Click);
			// 
			// s
			// 
			this->s->Enabled = false;
			this->s->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s->Location = System::Drawing::Point(756, 565);
			this->s->Margin = System::Windows::Forms::Padding(4);
			this->s->Name = L"s";
			this->s->Size = System::Drawing::Size(224, 30);
			this->s->TabIndex = 90;
			// 
			// r
			// 
			this->r->Enabled = false;
			this->r->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r->Location = System::Drawing::Point(756, 512);
			this->r->Margin = System::Windows::Forms::Padding(4);
			this->r->Name = L"r";
			this->r->Size = System::Drawing::Size(224, 30);
			this->r->TabIndex = 89;
			// 
			// q
			// 
			this->q->Enabled = false;
			this->q->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q->Location = System::Drawing::Point(756, 459);
			this->q->Margin = System::Windows::Forms::Padding(4);
			this->q->Name = L"q";
			this->q->Size = System::Drawing::Size(224, 30);
			this->q->TabIndex = 88;
			// 
			// p
			// 
			this->p->Enabled = false;
			this->p->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->p->Location = System::Drawing::Point(756, 406);
			this->p->Margin = System::Windows::Forms::Padding(4);
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(224, 30);
			this->p->TabIndex = 87;
			// 
			// o
			// 
			this->o->Enabled = false;
			this->o->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->o->Location = System::Drawing::Point(756, 353);
			this->o->Margin = System::Windows::Forms::Padding(4);
			this->o->Name = L"o";
			this->o->Size = System::Drawing::Size(224, 30);
			this->o->TabIndex = 86;
			// 
			// n
			// 
			this->n->Enabled = false;
			this->n->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->n->Location = System::Drawing::Point(756, 300);
			this->n->Margin = System::Windows::Forms::Padding(4);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(224, 30);
			this->n->TabIndex = 85;
			// 
			// f
			// 
			this->f->Enabled = false;
			this->f->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f->Location = System::Drawing::Point(311, 508);
			this->f->Margin = System::Windows::Forms::Padding(4);
			this->f->Name = L"f";
			this->f->Size = System::Drawing::Size(224, 30);
			this->f->TabIndex = 84;
			// 
			// e
			// 
			this->e->Enabled = false;
			this->e->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->e->Location = System::Drawing::Point(311, 455);
			this->e->Margin = System::Windows::Forms::Padding(4);
			this->e->Name = L"e";
			this->e->Size = System::Drawing::Size(224, 30);
			this->e->TabIndex = 83;
			// 
			// d
			// 
			this->d->Enabled = false;
			this->d->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->d->Location = System::Drawing::Point(311, 402);
			this->d->Margin = System::Windows::Forms::Padding(4);
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(224, 30);
			this->d->TabIndex = 82;
			// 
			// c
			// 
			this->c->Enabled = false;
			this->c->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->c->Location = System::Drawing::Point(311, 350);
			this->c->Margin = System::Windows::Forms::Padding(4);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(224, 30);
			this->c->TabIndex = 81;
			// 
			// b
			// 
			this->b->Enabled = false;
			this->b->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b->Location = System::Drawing::Point(311, 297);
			this->b->Margin = System::Windows::Forms::Padding(4);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(224, 30);
			this->b->TabIndex = 80;
			// 
			// a
			// 
			this->a->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->a->Enabled = false;
			this->a->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->a->Location = System::Drawing::Point(311, 244);
			this->a->Margin = System::Windows::Forms::Padding(4);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(225, 30);
			this->a->TabIndex = 79;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(131, 405);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 22);
			this->label7->TabIndex = 78;
			this->label7->Text = L"Roll Number :";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(131, 458);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(171, 22);
			this->label6->TabIndex = 77;
			this->label6->Text = L"Secondary Email :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(131, 299);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 22);
			this->label5->TabIndex = 76;
			this->label5->Text = L"Middle Name :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(131, 246);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 22);
			this->label4->TabIndex = 75;
			this->label4->Text = L"First Name :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// openFileDialogPhoto
			// 
			this->openFileDialogPhoto->FileName = L"openFileDialogPhoto";
			// 
			// DetailedStudentProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScrollMargin = System::Drawing::Size(0, 50);
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DetailedStudentProfile";
			this->Size = System::Drawing::Size(1121, 622);
			this->Load += gcnew System::EventHandler(this, &DetailedStudentProfile::DetailedStudentProfile_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void DetailedStudentProfile_Load(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^con;	 
				 try{				
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();

					 String ^ aString = "Select * from Student where [Username] ='"+usrnm+"';";
					 //				 MessageBox::Show(aString);

					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(aString,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

					 while(readerData->Read())
					 {
						 if(!readerData->IsDBNull(1)) a->Text=readerData->GetString(1);
						 if(!readerData->IsDBNull(2)) b->Text=readerData->GetString(2);
						 if(!readerData->IsDBNull(3)) c->Text=readerData->GetString(3);
						 if(!readerData->IsDBNull(4)) d->Text=readerData->GetString(4);
						 //					 if(!readerData->IsDBNull(6)) e->Text=readerData->GetString(6);
						 if(!readerData->IsDBNull(7)) f->Text=readerData->GetString(7);
						 if(!readerData->IsDBNull(8)) g->Text=readerData->GetString(8);
						 if(!readerData->IsDBNull(9)) h->Text=readerData->GetString(9);
						 if(!readerData->IsDBNull(10)) i->Text=readerData->GetString(10);
						 if(!readerData->IsDBNull(11)) j->Text=readerData->GetString(11);
						 if(!readerData->IsDBNull(12)) k->Text=readerData->GetString(12);
						 if(!readerData->IsDBNull(17)) l->Text=readerData->GetString(17);
						 if(!readerData->IsDBNull(13)) m->Text=readerData->GetString(13);
						 if(!readerData->IsDBNull(14)) n->Text=readerData->GetString(14);
						 if(!readerData->IsDBNull(15)) o->Text=readerData->GetString(15);
						 if(!readerData->IsDBNull(16)) p->Text=readerData->GetString(16);
						 if(!readerData->IsDBNull(23)) q->Text=readerData->GetString(23);
						 if(!readerData->IsDBNull(26)) r->Text=readerData->GetString(26);
						 if(!readerData->IsDBNull(30)) s->Text=readerData->GetString(30);
						 if(!readerData->IsDBNull(44)) t->Text=readerData->GetString(44);
						 if(!readerData->IsDBNull(45)) u->Text=readerData->GetString(45);
						 if(!readerData->IsDBNull(46)) v->Text=readerData->GetString(46);
						 if(!readerData->IsDBNull(47))w->Text=readerData->GetString(47);
						 if(!readerData->IsDBNull(50))x->Text=readerData->GetString(50);
						 if(!readerData->IsDBNull(56))pictureBox1->ImageLocation=readerData->GetString(56);
					 }
					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }
			 }

	private: System::Void editBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 //			 MessageBox::Show("Hi");

				 this->e->Enabled = true;
				 this->f->Enabled = true;
				 this->i->Enabled = true;
				 this->k->Enabled = true;
				 this->m->Enabled = true;
				 this->n->Enabled = true;
				 this->o->Enabled = true;
				 this->p->Enabled = true;
				 this->r->Enabled = true;
				 this->s->Enabled = true;
				 this->t->Enabled = true;
				 this->u->Enabled = true;
				 this->v->Enabled = true;
				 this->w->Enabled = true;
				 this->x->Enabled = true;
				 
				 
				 browseBtn->Visible = true;
				 browseBtn->Top = pictureBox1->Top + 92;
				 browseBtn->Left = pictureBox1->Right; 
				 //browseBtn->Location = System::Drawing::Point(135, 102);

				 this->editBtn->Hide();
				 this->UpdateBtn->Show();

				 this->backBtn->Hide();
				 this->cancelBtn->Show();


			 }
	private: System::Void UpdateBtn_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(Validator()){
					 OleDb::OleDbConnection ^con;	 

					 try{				
						 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

						 con=gcnew OleDb::OleDbConnection(connString);
						 con->Open();

						 if (File::Exists("Resources\\"+this->usrnm+".jpg"))
						 	 File::Exists("Resources\\"+this->usrnm+".jpg");
						 File::Copy(txtPhoto->Text, "Resources\\"+this->usrnm+".jpg");
						 String ^ aString = "Update [Student] set [SecondaryEmail]='" + this->e->Text->Trim() + "',[PhoneNo]='" + this->f->Text->Trim() + "',[PassportSizePhotograph]='"+"Resources\\"+this->usrnm+".jpg"+"',[Nationality]='" + this->i->Text->Trim() + "',[Hostel]='" + this->m->Text->Trim() + "',[RoomNo]='" + this->n->Text->Trim() + "',[Address]='" + this->o->Text->Trim() + "',[Pincode]='" + this->p->Text->Trim() + "',[FatherName]='" + this->r->Text->Trim() + "',[MotherName]='" + this->s->Text->Trim() + "',[BloodGroup]='" + this->t->Text->Trim() + "',[Height]='" + this->u->Text->Trim() + "',[Weight]='" + this->v->Text->Trim() + "',[AadhaarNumber]='" + this->w->Text->Trim() + "',[PassportNumber]='" + this->x->Text->Trim() + "'where [Username]= '" + usrnm + "' ";
						 //				    MessageBox::Show(aString);

						 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(aString,con);
						 cmd->ExecuteNonQuery();

						 
						 con->Close();
						 MessageBox::Show("Info updated Successfully!");
					 }

					 catch(Exception ^ ex){
						 MessageBox::Show(ex->Message);
						 con->Close();
					 }

					 this->e->Enabled = false;
					 this->f->Enabled = false;
					 this->i->Enabled = false;
					 this->k->Enabled = false;
					 this->m->Enabled = false;
					 this->n->Enabled = false;
					 this->o->Enabled = false;
					 this->p->Enabled = false;
					 this->r->Enabled = false;
					 this->s->Enabled = false;
					 this->t->Enabled = false;
					 this->u->Enabled = false;
					 this->v->Enabled = false;
					 this->w->Enabled = false;
					 this->x->Enabled = false;
					 browseBtn->Visible = false;

					 this->UpdateBtn->Hide();
					 this->editBtn->Show();

					 this->cancelBtn->Hide();
					 this->backBtn->Show();
				 }

			 }

	private: System::Void cancelBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->e->Enabled = false;
				 this->f->Enabled = false;
				 this->i->Enabled = false;
				 this->k->Enabled = false;
				 this->m->Enabled = false;
				 this->n->Enabled = false;
				 this->o->Enabled = false;
				 this->p->Enabled = false;
				 this->r->Enabled = false;
				 this->s->Enabled = false;
				 this->t->Enabled = false;
				 this->u->Enabled = false;
				 this->v->Enabled = false;
				 this->w->Enabled = false;
				 this->x->Enabled = false;
				 browseBtn->Visible = false;

				 this->UpdateBtn->Hide();
				 this->editBtn->Show();

				 this->cancelBtn->Hide();
				 this->backBtn->Show();
			 }
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 parent->Controls->Clear();
				 parent->Controls->Add(previous);
			 }


			 bool Validator(){

				 if(!MobileValidator(f->Text->Trim())) return false;
				 if(!GenderValidator(k->Text->Trim())) return false;
				 return true;
			 }

			 bool MobileValidator(String^ mobile){
				 int i=0;

				 if(mobile->Length!=10){
					 MessageBox::Show("Too many/less digits in phone no.!!");
					 return false;
				 }

				 while(i<10 && mobile[i]=='0') i++;
				 if(i>1){
					 MessageBox::Show("Too many zeroes in phone no.!!");
					 return false;
				 }

				 for (i=0;i<10;i++){
					 if(mobile[i] < '0' || mobile[i] > '9'){
						 MessageBox::Show("Check digits of phone no.!!");
						 return false;
					 }
				 }

				 return true;
			 }

			 bool GenderValidator(String^ Gender){

				 String ^ gender = Gender->ToLower();
				 if(!(gender == "male" || gender == "female" || gender == "others")){
					 MessageBox::Show("Enter Valid Gender.Choose from male, female or others!!");
					 return false;
				 }

				 return true;
			 }
	
private: System::Void browseBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		    // open file dialog   
		    //OpenFileDialog *open = new OpenFileDialog();
		    // image filters  
		    //open->Filter = L"Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
		    if (openFileDialogPhoto->ShowDialog() == DialogResult::OK)
		    {
			    // display image in picture box  
			    pictureBox1->Image = gcnew Bitmap(openFileDialogPhoto->FileName);
			    // image file path  
			    txtPhoto->Text = openFileDialogPhoto->FileName;

		    }
		    if (!Directory::Exists("Resources"))
		    {
			    Directory::CreateDirectory("Resources");
		    }

	    }
};
}
