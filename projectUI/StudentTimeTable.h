#pragma once

#include <cstring>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;


namespace projectUI {

	/// <summary>
	/// Summary for StudentTimeTable
	/// </summary>
	public ref class StudentTimeTable : public System::Windows::Forms::UserControl
	{
	public:

	String ^ usrnm;
	String ^ roll_no;
	OleDb::OleDbConnection ^con; 

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	public: 
		String^ connString;

		StudentTimeTable(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		StudentTimeTable(String ^ text)
		{
			InitializeComponent();

			usrnm = text;
			roll_no = "";
			connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
			con=gcnew OleDb::OleDbConnection(connString);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentTimeTable()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridViewTT;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentTimeTable::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewTT = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewTT))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(13, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(794, 225);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(311, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Weekly Time Table";
			// 
			// dataGridViewTT
			// 
			this->dataGridViewTT->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewTT->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewTT->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewTT->GridColor = System::Drawing::Color::DimGray;
			this->dataGridViewTT->Location = System::Drawing::Point(13, 363);
			this->dataGridViewTT->Name = L"dataGridViewTT";
			this->dataGridViewTT->ReadOnly = true;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dataGridViewTT->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewTT->Size = System::Drawing::Size(783, 210);
			this->dataGridViewTT->TabIndex = 2;
			this->dataGridViewTT->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentTimeTable::dataGridViewTT_CellContentClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(354, 278);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(167, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 303);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(167, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(122, 329);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(167, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(615, 303);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(167, 20);
			this->textBox4->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(615, 329);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(167, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &StudentTimeTable::textBox5_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(275, 285);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"CourseID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 310);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Slot";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Room No.";
			this->label4->Click += gcnew System::EventHandler(this, &StudentTimeTable::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(450, 310);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Prof. Assigned Pre Midsem";
			this->label5->Click += gcnew System::EventHandler(this, &StudentTimeTable::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(450, 336);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Prof. Assigned Post Midsem";
			// 
			// StudentTimeTable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::White;
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridViewTT);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"StudentTimeTable";
			this->Size = System::Drawing::Size(830, 503);
			this->Load += gcnew System::EventHandler(this, &StudentTimeTable::StudentTimeTable_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewTT))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentTimeTable_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {    

					 con->Open();

					 String ^ aString = "Select RollNumber from Student where [Username] ='"+usrnm+"'";


					 OleDb::OleDbCommand ^ cmd = gcnew OleDb::OleDbCommand(aString, con);
					 OleDb::OleDbDataReader ^ readerData = cmd->ExecuteReader();

					 while(readerData->Read() == true){
						 roll_no = readerData->GetString(0);

					 }
					 readerData->Close();

					 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

					 String ^ comTT = "SELECT CoursesTT.CourseID, CoursesTT.SlotAssigned, CoursesTT.RoomAssigned, CoursesTT.ProfAssignedPreMidsem, CoursesTT.ProfAssignedPostMidsem FROM CoursesTT WHERE (((CoursesTT.OfferedTo) LIKE \"%" + roll_no->Substring(0,6) + "%\"))";

					 OleDb::OleDbCommand ^ cmdTT = gcnew OleDb::OleDbCommand(comTT, con);
					 OleDb::OleDbDataAdapter ^ adapterTT = gcnew OleDb::OleDbDataAdapter();
					 adapterTT->SelectCommand = cmdTT;
					 DataTable ^ dataTT = gcnew DataTable;
					 adapterTT->Fill(dataTT);


					 readerData = cmdTT->ExecuteReader();

					 if(readerData->Read() == true){

						 BindingSource ^ bsource = gcnew BindingSource();
						 bsource->DataSource=dataTT;
						 dataGridViewTT->DataSource=bsource;
						 adapterTT->Update(dataTT);

					 }
					 readerData->Close();

					 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 con->Close();
					 MessageBox::Show(ex->Message);
				 }


			 }

	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void dataGridViewTT_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

				 OleDb::OleDbConnection ^con;	
				 String^ connString;
				 connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
				 con=gcnew OleDb::OleDbConnection(connString);


				 if (e->RowIndex>=0)
				 {
					 DataGridViewRow^ row = this->dataGridViewTT->Rows[e->RowIndex];
					 textBox1->Text=row->Cells["CourseID"]->Value->ToString();
					 textBox2->Text=row->Cells["SlotAssigned"]->Value->ToString();
					 textBox3->Text=row->Cells["RoomAssigned"]->Value->ToString();


					 String ^ prof1Name = "";
					 String ^ prof2Name = "";


					 try{
						 con->Open();
						 String ^ bString = "Select * from Professor where [Username] ='"+row->Cells["ProfAssignedPreMidsem"]->Value->ToString()+"'";

						 OleDb::OleDbCommand ^ cmd1 = gcnew OleDb::OleDbCommand(bString, con);
						 OleDb::OleDbDataReader ^ reader = cmd1->ExecuteReader();

						 int found=0;

						 if(reader->Read() == true){
							 String ^firstnm;
							 String ^middlenm;
							 String ^lastnm;

							 if (!reader->IsDBNull(1)) firstnm=reader->GetString(1);
							 else	firstnm="";

							 if (!reader->IsDBNull(2)) middlenm=reader->GetString(2);
							 else	middlenm="";

							 if (!reader->IsDBNull(3)) lastnm=reader->GetString(3);
							 else	lastnm = "";

							 prof1Name = firstnm+" "+middlenm+" "+lastnm;
						 }
						 reader->Close();

					 }
					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message);
						 con->Close();
					 }

					 con->Close();

					 try{
						 con->Open();

						 String ^ bString = "Select * from Professor where [Username] ='"+row->Cells["ProfAssignedPostMidsem"]->Value->ToString()+"'";

						 OleDb::OleDbCommand ^ cmd1 = gcnew OleDb::OleDbCommand(bString, con);
						 OleDb::OleDbDataReader ^ reader = cmd1->ExecuteReader();

						 int found=0;

						 if(reader->Read() == true){
							 String ^firstnm;
							 String ^middlenm;
							 String ^lastnm;

							 if (!reader->IsDBNull(1)) firstnm=reader->GetString(1);
							 else	firstnm="";

							 if (!reader->IsDBNull(2)) middlenm=reader->GetString(2);
							 else	middlenm="";

							 if (!reader->IsDBNull(3)) lastnm=reader->GetString(3);
							 else	lastnm = "";

							 prof2Name = firstnm+" "+middlenm+" "+lastnm;
						 }
						 reader->Close();
					 }
					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message);
						 con->Close();
					 }

					 con->Close();

					 textBox4->Text=prof1Name;
					 textBox5->Text=prof2Name;
				 }
			 }
	};
}
