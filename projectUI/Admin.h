#pragma once

#using <System.dll>
#using <System.data.dll>
#include "globalVars.h"
#include "Student_details.h"
//#include "ExamRoomAllotment.cpp"
//#include "slotAllocation.cpp"
//#include "roomAllocation.cpp"
#include "TTfunctions.h"



namespace Admin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		String ^sess ;
		String ^ username;
	private: System::Windows::Forms::Button^  btn_save;
	private: System::Windows::Forms::TextBox^  tb_sess;


	private: System::Windows::Forms::Button^  btn_edit;
	private: System::Windows::Forms::Label^  lbl_sess;
	private: System::Windows::Forms::Label^  lbl_sem;
	private: System::Windows::Forms::ComboBox^  cb_sem;
	private: System::Windows::Forms::Button^  logout_btn;

			 String ^sem ;
	public:
		Form^ prev;
	public:
		Form1(String ^ temp,Form ^prev_)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			sess = "2019-20" ;
			sem = "Spring" ;
			username=temp;
			prev=prev_;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_main;
	protected: 

	protected: 

	private: System::Windows::Forms::Button^  btn_search;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::RadioButton^  rb_username;
	private: System::Windows::Forms::RadioButton^  rb_name;
	private: System::Windows::Forms::RadioButton^  rb_roll;
	private: System::Windows::Forms::RadioButton^  rb_dept_id;

	private: System::Windows::Forms::Panel^  panel_category;
	private: System::Windows::Forms::RadioButton^  rb_staff;
	private: System::Windows::Forms::RadioButton^  rb_student;
	private: System::Windows::Forms::RadioButton^  rb_prof;

	private: System::Windows::Forms::TextBox^  tb_search;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::RadioButton^  rb_phd;
	private: System::Windows::Forms::Button^  btn_del_courses;
	private: System::Windows::Forms::Button^  btn_gen_tt;








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
			this->panel_main = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->rb_username = (gcnew System::Windows::Forms::RadioButton());
			this->rb_name = (gcnew System::Windows::Forms::RadioButton());
			this->rb_roll = (gcnew System::Windows::Forms::RadioButton());
			this->rb_dept_id = (gcnew System::Windows::Forms::RadioButton());
			this->panel_category = (gcnew System::Windows::Forms::Panel());
			this->rb_phd = (gcnew System::Windows::Forms::RadioButton());
			this->rb_staff = (gcnew System::Windows::Forms::RadioButton());
			this->rb_student = (gcnew System::Windows::Forms::RadioButton());
			this->rb_prof = (gcnew System::Windows::Forms::RadioButton());
			this->tb_search = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_del_courses = (gcnew System::Windows::Forms::Button());
			this->btn_gen_tt = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->tb_sess = (gcnew System::Windows::Forms::TextBox());
			this->btn_edit = (gcnew System::Windows::Forms::Button());
			this->lbl_sess = (gcnew System::Windows::Forms::Label());
			this->lbl_sem = (gcnew System::Windows::Forms::Label());
			this->cb_sem = (gcnew System::Windows::Forms::ComboBox());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->panel_main->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel_category->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_main
			// 
			this->panel_main->Controls->Add(this->dataGridView1);
			this->panel_main->Controls->Add(this->btn_search);
			this->panel_main->Controls->Add(this->panel2);
			this->panel_main->Controls->Add(this->panel_category);
			this->panel_main->Controls->Add(this->tb_search);
			this->panel_main->Controls->Add(this->label2);
			this->panel_main->Controls->Add(this->label1);
			this->panel_main->Location = System::Drawing::Point(41, 12);
			this->panel_main->Name = L"panel_main";
			this->panel_main->Size = System::Drawing::Size(722, 465);
			this->panel_main->TabIndex = 0;
			this->panel_main->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel_main_Paint);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(73, 261);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(567, 176);
			this->dataGridView1->TabIndex = 27;
			this->dataGridView1->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Form1::dataGridView1_CellMouseDoubleClick);
			// 
			// btn_search
			// 
			this->btn_search->Location = System::Drawing::Point(545, 190);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(95, 33);
			this->btn_search->TabIndex = 9;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &Form1::btn_search_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Silver;
			this->panel2->Controls->Add(this->rb_username);
			this->panel2->Controls->Add(this->rb_name);
			this->panel2->Controls->Add(this->rb_roll);
			this->panel2->Controls->Add(this->rb_dept_id);
			this->panel2->Location = System::Drawing::Point(185, 126);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(455, 46);
			this->panel2->TabIndex = 2;
			// 
			// rb_username
			// 
			this->rb_username->AutoSize = true;
			this->rb_username->Location = System::Drawing::Point(121, 14);
			this->rb_username->Name = L"rb_username";
			this->rb_username->Size = System::Drawing::Size(73, 17);
			this->rb_username->TabIndex = 6;
			this->rb_username->Text = L"Username";
			this->rb_username->UseVisualStyleBackColor = true;
			// 
			// rb_name
			// 
			this->rb_name->AutoSize = true;
			this->rb_name->Checked = true;
			this->rb_name->Location = System::Drawing::Point(17, 14);
			this->rb_name->Name = L"rb_name";
			this->rb_name->Size = System::Drawing::Size(53, 17);
			this->rb_name->TabIndex = 5;
			this->rb_name->TabStop = true;
			this->rb_name->Text = L"Name";
			this->rb_name->UseVisualStyleBackColor = true;
			// 
			// rb_roll
			// 
			this->rb_roll->AutoSize = true;
			this->rb_roll->Location = System::Drawing::Point(245, 14);
			this->rb_roll->Name = L"rb_roll";
			this->rb_roll->Size = System::Drawing::Size(61, 17);
			this->rb_roll->TabIndex = 7;
			this->rb_roll->Text = L"User ID";
			this->rb_roll->UseVisualStyleBackColor = true;
			// 
			// rb_dept_id
			// 
			this->rb_dept_id->AutoSize = true;
			this->rb_dept_id->Location = System::Drawing::Point(360, 14);
			this->rb_dept_id->Name = L"rb_dept_id";
			this->rb_dept_id->Size = System::Drawing::Size(94, 17);
			this->rb_dept_id->TabIndex = 8;
			this->rb_dept_id->Text = L"Department ID";
			this->rb_dept_id->UseVisualStyleBackColor = true;
			// 
			// panel_category
			// 
			this->panel_category->BackColor = System::Drawing::Color::Silver;
			this->panel_category->Controls->Add(this->rb_phd);
			this->panel_category->Controls->Add(this->rb_staff);
			this->panel_category->Controls->Add(this->rb_student);
			this->panel_category->Controls->Add(this->rb_prof);
			this->panel_category->Location = System::Drawing::Point(185, 79);
			this->panel_category->Name = L"panel_category";
			this->panel_category->Size = System::Drawing::Size(455, 41);
			this->panel_category->TabIndex = 1;
			// 
			// rb_phd
			// 
			this->rb_phd->AutoSize = true;
			this->rb_phd->Location = System::Drawing::Point(121, 11);
			this->rb_phd->Name = L"rb_phd";
			this->rb_phd->Size = System::Drawing::Size(46, 17);
			this->rb_phd->TabIndex = 5;
			this->rb_phd->Text = L"PhD";
			this->rb_phd->UseVisualStyleBackColor = true;
			// 
			// rb_staff
			// 
			this->rb_staff->AutoSize = true;
			this->rb_staff->Location = System::Drawing::Point(360, 11);
			this->rb_staff->Name = L"rb_staff";
			this->rb_staff->Size = System::Drawing::Size(47, 17);
			this->rb_staff->TabIndex = 4;
			this->rb_staff->Text = L"Staff";
			this->rb_staff->UseVisualStyleBackColor = true;
			// 
			// rb_student
			// 
			this->rb_student->AutoSize = true;
			this->rb_student->Checked = true;
			this->rb_student->Location = System::Drawing::Point(17, 11);
			this->rb_student->Name = L"rb_student";
			this->rb_student->Size = System::Drawing::Size(96, 17);
			this->rb_student->TabIndex = 2;
			this->rb_student->TabStop = true;
			this->rb_student->Text = L"BTech/MTech";
			this->rb_student->UseVisualStyleBackColor = true;
			// 
			// rb_prof
			// 
			this->rb_prof->AutoSize = true;
			this->rb_prof->Location = System::Drawing::Point(245, 13);
			this->rb_prof->Name = L"rb_prof";
			this->rb_prof->Size = System::Drawing::Size(69, 17);
			this->rb_prof->TabIndex = 3;
			this->rb_prof->Text = L"Professor";
			this->rb_prof->UseVisualStyleBackColor = true;
			// 
			// tb_search
			// 
			this->tb_search->Location = System::Drawing::Point(185, 29);
			this->tb_search->Name = L"tb_search";
			this->tb_search->Size = System::Drawing::Size(230, 20);
			this->tb_search->TabIndex = 1;
			this->tb_search->TabStop = false;
			this->tb_search->Text = L"Search here...";
			this->tb_search->GotFocus += gcnew System::EventHandler(this, &Form1::tb_search_GotFocus);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Category";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Search By";
			// 
			// btn_del_courses
			// 
			this->btn_del_courses->Location = System::Drawing::Point(605, 484);
			this->btn_del_courses->Name = L"btn_del_courses";
			this->btn_del_courses->Size = System::Drawing::Size(133, 23);
			this->btn_del_courses->TabIndex = 1;
			this->btn_del_courses->Text = L"Delete Courses";
			this->btn_del_courses->UseVisualStyleBackColor = true;
			this->btn_del_courses->Click += gcnew System::EventHandler(this, &Form1::btn_del_courses_Click);
			// 
			// btn_gen_tt
			// 
			this->btn_gen_tt->Location = System::Drawing::Point(347, 483);
			this->btn_gen_tt->Name = L"btn_gen_tt";
			this->btn_gen_tt->Size = System::Drawing::Size(199, 23);
			this->btn_gen_tt->TabIndex = 2;
			this->btn_gen_tt->Text = L"Generate Time Table";
			this->btn_gen_tt->UseVisualStyleBackColor = true;
			this->btn_gen_tt->Click += gcnew System::EventHandler(this, &Form1::btn_gen_tt_Click);
			// 
			// btn_save
			// 
			this->btn_save->Location = System::Drawing::Point(886, 128);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(125, 23);
			this->btn_save->TabIndex = 3;
			this->btn_save->Text = L"Save";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &Form1::btn_save_Click);
			// 
			// tb_sess
			// 
			this->tb_sess->Location = System::Drawing::Point(886, 76);
			this->tb_sess->Name = L"tb_sess";
			this->tb_sess->Size = System::Drawing::Size(125, 20);
			this->tb_sess->TabIndex = 4;
			// 
			// btn_edit
			// 
			this->btn_edit->Location = System::Drawing::Point(936, 36);
			this->btn_edit->Name = L"btn_edit";
			this->btn_edit->Size = System::Drawing::Size(75, 23);
			this->btn_edit->TabIndex = 6;
			this->btn_edit->Text = L"Edit";
			this->btn_edit->UseVisualStyleBackColor = true;
			this->btn_edit->Click += gcnew System::EventHandler(this, &Form1::btn_edit_Click);
			// 
			// lbl_sess
			// 
			this->lbl_sess->AutoSize = true;
			this->lbl_sess->Location = System::Drawing::Point(811, 79);
			this->lbl_sess->Name = L"lbl_sess";
			this->lbl_sess->Size = System::Drawing::Size(44, 13);
			this->lbl_sess->TabIndex = 7;
			this->lbl_sess->Text = L"Session";
			// 
			// lbl_sem
			// 
			this->lbl_sem->AutoSize = true;
			this->lbl_sem->Location = System::Drawing::Point(811, 105);
			this->lbl_sem->Name = L"lbl_sem";
			this->lbl_sem->Size = System::Drawing::Size(51, 13);
			this->lbl_sem->TabIndex = 8;
			this->lbl_sem->Text = L"Semester";
			// 
			// cb_sem
			// 
			this->cb_sem->FormattingEnabled = true;
			this->cb_sem->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Fall", L"Spring"});
			this->cb_sem->Location = System::Drawing::Point(886, 102);
			this->cb_sem->Name = L"cb_sem";
			this->cb_sem->Size = System::Drawing::Size(125, 21);
			this->cb_sem->TabIndex = 9;
			// 
			// logout_btn
			// 
			this->logout_btn->Location = System::Drawing::Point(805, 12);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(75, 23);
			this->logout_btn->TabIndex = 10;
			this->logout_btn->Text = L"Logout";
			this->logout_btn->UseVisualStyleBackColor = true;
			this->logout_btn->Click += gcnew System::EventHandler(this, &Form1::logout_btn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 540);
			this->Controls->Add(this->logout_btn);
			this->Controls->Add(this->cb_sem);
			this->Controls->Add(this->lbl_sem);
			this->Controls->Add(this->lbl_sess);
			this->Controls->Add(this->btn_edit);
			this->Controls->Add(this->tb_sess);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->btn_gen_tt);
			this->Controls->Add(this->btn_del_courses);
			this->Controls->Add(this->panel_main);
			this->Name = L"Form1";
			this->Text = L"ADMIN SECTION";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel_main->ResumeLayout(false);
			this->panel_main->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel_category->ResumeLayout(false);
			this->panel_category->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 btn_save->Visible = false ;
		 }
