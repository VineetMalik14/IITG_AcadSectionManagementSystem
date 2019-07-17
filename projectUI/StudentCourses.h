#include <string.h>
#include <ctime>
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for StudentCourses
	/// </summary>
	public ref class StudentCourses : public System::Windows::Forms::UserControl
	{
	public:
		String ^ admission;
		int admission_year;
		String ^usrnm;
		OleDb::OleDbConnection ^con;	
		String^ connString;


		int present_year;
		int present_sem; // 0 = Spring, 1 = Fall
		int year_under_query;
		int semester_under_query; 
		int course_btn_index;

		int x;
		int y;

		String ^ lastClickedCourseBtn;	
		String ^ courseToChange;
		String ^ temp;
	private: System::Windows::Forms::Label^  label2;






	public: 

	public: 
		String ^ drop_change_instruction;

	public:
		StudentCourses(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		StudentCourses(String ^text)
		{
			InitializeComponent();
			usrnm=text;
			connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
			con=gcnew OleDb::OleDbConnection(connString);

			//present_year = 2018;
			//present_sem = 1; // 0 = Spring, 1 = Fall

			x = 250;
			y = 50 + 21*(course_btn_index-1);
			resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentCourses::typeid));
			explanationText = gcnew System::Windows::Forms::TextBox();		

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentCourses()
		{
			if (components)
			{
				delete components;
			}
		}



	public: System::Windows::Forms::TextBox^ explanationText;
		   System::Windows::Forms::Button ^ drop_btn;
		   System::Windows::Forms::Button ^ change_btn;
		   System::Windows::Forms::Button ^ ok_btn;
		   System::Windows::Forms::Button ^ cancel_btn;
		   System::Windows::Forms::LinkLabel ^ dropChangeLbl;
		   System::Windows::Forms::Label^  label1;
		   System::Windows::Forms::Button ^ prev_btn;
		   System::Windows::Forms::Button ^ next_btn;
		   System::Windows::Forms::Button ^ btn_course;
		   System::Windows::Forms::Button ^ temp_btn;
		   System::ComponentModel::ComponentResourceManager^  resources;

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
			this->SuspendLayout();
			// 
			// StudentCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoScrollMargin = System::Drawing::Size(0, 50);
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Name = L"StudentCourses";
			this->Size = System::Drawing::Size(839, 503);
			this->Load += gcnew System::EventHandler(this, &StudentCourses::StudentCourses_Load);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void StudentCourses_Load(System::Object^  sender, System::EventArgs^  e) {

				time_t now = time(0);
				tm *ltm = new tm;
				localtime_s(ltm,&now);
				present_year=ltm->tm_year;
				present_year+=1900;
				int month=ltm->tm_mon;
				if(month <= 7) present_sem = 1;
				else present_sem = 0;

			    
			    semester_under_query = present_sem;
				if(semester_under_query==1) present_year--;
				year_under_query =present_year ;

				generateCourseButtons();
				//MessageBox::Show(present_year);
			    if((semester_under_query == 1 && year_under_query == admission_year)||(year_under_query > admission_year))generate_prev_btn();
		    }


		    void generateCourseButtons(){

			    lastClickedCourseBtn = "";

			    label1 = gcnew System::Windows::Forms::Label();
			    label1->AutoSize = true;
			    label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				    static_cast<System::Byte>(0)));
			    label1->ForeColor = System::Drawing::Color::OrangeRed;
			    label1->Location = System::Drawing::Point(250, 40);
			    label1->Name = L"label1";
			    label1->Size = System::Drawing::Size(353, 32);
			    label1->TabIndex = 0;
			    label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			    this->Controls->Add(label1);	

			    
			    course_btn_index = 1;


			    try
			    {				

				    con->Open();

				    String ^ semesterName;
				    if (semester_under_query == 0)
					    semesterName = "Spring";
				    else if (semester_under_query == 1)
					    semesterName = "Fall";

					int x=0;
					int y=0;
					/*if(semester_under_query==1){
						y=1;
						x=2001;
					}*/
				    String ^ session = Convert::ToString(year_under_query)+"-"+Convert::ToString(Convert::ToInt32(year_under_query)-1999);
				    String ^ aString = "Select * from StudentCourses where [Username] ='"+usrnm+"' AND [Session] = '"+session+"' AND [Semester] = '"+semesterName+"'";
					String ^ bString = "Select [AdmissionSession] from Student where [Username] = '"+usrnm+"';";
				    label1->Text = session+",  "+semesterName+" Semester";

				    OleDb::OleDbCommand ^ cmd = gcnew OleDb::OleDbCommand(aString, con);
				    OleDb::OleDbDataReader ^ readerData = cmd->ExecuteReader();

				    while(readerData->Read() == true){
					    String ^ course_grade = "";
					    String ^ course_id = readerData->GetString(1);	
					    if(!readerData->IsDBNull(4))
						    course_grade = readerData->GetString(4);	


					    course_btn_creator(course_btn_index, course_id, course_grade, con);

					    course_btn_index++;

				    }
				    readerData->Close();

					OleDb::OleDbCommand ^ cmd1 = gcnew OleDb::OleDbCommand(bString, con);
					OleDb::OleDbDataReader ^ readerData1 = cmd1->ExecuteReader();

					while(readerData1->Read()){
						admission = readerData1->GetString(0);
					}
					readerData1->Close();
					admission = admission->Substring(0,4);
					admission_year = System::Convert::ToInt32(admission);
				    con->Close();
			    }
			    catch(Exception ^ ex)
			    {
				    con->Close();
				    MessageBox::Show(ex->Message);
			    }

			    dropChangeLbl = gcnew System::Windows::Forms::LinkLabel();
			    dropChangeLbl->AutoSize = true;
			    dropChangeLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				    static_cast<System::Byte>(0)));
			    dropChangeLbl->LinkColor = System::Drawing::Color::OrangeRed;
			    dropChangeLbl->Location = System::Drawing::Point(437, y + 50);
			    dropChangeLbl->Name = L"dropChangeLbl";
			    dropChangeLbl->Size = System::Drawing::Size(220, 17);
			    dropChangeLbl->TabIndex = 2;
			    dropChangeLbl->Text = L"I want to drop/change a course!";
			    dropChangeLbl->Click += gcnew System::EventHandler(this, &StudentCourses::dropChangeLbl_Click);


			    this->Controls->Add(dropChangeLbl);


		    }


		    void generate_prev_btn(){

			    prev_btn = gcnew System::Windows::Forms::Button();

			    // 
			    // prev_btn
			    // 
			    prev_btn->BackColor = System::Drawing::SystemColors::Control;
			    prev_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"prev")));
			    prev_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			    prev_btn->FlatAppearance->BorderSize = 0;
			    prev_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			    prev_btn->Location = System::Drawing::Point(178,53);
			    prev_btn->Name = L"prev_btn";
			    prev_btn->Size = System::Drawing::Size(40, 40);
			    prev_btn->TabIndex = 0;
			    prev_btn->UseVisualStyleBackColor = false;
			    prev_btn->Click += gcnew System::EventHandler(this, &StudentCourses::prev_btn_Click);

			    this->Controls->Add(prev_btn);



		    }
		    void generate_next_btn(){
			    next_btn = gcnew System::Windows::Forms::Button();

			    // 
			    // next_btn
			    // 
			    next_btn->BackColor = System::Drawing::SystemColors::Control;
			    next_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"next")));
			    next_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			    next_btn->FlatAppearance->BorderSize = 0;
			    next_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			    next_btn->Location = System::Drawing::Point(647,53);
			    next_btn->Name = L"next_btn";
			    next_btn->Size = System::Drawing::Size(40, 40);
			    next_btn->TabIndex = 0;
			    next_btn->UseVisualStyleBackColor = false;
			    next_btn->Click += gcnew System::EventHandler(this, &StudentCourses::next_btn_Click);

			    this->Controls->Add(next_btn);

			    //btn_course->Click += gcnew System::EventHandler(this, &User_Control_View_Election::btn_course_Click);

		    }


		    void course_btn_creator(int course_btn_index, String ^ course_id, String ^ course_grade, OleDb::OleDbConnection ^con)
		    {
			    btn_course = gcnew System::Windows::Forms::Button();
			    //////////////////////////////////////////////////////////////////////////////////////
			    String ^ courseName;
			    String ^courseCredits;

			    String ^ bString = "Select * from CourseList where [CourseID] ='"+course_id+"'";

			    OleDb::OleDbCommand ^ cmd1 = gcnew OleDb::OleDbCommand(bString, con);
			    OleDb::OleDbDataReader ^ reader = cmd1->ExecuteReader();

			    while(reader->Read() == true){
				    courseName = reader->GetString(1);	
				    courseCredits = reader->GetString(3);
			    }
			    reader->Close();

			    //////////////////////////////////////////////////////////////////////////////////////

			    btn_course->Name = course_id;
			    btn_course->Text = "   "+course_grade+"   "+course_id+": "+courseName+" ( "+courseCredits+" )";

			    btn_course->FlatAppearance->BorderColor = System::Drawing::Color::Teal;
			    btn_course->FlatAppearance->BorderSize = 3;
			    btn_course->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			    btn_course->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			    btn_course->ForeColor = System::Drawing::Color::Black;
			    btn_course->Size = System::Drawing::Size(353, 33);
			    btn_course->UseVisualStyleBackColor = true;



			    x = 250;
			    y = 80 + 30*(course_btn_index-1);
			    btn_course->Location = System::Drawing::Point(x, y);

			    this->Controls->Add(btn_course);

			    btn_course->Click += gcnew System::EventHandler(this, &StudentCourses::btn_course_Click);

		    }

	private: System::Void btn_course_Click(System::Object ^  sender, System::EventArgs^  e) {
			    temp_btn = gcnew System::Windows::Forms::Button();
			    temp_btn = dynamic_cast<System::Windows::Forms::Button ^>(sender);

			    lastClickedCourseBtn = temp_btn->Name;
			    drop_change_instruction = "Explain briefly why you want to drop/change "+lastClickedCourseBtn+" To change "+lastClickedCourseBtn+", please click CHANGE and select desired course";
			    explanationText->Text = drop_change_instruction;
		    }

		    void generate_drop_change_controls(){
			    drop_btn = gcnew System::Windows::Forms::Button();
			    change_btn = gcnew System::Windows::Forms::Button();

			    explanationText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			    explanationText->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				    static_cast<System::Byte>(0)));
			    explanationText->Multiline = true;
			    explanationText->Name = L"explanationText";
			    explanationText->Size = System::Drawing::Size(353, 90);
			    explanationText->TabIndex = 2;
			    x = 250;
			    y = y + 40;
			    explanationText->Location = System::Drawing::Point(x, y);

			    drop_btn->Name = "drop_btn";
			    drop_btn->Text = "DROP";
			    drop_btn->BackColor = System::Drawing::Color::Teal;
			    drop_btn->FlatAppearance->BorderSize = 0;
			    drop_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			    drop_btn->ForeColor = System::Drawing::Color::White;
			    drop_btn->Size = System::Drawing::Size(158, 40);
			    drop_btn->UseVisualStyleBackColor = true;
			    y = y + 100;
			    drop_btn->Location = System::Drawing::Point(x, y);

			    change_btn->Name = "change_btn";
			    change_btn->Text = "CHANGE";
			    change_btn->BackColor = System::Drawing::Color::Teal;
			    change_btn->FlatAppearance->BorderSize = 0;
			    change_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			    change_btn->ForeColor = System::Drawing::Color::White;
			    change_btn->Size = System::Drawing::Size(158, 40);
			    change_btn->UseVisualStyleBackColor = true;

			    x = 446;
			    change_btn->Location = System::Drawing::Point(x, y);

			    this->Controls->Add(explanationText);
			    this->Controls->Add(drop_btn);
			    this->Controls->Add(change_btn);


			    drop_btn->Click += gcnew System::EventHandler(this, &StudentCourses::drop_btn_Click);
			    change_btn->Click += gcnew System::EventHandler(this, &StudentCourses::change_btn_Click);
		    }

		    void generate_ok_cancel_buttons(){
			    ok_btn = gcnew System::Windows::Forms::Button();
			    cancel_btn = gcnew System::Windows::Forms::Button();


			    ok_btn->Name = "ok_btn";
			    ok_btn->Text = "SUBMIT";
			    ok_btn->BackColor = System::Drawing::Color::Teal;
			    ok_btn->FlatAppearance->BorderSize = 0;
			    ok_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			    ok_btn->ForeColor = System::Drawing::Color::White;
			    ok_btn->Size = System::Drawing::Size(158, 40);
			    ok_btn->UseVisualStyleBackColor = true;
			    x = 250;
			    y = y + 40;
			    ok_btn->Location = System::Drawing::Point(x, y);

			    cancel_btn->Name = "cancel_btn";
			    cancel_btn->Text = "CANCEL";
			    cancel_btn->BackColor = System::Drawing::Color::OrangeRed;
			    cancel_btn->FlatAppearance->BorderSize = 0;
			    cancel_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			    cancel_btn->ForeColor = System::Drawing::Color::White;
			    cancel_btn->Size = System::Drawing::Size(158, 40);
			    cancel_btn->UseVisualStyleBackColor = true;

			    x = 446;
			    cancel_btn->Location = System::Drawing::Point(x, y);

			    this->Controls->Add(ok_btn);
			    this->Controls->Add(cancel_btn);


			    ok_btn->Click += gcnew System::EventHandler(this, &StudentCourses::ok_btn_Click);
			    cancel_btn->Click += gcnew System::EventHandler(this, &StudentCourses::cancel_btn_Click);
		    }

	private: System::Void drop_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			    if(lastClickedCourseBtn != ""){
				    MessageBox::Show("Successfully applied to drop "+lastClickedCourseBtn);//

				    destroyer();
				    year_under_query = present_year;
				    semester_under_query = present_sem;

				    generateCourseButtons();
				    generate_drop_change_controls();
				    dropChangeLbl->Hide();
				    label1->Text = "Drop/Change a course";
			    }
			    else
				    MessageBox::Show("Select a course to drop");
		    }
	private: System::Void ok_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			    if (lastClickedCourseBtn != "")
			    {
				    if(lastClickedCourseBtn != courseToChange){
					    MessageBox::Show("Successfully applied to change from "+temp+" to "+lastClickedCourseBtn);
				    }
				    else
					    MessageBox::Show("Select a different course");
			    }
			    else
				    MessageBox::Show("Select a desired course");
		    }
	private: System::Void cancel_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			    destroyer();
			    year_under_query = present_year;
			    semester_under_query = present_sem;

			    generateCourseButtons();
			    generate_drop_change_controls();
			    dropChangeLbl->Hide();
			    label1->Text = "Drop/Change a course";
			    explanationText->Text="";
		    }

	private: System::Void change_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			    if(lastClickedCourseBtn != "")
				{
				    temp = lastClickedCourseBtn;
				    destroyer();
				    generateCourseButtons();

				    dropChangeLbl->Hide();
				    generate_ok_cancel_buttons();
				    label1->Text = "Select desired course against "+temp;
			    }
			    else
				    MessageBox::Show("Select a course to change");

		    }


		    void destroyer(){
			    this->Controls->Clear();
		    }


	private: System::Void prev_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			    destroyer();
			    generate_next_btn();
			    if (semester_under_query == 0)
			    {
				    year_under_query--;
				    semester_under_query = 1;
			    }
			    else if (semester_under_query == 1)
				    semester_under_query = 0;					

			    generateCourseButtons();

			    if((semester_under_query == 1 && year_under_query == admission_year)||(year_under_query > admission_year))generate_prev_btn();

		    }

	private: System::Void next_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			    destroyer();
			    generate_prev_btn();
			    if (semester_under_query == 1)
			    {
				    year_under_query++;
				    semester_under_query = 0;
			    }
			    else if (semester_under_query == 0)
				    semester_under_query = 1;					

			    generateCourseButtons();

			    if(!(year_under_query == present_year && semester_under_query == present_sem)) generate_next_btn();
		    }

	private: System::Void dropChangeLbl_Click(System::Object^  sender, System::EventArgs^  e) {
			    destroyer();
			    year_under_query = present_year;
			    semester_under_query = present_sem;

			    generateCourseButtons();
			    generate_drop_change_controls();
			    dropChangeLbl->Hide();
			    label1->Text = "Drop/Change a course";
			    lastClickedCourseBtn = "";
			    explanationText->Text="";
		    }

	};
}
