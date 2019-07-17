#pragma once

#include "additional_details.h"

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
	/// Summary for Student_details
	/// </summary>
	public ref class Student_details : public System::Windows::Forms::Form
	{
	public:
		String ^ username ; 
		Student_details(String^ temp)
		{
			InitializeComponent();
			username = temp ;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Student_details()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  birth_cat;
	private: System::Windows::Forms::Label^  gender;
	private: System::Windows::Forms::Label^  hostel;









	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Label^  roll;
	private: System::Windows::Forms::Label^  webmail;






	private: System::Windows::Forms::Label^  dept;
	private: System::Windows::Forms::Label^  nationality;
































	private: System::Windows::Forms::PictureBox^  profile_pic;
	private: System::Windows::Forms::Label^  prog;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btn_view_more;




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
			this->prog = (gcnew System::Windows::Forms::Label());
			this->birth_cat = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::Label());
			this->hostel = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->roll = (gcnew System::Windows::Forms::Label());
			this->webmail = (gcnew System::Windows::Forms::Label());
			this->dept = (gcnew System::Windows::Forms::Label());
			this->nationality = (gcnew System::Windows::Forms::Label());
			this->profile_pic = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_view_more = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->profile_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->prog);
			this->panel1->Controls->Add(this->birth_cat);
			this->panel1->Controls->Add(this->gender);
			this->panel1->Controls->Add(this->hostel);
			this->panel1->Controls->Add(this->name);
			this->panel1->Controls->Add(this->roll);
			this->panel1->Controls->Add(this->webmail);
			this->panel1->Controls->Add(this->dept);
			this->panel1->Controls->Add(this->nationality);
			this->panel1->Location = System::Drawing::Point(445, 86);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 291);
			this->panel1->TabIndex = 3;
			// 
			// prog
			// 
			this->prog->AutoSize = true;
			this->prog->Location = System::Drawing::Point(25, 105);
			this->prog->Name = L"prog";
			this->prog->Size = System::Drawing::Size(69, 13);
			this->prog->TabIndex = 31;
			this->prog->Text = L"Programme : ";
			// 
			// birth_cat
			// 
			this->birth_cat->AutoSize = true;
			this->birth_cat->Location = System::Drawing::Point(25, 193);
			this->birth_cat->Name = L"birth_cat";
			this->birth_cat->Size = System::Drawing::Size(82, 13);
			this->birth_cat->TabIndex = 12;
			this->birth_cat->Text = L"Birth Category : ";
			// 
			// gender
			// 
			this->gender->AutoSize = true;
			this->gender->Location = System::Drawing::Point(25, 223);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(51, 13);
			this->gender->TabIndex = 10;
			this->gender->Text = L"Gender : ";
			// 
			// hostel
			// 
			this->hostel->AutoSize = true;
			this->hostel->Location = System::Drawing::Point(25, 251);
			this->hostel->Name = L"hostel";
			this->hostel->Size = System::Drawing::Size(46, 13);
			this->hostel->TabIndex = 9;
			this->hostel->Text = L"Hostel : ";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(25, 21);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(44, 13);
			this->name->TabIndex = 7;
			this->name->Text = L"Name : ";
			// 
			// roll
			// 
			this->roll->AutoSize = true;
			this->roll->Location = System::Drawing::Point(25, 48);
			this->roll->Name = L"roll";
			this->roll->Size = System::Drawing::Size(74, 13);
			this->roll->TabIndex = 4;
			this->roll->Text = L"Roll Number : ";
			// 
			// webmail
			// 
			this->webmail->AutoSize = true;
			this->webmail->Location = System::Drawing::Point(25, 135);
			this->webmail->Name = L"webmail";
			this->webmail->Size = System::Drawing::Size(57, 13);
			this->webmail->TabIndex = 3;
			this->webmail->Text = L"Webmail : ";
			// 
			// dept
			// 
			this->dept->AutoSize = true;
			this->dept->Location = System::Drawing::Point(25, 76);
			this->dept->Name = L"dept";
			this->dept->Size = System::Drawing::Size(71, 13);
			this->dept->TabIndex = 2;
			this->dept->Text = L"Department : ";
			// 
			// nationality
			// 
			this->nationality->AutoSize = true;
			this->nationality->Location = System::Drawing::Point(25, 165);
			this->nationality->Name = L"nationality";
			this->nationality->Size = System::Drawing::Size(65, 13);
			this->nationality->TabIndex = 1;
			this->nationality->Text = L"Nationality : ";
			// 
			// profile_pic
			// 
			this->profile_pic->Location = System::Drawing::Point(62, 86);
			this->profile_pic->Name = L"profile_pic";
			this->profile_pic->Size = System::Drawing::Size(226, 182);
			this->profile_pic->TabIndex = 4;
			this->profile_pic->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(59, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"BASIC INFORMATION";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 422);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(341, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"* If the above details are not correct please contact Academic Section.";
			// 
			// btn_view_more
			// 
			this->btn_view_more->Location = System::Drawing::Point(660, 383);
			this->btn_view_more->Name = L"btn_view_more";
			this->btn_view_more->Size = System::Drawing::Size(75, 23);
			this->btn_view_more->TabIndex = 7;
			this->btn_view_more->Text = L"View More >";
			this->btn_view_more->UseVisualStyleBackColor = true;
			this->btn_view_more->Click += gcnew System::EventHandler(this, &Student_details::btn_view_more_Click);
			// 
			// Student_details
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 461);
			this->Controls->Add(this->btn_view_more);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->profile_pic);
			this->Controls->Add(this->panel1);
			this->Name = L"Student_details";
			this->Text = L"Student_details";
			this->Load += gcnew System::EventHandler(this, &Student_details::Student_details_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->profile_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Student_details_Load(System::Object^  sender, System::EventArgs^  e) {
				 try{

					 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 DB_Connection->Open();
					 String ^ selectString = "SELECT * FROM Student WHERE Username = "+"'"+this->username+"'" ;
					 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);

					 OleDbDataReader ^ reader = cmd->ExecuteReader();


					 reader->Read();
					 if(reader->GetValue(2)!="")
						 name->Text += reader->GetValue(1) + " " + reader->GetValue(2) + " " + reader->GetValue(3) ;
					 else
						 name->Text += reader->GetValue(1) + " " + reader->GetValue(3) ;		
					 roll->Text += reader->GetValue(4);
					 //Department Name field should be added
					 dept->Text += reader->GetValue(8);
					 webmail->Text += reader->GetValue(0) + "@iitg.ac.in";
					 prog->Text += reader->GetValue(9);
					 nationality->Text +=reader->GetValue(10);

					 //	MessageBox::Show(reader->GetValue(10).ToString());
					 birth_cat->Text += reader->GetValue(11);
					 gender->Text += reader->GetValue(12);
					 hostel->Text += reader->GetValue(13);
					 //Remove after testing (start)
					 if(reader->NextResult())
					 {
						 MessageBox::Show("Unhandled Case!!!");
					 }
					 //Remove after testing (end)
					 DB_Connection->Close();

				 }

				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }
	private: System::Void btn_view_more_Click(System::Object^  sender, System::EventArgs^  e) {
				 projectUI::additional_details ^ form_additional_details = gcnew projectUI::additional_details(username) ;
				 form_additional_details->Show() ;
			 }
	};
}
