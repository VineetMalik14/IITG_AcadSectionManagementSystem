#pragma once

namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Exam_TT__
	/// </summary>
	public ref class Exam_TT__ : public System::Windows::Forms::Form
	{
	public:
		Exam_TT__(void)
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
		~Exam_TT__()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;


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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(235, 16);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Exam_TT__::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Select Course ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(62, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Room :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(118, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(232, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 15);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Slot :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(276, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 15);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// Exam_TT__
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(442, 128);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Exam_TT__";
			this->Text = L"Exam_TT__";
			this->Load += gcnew System::EventHandler(this, &Exam_TT__::Exam_TT___Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Exam_TT___Load(System::Object^  sender, System::EventArgs^  e) {
			 label3->Text = "" ;
			 label5->Text = "" ;
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
				 }
				 con->Close();
			 }
			 catch(Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
				 con->Close();
			 }
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ _sel_ = comboBox1->Text ;
			 if(_sel_ != ""){
				 OleDb::OleDbConnection ^con;
				 try
				 {
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();
					 String^ com="select distinct [RoomID],[DaySlot] from ExamTT where [Slot1]='"+_sel_+"' or [Slot2]='"+_sel_+"' or [Slot3]='"+_sel_+"' or [Slot4]='"+_sel_+"';";
					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
					 while (readerData->Read())
					 {
						 label3->Text = readerData->GetString(0) ;
						 label5->Text = readerData->GetString(1) ;
					 }
					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }
			 }
		 }
};
}