private: System::Void btn_search_Click(System::Object^  sender, System::EventArgs^  e) {

			 String ^category = "" ;
			 if(rb_student->Checked){
				 category = "Student" ;
			 }
			 else if(rb_prof->Checked){
				 category = "Professor" ;
			 }
			 else if(rb_staff->Checked){
				 category = "Staff" ;
			 }
			 else if(rb_phd->Checked){
				 category = "PhD" ;
			 }
			 // Remove after Testing(Start)
			 else{
				 MessageBox::Show("Unhandled Case!") ;
			 }
			 // Remove after Testing(End)



			 String ^column = "" ;
			 if(rb_name->Checked){
				 column = "FullName" ;
			 }
			 else if(rb_username->Checked){
				 column = "Username" ;
			 }
			 else if(rb_roll->Checked){
				 column = "RollNumber" ;
			 }
			 else if(rb_dept_id->Checked){
				 column = "DeptID" ;
			 }
			 // Remove after Testing(Start)
			 else{
				 MessageBox::Show("Unhandled Case!") ;
			 }
			 // Remove after Testing(End)



			 String ^keyword = tb_search->Text ;
			 try{

				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
				 DB_Connection->Open();
				 //String ^ first = tb_search->Text ;
				 //String ^ insertString = " into CourseList([CourseID],[CourseName],[DeptID],[Credits],[CourseLink]) VALUES('" +first+ "', '" +first+ "', '" +first+ "', '" +first+ "', '" +first+ "' );";
				 
				 String ^ selectString = "";
				 if(column == "FullName"){
					 std::string str[3] ;

					 std::string s = globalVars::StrCnvstr(keyword);
					 std::string delimiter = " ";

					 size_t pos = 0;
					 std::string token;
					 int j=0;
					 for( j=0; (pos = s.find(delimiter)) != std::string::npos&&j<3; j++) {
						
						str[j] = s.substr(0, pos);
						s.erase(0, pos + delimiter.length());
					 }
					 //std::cout << s << std::endl;

					 str[j] = s.substr(0, pos);
					 if(str[1]=="")
						 selectString = "SELECT * FROM " + category + " WHERE " + " FirstName " + " LIKE '%" + globalVars::strCnvStr(str[0]) +"%'" ;
					 else if(str[2]=="")
						  selectString = "SELECT * FROM " + category + " WHERE " + " FirstName " + " LIKE '%" + globalVars::strCnvStr(str[0]) +"%' and LastName Like '%"+ globalVars::strCnvStr(str[1]) + "%'" ;
					 else
						  selectString = "SELECT * FROM " + category + " WHERE " + " FirstName " + " LIKE '%" + globalVars::strCnvStr(str[0]) +"%' and MiddleName Like '%"+ globalVars::strCnvStr(str[1]) + "%' and LastName Like '%"+ globalVars::strCnvStr(str[2]) + "%'"  ;


				 }
				 else{
					 keyword = "%"+keyword+"%" ;
					 selectString = "SELECT * FROM " + category + " WHERE " + column + " LIKE '" + keyword +"'" ;
				 }
				 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);

				 
				 

				 OleDb::OleDbDataAdapter^ adapter=gcnew OleDb::OleDbDataAdapter();
				 adapter->SelectCommand=cmd;
				 DataTable^ data =gcnew DataTable();
				 adapter->Fill(data);
				 BindingSource^ bSource=gcnew BindingSource();
				 bSource->DataSource=data;
				 dataGridView1->DataSource=bSource;
				 adapter->Update(data);
				 
				 DB_Connection->Close();

			 }

			 catch(Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }


			 /*
			 try
			 {

				 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

				 con=gcnew OleDb::OleDbConnection(connString);
				 con->Open();
				 String^ com="Select * from ProfCourses where [Username] = " + "'ckarfa'" + " and [Session] like '20%" +(ltm->tm_year-100)+"%'"+";";
				 MessageBox::Show(com);
				 String^ com2="Select * from CourseList where ";


				 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
				 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

				 while (readerData->Read())
				 {
					 com2=com2+"[CourseID] = '"+readerData->GetString(1)+"' or ";
				 }
				 com2=com2->Substring(0,com2->Length -3)+";";

				 MessageBox::Show(com2);
				 cmd=gcnew OleDb::OleDbCommand(com2,con);
				 OleDb::OleDbDataAdapter^ adapter=gcnew OleDb::OleDbDataAdapter();
				 adapter->SelectCommand=cmd;
				 DataTable^ data =gcnew DataTable();
				 adapter->Fill(data);
				 BindingSource^ bSource=gcnew BindingSource();
				 bSource->DataSource=data;
				 dataGridView1->DataSource=bSource;
				 adapter->Update(data);
				 con->Close();
			 }
			 catch(Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
				 con->Close();
			 }
			 */
			
		 }
