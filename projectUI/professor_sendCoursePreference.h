#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for professor_sendCoursePreference
	/// </summary>
	public ref class professor_sendCoursePreference : public System::Windows::Forms::UserControl
	{
	public:
		String^ usrnm;
	public:
		professor_sendCoursePreference(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		professor_sendCoursePreference(String ^text)
		{
			InitializeComponent();
			usrnm=text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~professor_sendCoursePreference()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblSubmitPre;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  lblPreference1;
	private: System::Windows::Forms::Label^  lblPreference3;
	private: System::Windows::Forms::Label^  lblPreference2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Button^  btnSubmit;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblSubmitPost;

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
			this->lblSubmitPre = (gcnew System::Windows::Forms::Label());
			this->lblPreference1 = (gcnew System::Windows::Forms::Label());
			this->lblPreference3 = (gcnew System::Windows::Forms::Label());
			this->lblPreference2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblSubmitPost = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblSubmitPre
			// 
			this->lblSubmitPre->AutoSize = true;
			this->lblSubmitPre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblSubmitPre->Location = System::Drawing::Point(115, 56);
			this->lblSubmitPre->Name = L"lblSubmitPre";
			this->lblSubmitPre->Size = System::Drawing::Size(534, 28);
			this->lblSubmitPre->TabIndex = 0;
			this->lblSubmitPre->Text = L"Submit your Premid-sem Course Preferences:";
			// 
			// lblPreference1
			// 
			this->lblPreference1->AutoSize = true;
			this->lblPreference1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPreference1->ForeColor = System::Drawing::Color::Teal;
			this->lblPreference1->Location = System::Drawing::Point(170, 121);
			this->lblPreference1->Name = L"lblPreference1";
			this->lblPreference1->Size = System::Drawing::Size(134, 23);
			this->lblPreference1->TabIndex = 1;
			this->lblPreference1->Text = L"Preference 1";
			// 
			// lblPreference3
			// 
			this->lblPreference3->AutoSize = true;
			this->lblPreference3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPreference3->ForeColor = System::Drawing::Color::Teal;
			this->lblPreference3->Location = System::Drawing::Point(170, 231);
			this->lblPreference3->Name = L"lblPreference3";
			this->lblPreference3->Size = System::Drawing::Size(134, 23);
			this->lblPreference3->TabIndex = 2;
			this->lblPreference3->Text = L"Preference 3";
			// 
			// lblPreference2
			// 
			this->lblPreference2->AutoSize = true;
			this->lblPreference2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPreference2->ForeColor = System::Drawing::Color::Teal;
			this->lblPreference2->Location = System::Drawing::Point(171, 176);
			this->lblPreference2->Name = L"lblPreference2";
			this->lblPreference2->Size = System::Drawing::Size(134, 23);
			this->lblPreference2->TabIndex = 3;
			this->lblPreference2->Text = L"Preference 2";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(436, 118);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 31);
			this->comboBox1->TabIndex = 4;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(436, 173);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 31);
			this->comboBox2->TabIndex = 5;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(436, 228);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 31);
			this->comboBox3->TabIndex = 6;
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::Teal;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSubmit->ForeColor = System::Drawing::Color::White;
			this->btnSubmit->Location = System::Drawing::Point(306, 519);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(126, 47);
			this->btnSubmit->TabIndex = 7;
			this->btnSubmit->Text = L"SUBMIT";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &professor_sendCoursePreference::btnSubmit_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(436, 463);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 31);
			this->comboBox4->TabIndex = 14;
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(436, 408);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 31);
			this->comboBox5->TabIndex = 13;
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(436, 353);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 31);
			this->comboBox6->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Teal;
			this->label1->Location = System::Drawing::Point(171, 411);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 23);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Preference 2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Teal;
			this->label2->Location = System::Drawing::Point(170, 466);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 23);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Preference 3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Teal;
			this->label3->Location = System::Drawing::Point(170, 356);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Preference 1";
			// 
			// lblSubmitPost
			// 
			this->lblSubmitPost->AutoSize = true;
			this->lblSubmitPost->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblSubmitPost->Location = System::Drawing::Point(115, 291);
			this->lblSubmitPost->Name = L"lblSubmitPost";
			this->lblSubmitPost->Size = System::Drawing::Size(544, 28);
			this->lblSubmitPost->TabIndex = 8;
			this->lblSubmitPost->Text = L"Submit your Postmid-sem Course Preferences:";
			// 
			// professor_sendCoursePreference
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblSubmitPost);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lblPreference2);
			this->Controls->Add(this->lblPreference3);
			this->Controls->Add(this->lblPreference1);
			this->Controls->Add(this->lblSubmitPre);
			this->Name = L"professor_sendCoursePreference";
			this->Size = System::Drawing::Size(755, 616);
			this->Load += gcnew System::EventHandler(this, &professor_sendCoursePreference::professor_sendCoursePreference_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void professor_sendCoursePreference_Load(System::Object^  sender, System::EventArgs^  e) {
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
						 comboBox1->Items->Add(readerData->GetString(0));
						 comboBox2->Items->Add(readerData->GetString(0));
						 comboBox3->Items->Add(readerData->GetString(0));
						 comboBox4->Items->Add(readerData->GetString(0));
						 comboBox5->Items->Add(readerData->GetString(0));
						 comboBox6->Items->Add(readerData->GetString(0));
					 }
					 con->Close();
					 

				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }
			 }
private: System::Void btnSubmit_Click(System::Object^  sender, System::EventArgs^  e) {
			 OleDb::OleDbConnection ^con;
			 try
			 {
				 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

				 con=gcnew OleDb::OleDbConnection(connString);
				 con->Open();
				 String^ com="select distinct [CourseID] from CourseList;";
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
};
}
