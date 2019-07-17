#pragma once

#using <System.dll>
#using <System.data.dll>
//#include "Notifications.h"
//#include "ProfAssignment.cpp"
#include "TTfunctions.h"
namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for HOD
	/// </summary>
	public ref class HOD : public System::Windows::Forms::Form
	{
		String ^ Dept_ID;
		bool skip_textbox_changed ;
		String^ curr ;

		String^ username ;
		String^ sess ;
	private: System::Windows::Forms::Button^  btn_check_prof_assgn;
	private: System::Windows::Forms::Button^  btn_save_dg;
			 String^ sem ;
	private: System::Windows::Forms::Button^  logout_btn;
	public:
			 Form^ prev ;
		HOD(String ^ temp, Form^ prev_)
		{
			InitializeComponent();
			skip_textbox_changed = false ;
			//
			//TODO: Add the constructor code here
			//
			curr = "Edit" ;
			username = temp ;
			sess = "2018-19" ;
			sem = "Spring" ;
			Dept_ID="";
			prev = prev_ ;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HOD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_ntf;
	protected: 
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::CheckBox^  other_receivers;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  Dept;

	private: System::Windows::Forms::Button^  btn_send;

	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Panel^  panel_next_sem_courses;







	private: System::Windows::Forms::TextBox^  tb_link;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  cb_course_id;

	private: System::Windows::Forms::TextBox^  tb_credit;
	private: System::Windows::Forms::TextBox^  tb_course_name;
	private: System::Windows::Forms::TextBox^  tb_course_id;
	private: System::Windows::Forms::Button^  btn_add;
	private: System::Windows::Forms::Button^  btn_edit;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  cb_course_type;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  btn_save;



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
			this->btn_ntf = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_send = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->other_receivers = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Dept = (gcnew System::Windows::Forms::CheckBox());
			this->panel_next_sem_courses = (gcnew System::Windows::Forms::Panel());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->cb_course_type = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tb_link = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cb_course_id = (gcnew System::Windows::Forms::ComboBox());
			this->tb_credit = (gcnew System::Windows::Forms::TextBox());
			this->tb_course_name = (gcnew System::Windows::Forms::TextBox());
			this->tb_course_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_edit = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_check_prof_assgn = (gcnew System::Windows::Forms::Button());
			this->btn_save_dg = (gcnew System::Windows::Forms::Button());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel_next_sem_courses->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_ntf
			// 
			this->btn_ntf->Location = System::Drawing::Point(478, 12);
			this->btn_ntf->Name = L"btn_ntf";
			this->btn_ntf->Size = System::Drawing::Size(75, 23);
			this->btn_ntf->TabIndex = 0;
			this->btn_ntf->Text = L"Notifications";
			this->btn_ntf->UseVisualStyleBackColor = true;
			this->btn_ntf->Visible = false;
			this->btn_ntf->Click += gcnew System::EventHandler(this, &HOD::btn_ntf_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_send);
			this->panel1->Controls->Add(this->richTextBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->other_receivers);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->checkedListBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->Dept);
			this->panel1->Location = System::Drawing::Point(12, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(454, 428);
			this->panel1->TabIndex = 1;
			this->panel1->Visible = false;
			// 
			// btn_send
			// 
			this->btn_send->Location = System::Drawing::Point(318, 349);
			this->btn_send->Name = L"btn_send";
			this->btn_send->Size = System::Drawing::Size(81, 23);
			this->btn_send->TabIndex = 12;
			this->btn_send->Text = L"Send >";
			this->btn_send->UseVisualStyleBackColor = true;
			this->btn_send->Click += gcnew System::EventHandler(this, &HOD::btn_send_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(41, 252);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(358, 83);
			this->richTextBox2->TabIndex = 10;
			this->richTextBox2->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Message :";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(187, 186);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(212, 54);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			this->richTextBox1->GotFocus += gcnew System::EventHandler(this, &HOD::richTextBox1_GotFocus);
			// 
			// other_receivers
			// 
			this->other_receivers->AutoSize = true;
			this->other_receivers->Location = System::Drawing::Point(41, 186);
			this->other_receivers->Name = L"other_receivers";
			this->other_receivers->Size = System::Drawing::Size(103, 17);
			this->other_receivers->TabIndex = 5;
			this->other_receivers->Text = L"Other Receivers";
			this->other_receivers->UseVisualStyleBackColor = true;
			this->other_receivers->CheckedChanged += gcnew System::EventHandler(this, &HOD::other_receivers_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Year : ";
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(187, 109);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(121, 64);
			this->checkedListBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Programme : ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"BTech", L"MTech", L"PhD"});
			this->comboBox1->Location = System::Drawing::Point(187, 55);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &HOD::comboBox1_SelectedIndexChanged);
			// 
			// Dept
			// 
			this->Dept->AutoSize = true;
			this->Dept->Location = System::Drawing::Point(41, 15);
			this->Dept->Name = L"Dept";
			this->Dept->Size = System::Drawing::Size(81, 17);
			this->Dept->TabIndex = 0;
			this->Dept->Text = L"Department";
			this->Dept->UseVisualStyleBackColor = true;
			this->Dept->CheckedChanged += gcnew System::EventHandler(this, &HOD::Dept_CheckedChanged);
			// 
			// panel_next_sem_courses
			// 
			this->panel_next_sem_courses->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel_next_sem_courses->Controls->Add(this->btn_save);
			this->panel_next_sem_courses->Controls->Add(this->cb_course_type);
			this->panel_next_sem_courses->Controls->Add(this->label9);
			this->panel_next_sem_courses->Controls->Add(this->tb_link);
			this->panel_next_sem_courses->Controls->Add(this->label8);
			this->panel_next_sem_courses->Controls->Add(this->cb_course_id);
			this->panel_next_sem_courses->Controls->Add(this->tb_credit);
			this->panel_next_sem_courses->Controls->Add(this->tb_course_name);
			this->panel_next_sem_courses->Controls->Add(this->tb_course_id);
			this->panel_next_sem_courses->Controls->Add(this->btn_add);
			this->panel_next_sem_courses->Controls->Add(this->btn_edit);
			this->panel_next_sem_courses->Controls->Add(this->label7);
			this->panel_next_sem_courses->Controls->Add(this->label6);
			this->panel_next_sem_courses->Controls->Add(this->label5);
			this->panel_next_sem_courses->Location = System::Drawing::Point(859, 55);
			this->panel_next_sem_courses->Name = L"panel_next_sem_courses";
			this->panel_next_sem_courses->Size = System::Drawing::Size(369, 321);
			this->panel_next_sem_courses->TabIndex = 3;
			// 
			// btn_save
			// 
			this->btn_save->Location = System::Drawing::Point(255, 283);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(75, 23);
			this->btn_save->TabIndex = 13;
			this->btn_save->Text = L"Save";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &HOD::btn_save_Click);
			// 
			// cb_course_type
			// 
			this->cb_course_type->FormattingEnabled = true;
			this->cb_course_type->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Compulsory", L"Elective", L"Minor"});
			this->cb_course_type->Location = System::Drawing::Point(182, 236);
			this->cb_course_type->Name = L"cb_course_type";
			this->cb_course_type->Size = System::Drawing::Size(148, 21);
			this->cb_course_type->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 239);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Course Type";
			// 
			// tb_link
			// 
			this->tb_link->Location = System::Drawing::Point(182, 197);
			this->tb_link->Name = L"tb_link";
			this->tb_link->Size = System::Drawing::Size(148, 20);
			this->tb_link->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(25, 197);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Course Link";
			// 
			// cb_course_id
			// 
			this->cb_course_id->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cb_course_id->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cb_course_id->FormattingEnabled = true;
			this->cb_course_id->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"CS201", L"CS202", L"CS203", L"CS204", L"CS222", 
				L"CS242"});
			this->cb_course_id->Location = System::Drawing::Point(182, 72);
			this->cb_course_id->Name = L"cb_course_id";
			this->cb_course_id->Size = System::Drawing::Size(148, 21);
			this->cb_course_id->TabIndex = 8;
			this->cb_course_id->SelectedIndexChanged += gcnew System::EventHandler(this, &HOD::cb_course_id_SelectedIndexChanged);
			// 
			// tb_credit
			// 
			this->tb_credit->Location = System::Drawing::Point(182, 154);
			this->tb_credit->Name = L"tb_credit";
			this->tb_credit->Size = System::Drawing::Size(148, 20);
			this->tb_credit->TabIndex = 7;
			// 
			// tb_course_name
			// 
			this->tb_course_name->Location = System::Drawing::Point(182, 112);
			this->tb_course_name->Name = L"tb_course_name";
			this->tb_course_name->Size = System::Drawing::Size(148, 20);
			this->tb_course_name->TabIndex = 6;
			this->tb_course_name->TextChanged += gcnew System::EventHandler(this, &HOD::tb_course_name_TextChanged);
			// 
			// tb_course_id
			// 
			this->tb_course_id->Location = System::Drawing::Point(182, 73);
			this->tb_course_id->Name = L"tb_course_id";
			this->tb_course_id->Size = System::Drawing::Size(148, 20);
			this->tb_course_id->TabIndex = 5;
			this->tb_course_id->Visible = false;
			// 
			// btn_add
			// 
			this->btn_add->Location = System::Drawing::Point(182, 0);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(187, 37);
			this->btn_add->TabIndex = 4;
			this->btn_add->Text = L"Add";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &HOD::btn_add_Click);
			// 
			// btn_edit
			// 
			this->btn_edit->Location = System::Drawing::Point(0, 0);
			this->btn_edit->Name = L"btn_edit";
			this->btn_edit->Size = System::Drawing::Size(184, 37);
			this->btn_edit->TabIndex = 3;
			this->btn_edit->Text = L"Edit";
			this->btn_edit->UseVisualStyleBackColor = true;
			this->btn_edit->Click += gcnew System::EventHandler(this, &HOD::btn_edit_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 115);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Course Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 157);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Credits";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Course ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(856, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Next Semester Courses";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(97, 472);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(963, 186);
			this->dataGridView1->TabIndex = 5;
			// 
			// btn_check_prof_assgn
			// 
			this->btn_check_prof_assgn->Location = System::Drawing::Point(606, 136);
			this->btn_check_prof_assgn->Name = L"btn_check_prof_assgn";
			this->btn_check_prof_assgn->Size = System::Drawing::Size(182, 23);
			this->btn_check_prof_assgn->TabIndex = 6;
			this->btn_check_prof_assgn->Text = L"Check Prof Assignment";
			this->btn_check_prof_assgn->UseVisualStyleBackColor = true;
			this->btn_check_prof_assgn->Click += gcnew System::EventHandler(this, &HOD::btn_check_prof_assgn_Click);
			// 
			// btn_save_dg
			// 
			this->btn_save_dg->Location = System::Drawing::Point(985, 685);
			this->btn_save_dg->Name = L"btn_save_dg";
			this->btn_save_dg->Size = System::Drawing::Size(75, 23);
			this->btn_save_dg->TabIndex = 7;
			this->btn_save_dg->Text = L"Save";
			this->btn_save_dg->UseVisualStyleBackColor = true;
			this->btn_save_dg->Click += gcnew System::EventHandler(this, &HOD::btn_save_dg_Click);
			// 
			// logout_btn
			// 
			this->logout_btn->Location = System::Drawing::Point(713, 12);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(75, 23);
			this->logout_btn->TabIndex = 11;
			this->logout_btn->Text = L"Logout";
			this->logout_btn->UseVisualStyleBackColor = true;
			this->logout_btn->Click += gcnew System::EventHandler(this, &HOD::logout_btn_Click);
			// 
			// HOD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1243, 749);
			this->Controls->Add(this->logout_btn);
			this->Controls->Add(this->btn_save_dg);
			this->Controls->Add(this->btn_check_prof_assgn);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel_next_sem_courses);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_ntf);
			this->Name = L"HOD";
			this->Text = L"HOD";
			this->Load += gcnew System::EventHandler(this, &HOD::HOD_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel_next_sem_courses->ResumeLayout(false);
			this->panel_next_sem_courses->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tb_course_name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(skip_textbox_changed){
					 skip_textbox_changed = false ;
					 return ;
				 }
				 if(cb_course_id->SelectedIndex == -1 && curr=="Edit"){
					 skip_textbox_changed = true ;
					 tb_course_name->Text = "" ;
					 MessageBox::Show("Select Course ID first!") ;

					 return ;
				 }
				 if(tb_course_id->Text=="" && curr=="Add"){
					 skip_textbox_changed = true ;
					 MessageBox::Show("Fill Course ID first!") ;

					 return ;
				 }



			 }
	private: System::Void HOD_Load(System::Object^  sender, System::EventArgs^  e) {

				 checkedListBox2->Enabled = false ;
				 checkedListBox2->Visible=false;
				 label3->Visible=false;
				 richTextBox1->Enabled = false ;

				 try{

					 cb_course_id->Items->Clear();

					 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 DB_Connection->Open();
					 String^ selectString = "Select * from Departments Where Username='"+username+"' and Designation='HoD' and [Session]='"+sess+"' and Semester='"+sem+"' ;" ;
					 OleDbCommand ^ cmd ;
					 cmd = gcnew OleDbCommand(selectString, DB_Connection);
					 OleDb::OleDbDataReader^ reader = cmd->ExecuteReader() ;
					 String^ d ;
					 if(reader->Read()){
						 d = reader->GetString(2) ;
						 Dept_ID=d;
					 }

					 selectString="SELECT CourseID,TimeSlot,ProfAssignedPreMidsem,ProfAssignedPostMidsem,SlotAssigned,OfferedTo FROM CoursesTT Where CourseID LIKE '%"+d+"%' ;";
					 cmd = gcnew OleDbCommand(selectString, DB_Connection);

					 OleDb::OleDbDataAdapter^ adapter=gcnew OleDb::OleDbDataAdapter();
					 adapter->SelectCommand=cmd;
					 DataTable^ data =gcnew DataTable();
					 adapter->Fill(data);
					 BindingSource^ bSource=gcnew BindingSource();
					 bSource->DataSource=data;
					 dataGridView1->DataSource=bSource;
					 adapter->Update(data);


					 btn_edit_Click(sender,e) ;

					 dataGridView1->Columns[0]->ReadOnly = true ;

					 DB_Connection->Close();
				 }
				 catch(Exception ^e){
					 MessageBox::Show(e->Message) ;
				 }

			 }
	private: System::Void richTextBox1_GotFocus(System::Object^  sender, System::EventArgs^  e) {
				 if(richTextBox1->Text=="") richTextBox1->Text="" ;
			 }
	private: System::Void Dept_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(Dept->Checked){
					 comboBox1->Enabled = false ;
					 checkedListBox2->Enabled = false ;
					 //other_receivers->Enabled = false ;
					 //richTextBox1->Enabled = false ;
					 for (int i = 0; i < checkedListBox2->Items->Count; i++){
						 checkedListBox2->SetItemChecked(i, false);
					 }
					 other_receivers->Checked = false ;
					 comboBox1->SelectedIndex = -1 ;
					 richTextBox1->Text = "" ;
					 label3->Visible = false ;
					 checkedListBox2->Visible = false ;
				 }
				 else{
					 comboBox1->Enabled = true ;
					 checkedListBox2->Enabled = true ;
					 //other_receivers->Enabled = true ;
					 //richTextBox1->Enabled = true ;
				 }
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(comboBox1->SelectedIndex!=-1 && comboBox1->SelectedIndex!=2){
					 label3->Visible=true;
					 checkedListBox2->Visible=true;
					 checkedListBox2->Enabled=true;

					 if(comboBox1->SelectedIndex==0){
						 checkedListBox2->Items->Clear() ;
						 checkedListBox2->Items->Add("1st Year");
						 checkedListBox2->Items->Add("2nd Year");
						 checkedListBox2->Items->Add("3rd Year");
						 checkedListBox2->Items->Add("4th Year");
						 checkedListBox2->Size = System::Drawing::Size(121, 64);
					 }
					 else if(comboBox1->SelectedIndex==1){
						 checkedListBox2->Items->Clear() ;
						 checkedListBox2->Items->Add("1st Year");
						 checkedListBox2->Items->Add("2nd Year");
						 checkedListBox2->Size = System::Drawing::Size(121, 34);
					 }
				 }
				 else{
					 checkedListBox2->Visible=false;
					 label3->Visible=false;
				 }
			 }
	private: System::Void btn_send_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(!Dept->Checked && (comboBox1->SelectedIndex==-1 || (comboBox1->SelectedIndex!=-1 && comboBox1->SelectedIndex!=2 && checkedListBox2->CheckedItems->Count==0)) && (!other_receivers->Checked || (other_receivers->Checked && richTextBox1->Text=="")) || richTextBox2->Text==""){
					 MessageBox::Show("Invalid Input") ;
				 }
				 else{
					 //String ^senderUsername = username ;
					 //String ^time,^date ;
					 String ^message = richTextBox2->Text ;


					 MessageBox::Show("Notification has been sent!") ;
					 //String ^query = "INSERT INTO Notification ";
				 }
			 }
	private: System::Void other_receivers_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(other_receivers->Checked){
					 richTextBox1->Enabled = true ;
				 }
				 else{
					 richTextBox1->Enabled = false ;
				 }
			 }
	private: System::Void btn_add_Click(System::Object^  sender, System::EventArgs^  e) {
				 curr = "Add" ;
				 cb_course_id->Visible = false ;
				 tb_course_id->Visible = true ;

				 cb_course_id->SelectedIndex = -1 ;
				 tb_course_id->Text = "Dummy" ;
				 tb_course_name->Text = "" ;
				 tb_credit->Text = "" ;
				 tb_link->Text = "" ;
				 cb_course_type->SelectedIndex = -1 ;
				 tb_course_id->Text = "" ;
			 }
	private: System::Void btn_edit_Click(System::Object^  sender, System::EventArgs^  e) {
				 curr = "Edit" ;
				 cb_course_id->Visible = true ;
				 tb_course_id->Visible = false ;

				 cb_course_id->Items->Clear() ;

				 try{
					 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 DB_Connection->Open();

					 String^ selectString = "Select DeptID from Departments Where Username='"+username+"'";
					 OleDb::OleDbCommand^ cmd=gcnew OleDbCommand(selectString,DB_Connection);
					 OleDb::OleDbDataReader^ reader = cmd->ExecuteReader();
					 reader->Read();
					 String ^ d= reader->GetString(0);

					 selectString = "SELECT CourseID FROM CourseList Where DeptID='"+d+"';";
					 cmd=gcnew OleDbCommand(selectString,DB_Connection);
					 reader = cmd->ExecuteReader();
					 while( reader->Read())
					 {
						 cb_course_id->Items->Add(reader->GetString(0)) ;
					 }
				 }
				 catch(Exception^ e){
					 MessageBox::Show(e->Message) ;
				 }

				 cb_course_id->SelectedIndex = 0 ;
				 tb_course_name->Text = "" ;
				 tb_credit->Text = "" ;
				 tb_link->Text = "" ;
				 cb_course_type->SelectedIndex = -1 ;
				 cb_course_id->SelectedIndex = -1 ;
			 }
	private: System::Void btn_save_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Assuming the value of curr
				 //Assuming the username is passed to the constructor
				 try{
					 if(tb_course_name->Text=="")
					 {
						 MessageBox::Show("Course name cannot be empty");
						 return ;
					 }
					 if(tb_credit->Text=="")
					 {
						 MessageBox::Show("Please enter the credits");
						 return ;
					 }
					 if(cb_course_type->SelectedIndex==-1)
					 {
						 MessageBox::Show("Please select the course type");
						 return ;
					 }
					 String ^ c_name=tb_course_name->Text, ^ c_id, ^ credit = tb_credit->Text,^ c_link=tb_link->Text;
					 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 DB_Connection->Open();
					 String ^ selectString  ;
					 OleDbCommand ^ cmd ;

					 OleDbDataReader ^ reader ;
					 if(curr=="Edit")
					 {
						 c_id = cb_course_id->GetItemText(cb_course_id->SelectedItem) ;
						 if(cb_course_id->SelectedIndex==-1)
						 {
							 MessageBox::Show("Please select the course ID");
							 return ;
						 }
						 selectString="UPDATE CourseList SET [CourseName]='"+c_name+"',[Credits]='"+credit+"',[CourseLink]='"+c_link+"',[CourseType]='"+cb_course_type->Text+"' WHERE [CourseID]='"+c_id+"';";
						 cmd=gcnew OleDbCommand(selectString,DB_Connection);
						 //MessageBox::Show(selectString) ;
						 cmd->ExecuteNonQuery();
						 MessageBox::Show("Course has been updated successfully!") ;
					 }
					 else
					 {
						 c_id = tb_course_id->Text ;
						 if(tb_course_id->Text=="")
						 {
							 MessageBox::Show("Course ID can not be empty");
							 return ;
						 }
						 selectString = "Select DeptID from Departments Where Username='"+username+"'";
						 cmd=gcnew OleDbCommand(selectString,DB_Connection);
						 reader = cmd->ExecuteReader();
						 reader->Read();
						 String ^ d= reader->GetString(0);

						 selectString="INSERT INTO CourseList ([CourseID],[CourseName],[Credits],[CourseLink],[CourseType],[DeptID]) VALUES ('"+c_id+"','"+c_name+"','"+credit+"','"+c_link+"','"+cb_course_type->Text+"','"+d+"');";
						 cmd=gcnew OleDbCommand(selectString,DB_Connection);
						 cmd->ExecuteNonQuery();
						 MessageBox::Show("Course has been added successfully!") ;
					 }
					 DB_Connection->Close() ;
				 }
				 catch(Exception^ e){
					 MessageBox::Show(e->Message) ;
				 }
			 }

	private: System::Void cb_course_id_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 try{
					 String^ c_id = cb_course_id->GetItemText(cb_course_id->SelectedItem) ;
					 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 DB_Connection->Open();
					 String ^ selectString = "SELECT * FROM CourseList WHERE CourseID='"+c_id+"';" ;
					 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString,DB_Connection);

					 OleDb::OleDbDataReader^ reader = cmd->ExecuteReader() ;
					 while(reader->Read()){
						 tb_course_name->Text = reader->GetString(1) ;
						 tb_credit->Text = reader->GetString(3) ;
						 if(!reader->IsDBNull(4))tb_link->Text = reader->GetString(4) ;
						 cb_course_type->SelectedIndex = cb_course_type->FindStringExact(reader->GetString(5)) ;
					 }
				 }
				 catch(Exception^ e){
					 MessageBox::Show(e->Message) ;
				 }
			 }
	private: System::Void btn_ntf_Click(System::Object^  sender, System::EventArgs^  e) {
				 //MessageBox::Show("working");
				 //projectUI::StudentNoticifications ^ form_x= gcnew projectUI::StudentNoticifications();
				 //form_x->Show();
			 }
	private: System::Void btn_check_prof_assgn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(ProfAssignment(Dept_ID))
					 MessageBox::Show("All Professors have been allocated courses successfully ");
				 else MessageBox::Show("Partial Course Allocation");
				 HOD_Load(sender,e) ;
			 }
	private: System::Void btn_save_dg_Click(System::Object^  sender, System::EventArgs^  e) {
				 try{

				 }
				 catch(Exception^ e){
					 MessageBox::Show(e->Message) ;
				 }
			 }
	private: System::Void logout_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 prev->Show() ;
				 HOD::Close() ;
			 }
};
}