private: System::Void tb_search_GotFocus(System::Object^  sender, System::EventArgs^  e) {
			 if(tb_search->Text == "Search here...") tb_search->Text = "" ;
		 }
private: System::Void dataGridView1_CellMouseDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
			 String ^ temp;
			 int id_col=e->ColumnIndex;
			 int id_row=e->RowIndex;
			 DataGridViewCell ^tem=dataGridView1[0,id_row];
			 temp=Convert::ToString(tem->Value);
			 //MessageBox::Show(temp);
			 projectUI::Student_details ^form_student_details = gcnew projectUI::Student_details(temp) ;
			 form_student_details->Show() ;
		 }
private: System::Void btn_del_courses_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
				 DB_Connection->Open();
				 String ^ selectString = "DELETE * FROM CourseList" ;
				 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString,DB_Connection);
				 cmd->ExecuteNonQuery();

				 /*
				 String ^ selectString = "DELETE * FROM ExamTT" ;
				 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString,DB_Connection);
				 cmd->ExecuteNonQuery();

				 String ^ selectString = "DELETE * FROM CourseTT" ;
				 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString,DB_Connection);
				 cmd->ExecuteNonQuery();
				 */

				 DB_Connection->Close() ;
			 }
			 catch(Exception^ e){
				 MessageBox::Show(e->Message);
			 }
		 }
private: System::Void btn_gen_tt_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Generate Time Table
			assignSlots();
			assignRooms();
			assignExamRooms();
			 try{
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
				 DB_Connection->Open();
				 String^ selectString="SELECT ProfAssignedPreMidsem,ProfAssignedPostMidsem,CourseID FROM CoursesTT";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);

				 OleDb::OleDbDataReader ^reader= cmd->ExecuteReader() ;
				 while(reader->Read()){
					 String ^profid1 = reader->GetString(0) ;
					 String ^profid2 = reader->GetString(1) ;
					 String^ cid = reader->GetString(2) ;

					 String^ insertString ;
					 if(profid1 != profid2){
						 insertString = "INSERT INTO ProfCourses Values ('"+profid1+"','"+cid+"','Premidsem','"+sess+"','"+sem+"');" ;
						 cmd = gcnew OleDbCommand(insertString, DB_Connection);
						 cmd->ExecuteNonQuery() ;

						 insertString = "INSERT INTO ProfCourses Values ('"+profid2+"','"+cid+"','Postmidsem','"+sess+"','"+sem+"');" ;
						 cmd = gcnew OleDbCommand(insertString, DB_Connection);
						 cmd->ExecuteNonQuery() ;
					 }
					 else{
						 insertString = "INSERT INTO ProfCourses Values ('"+profid1+"','"+cid+"','Whole','"+sess+"','"+sem+"');" ;
						 cmd = gcnew OleDbCommand(insertString, DB_Connection);
						 cmd->ExecuteNonQuery() ;
					 }
				 }

				 DB_Connection->Close();
			 }
			 catch(Exception^ e){
				 MessageBox::Show(e->Message) ;
			 }

			 MessageBox::Show("Time Table has been successfully generated!") ;
		 }
private: System::Void btn_edit_Click(System::Object^  sender, System::EventArgs^  e) {
			 btn_edit->Visible = false ;
			 btn_save->Visible = true ;

		 }
private: System::Void btn_save_Click(System::Object^  sender, System::EventArgs^  e) {
			 btn_edit->Visible = true ;
			 btn_save->Visible = false ;
			 
			 String^ Sess = tb_sess->Text ;
			 String^ sem = cb_sem->SelectedText ;

			 try{
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
				 DB_Connection->Open();
				 OleDbCommand ^ cmd;
				 // Write Query Here!
				 String^ insertString = "";
				 cmd = gcnew OleDbCommand(insertString, DB_Connection);
				 // Uncomment this!
				 //cmd->ExecuteNonQuery() ;}

			}
			 catch(Exception^ e){
				 MessageBox::Show(e->Message) ;
			 }
		 }
private: System::Void panel_main_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void logout_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 prev->Show();
			 Form1::Close();
		 }
};
}

