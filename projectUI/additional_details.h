#pragma once

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
/// Summary for additional_details
/// </summary>
public ref class additional_details : public System::Windows::Forms::Form
{
public:
	String^ username ;
 additional_details(String^ username)
 {
  InitializeComponent();
  //
  //TODO: Add the constructor code here
  //
  this->username = username ;
 }

protected:
 /// <summary>
 /// Clean up any resources being used.
 /// </summary>
 ~additional_details()
 {
  if (components)
  {
   delete components;
  }
 }
private: System::Windows::Forms::Label^  hostel_label;
protected: 
private: System::Windows::Forms::Label^  father_occupation_label;
private: System::Windows::Forms::Label^  father_qualification_label;
private: System::Windows::Forms::Label^  father_name_label;
private: System::Windows::Forms::Label^  annual_family_income_label;
private: System::Windows::Forms::Label^  admission_session_label;
private: System::Windows::Forms::Label^  alternate_email_label;
private: System::Windows::Forms::Label^  emergency_contact_label;
private: System::Windows::Forms::Label^  phone_label;
private: System::Windows::Forms::Label^  date_of_join_label;
private: System::Windows::Forms::Label^  dob_label;
private: System::Windows::Forms::Label^  room_label;
private: System::Windows::Forms::Label^  nature_of_disability_label;
private: System::Windows::Forms::Label^  guardian_mobile_label;

private: System::Windows::Forms::Label^  guardian_occupation_label;

private: System::Windows::Forms::Label^  guardian_name_label;

private: System::Windows::Forms::Label^  guardian_label;

private: System::Windows::Forms::Label^  mother_mobile_label;

private: System::Windows::Forms::Label^  mother_occupation_label;

private: System::Windows::Forms::Label^  mother_qualification_label;

private: System::Windows::Forms::Label^  mother_name_label;

private: System::Windows::Forms::Label^  father_mobile_label;

private: System::Windows::Forms::Label^  percentage_disability_label;
private: System::Windows::Forms::TextBox^  father_name_textbox;


private: System::Windows::Forms::TextBox^  percentage_of_disability_textbox;
private: System::Windows::Forms::TextBox^  admission_session_textbox;



private: System::Windows::Forms::TextBox^  alternate_email_textbox;

private: System::Windows::Forms::TextBox^  emergency_contact_textbox;

private: System::Windows::Forms::TextBox^  mobile_textbox;

private: System::Windows::Forms::TextBox^  nature_of_disability_textbox;
private: System::Windows::Forms::TextBox^  father_occupation_combobox;



private: System::Windows::Forms::TextBox^  room_textbox;
private: System::Windows::Forms::Button^  edit_btn;
private: System::Windows::Forms::Label^  guardian_address_label;
private: System::Windows::Forms::Label^  guardian_pincode;
private: System::Windows::Forms::Label^  mother_tongue_label;
private: System::Windows::Forms::Label^  height_label;
private: System::Windows::Forms::Label^  weight_label;





private: System::Windows::Forms::Label^  home_pincode_label;
private: System::Windows::Forms::Label^  aadhaar_number_label;
private: System::Windows::Forms::Label^  do_you_have_passport_label;



private: System::Windows::Forms::Label^  blood_group_label;

private: System::Windows::Forms::Label^  guardian_email_label;
private: System::Windows::Forms::Label^  permanent_address_label;


private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  subjects_label;

private: System::Windows::Forms::Label^  board_label;

private: System::Windows::Forms::Label^  passport_expiry_date_label;

private: System::Windows::Forms::Label^  passport_number_label;

private: System::Windows::Forms::Label^  passport_issued_by_country_label;
private: System::Windows::Forms::Label^  marks_label;


private: System::Windows::Forms::Label^  year_of_passing_label;
private: System::Windows::Forms::ComboBox^  hostel_combobox;
private: System::Windows::Forms::DateTimePicker^  dob_datetimepicker;
private: System::Windows::Forms::DateTimePicker^  date_of_join_datetimepicker;
private: System::Windows::Forms::TextBox^  father_mobile_textbox;
private: System::Windows::Forms::TextBox^  guardian_pincode_textbox;


private: System::Windows::Forms::TextBox^  guardian_email_textbox;

private: System::Windows::Forms::TextBox^  mother_mobile_textbox;

private: System::Windows::Forms::TextBox^  mother_occupation_textbox;

private: System::Windows::Forms::TextBox^  mother_name_textbox;

private: System::Windows::Forms::TextBox^  mother_tongue_textbox;

private: System::Windows::Forms::TextBox^  guardian_mobile_textbox;

private: System::Windows::Forms::TextBox^  guardian_occupation_textbox;


private: System::Windows::Forms::TextBox^  guardian_name_textbox;
private: System::Windows::Forms::TextBox^  home_pincode_textbox;


private: System::Windows::Forms::TextBox^  passport_number_textbox;

private: System::Windows::Forms::TextBox^  passport_issued_by_country_textbox;

private: System::Windows::Forms::TextBox^  height_textbox;
private: System::Windows::Forms::TextBox^  weight_textbox;
private: System::Windows::Forms::TextBox^  marks_textbox;





private: System::Windows::Forms::TextBox^  subjects_textbox;

private: System::Windows::Forms::TextBox^  board_textbox;

private: System::Windows::Forms::TextBox^  aadhaar_number_textbox;
private: System::Windows::Forms::TextBox^  year_of_passing_textbox;


private: System::Windows::Forms::RichTextBox^  permanent_address_textbox;

private: System::Windows::Forms::RichTextBox^  guardian_address_textbox;
private: System::Windows::Forms::ComboBox^  annual_income_combobox;


private: System::Windows::Forms::ComboBox^  father_qualification_combobox;
private: System::Windows::Forms::ComboBox^  mother_qualification_combobox;



private: System::Windows::Forms::ComboBox^  guardian_combobox;
private: System::Windows::Forms::ComboBox^  blood_group_combobox;
private: System::Windows::Forms::ComboBox^  do_you_have_passport_combobox;
private: System::Windows::Forms::DateTimePicker^  passport_expiry_datetimepicker;
private: System::Windows::Forms::Button^  save_btn;








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
  this->hostel_label = (gcnew System::Windows::Forms::Label());
  this->father_occupation_label = (gcnew System::Windows::Forms::Label());
  this->father_qualification_label = (gcnew System::Windows::Forms::Label());
  this->father_name_label = (gcnew System::Windows::Forms::Label());
  this->annual_family_income_label = (gcnew System::Windows::Forms::Label());
  this->admission_session_label = (gcnew System::Windows::Forms::Label());
  this->alternate_email_label = (gcnew System::Windows::Forms::Label());
  this->emergency_contact_label = (gcnew System::Windows::Forms::Label());
  this->phone_label = (gcnew System::Windows::Forms::Label());
  this->date_of_join_label = (gcnew System::Windows::Forms::Label());
  this->dob_label = (gcnew System::Windows::Forms::Label());
  this->room_label = (gcnew System::Windows::Forms::Label());
  this->nature_of_disability_label = (gcnew System::Windows::Forms::Label());
  this->guardian_mobile_label = (gcnew System::Windows::Forms::Label());
  this->guardian_occupation_label = (gcnew System::Windows::Forms::Label());
  this->guardian_name_label = (gcnew System::Windows::Forms::Label());
  this->guardian_label = (gcnew System::Windows::Forms::Label());
  this->mother_mobile_label = (gcnew System::Windows::Forms::Label());
  this->mother_occupation_label = (gcnew System::Windows::Forms::Label());
  this->mother_qualification_label = (gcnew System::Windows::Forms::Label());
  this->mother_name_label = (gcnew System::Windows::Forms::Label());
  this->father_mobile_label = (gcnew System::Windows::Forms::Label());
  this->percentage_disability_label = (gcnew System::Windows::Forms::Label());
  this->father_name_textbox = (gcnew System::Windows::Forms::TextBox());
  this->percentage_of_disability_textbox = (gcnew System::Windows::Forms::TextBox());
  this->admission_session_textbox = (gcnew System::Windows::Forms::TextBox());
  this->alternate_email_textbox = (gcnew System::Windows::Forms::TextBox());
  this->emergency_contact_textbox = (gcnew System::Windows::Forms::TextBox());
  this->mobile_textbox = (gcnew System::Windows::Forms::TextBox());
  this->nature_of_disability_textbox = (gcnew System::Windows::Forms::TextBox());
  this->father_occupation_combobox = (gcnew System::Windows::Forms::TextBox());
  this->room_textbox = (gcnew System::Windows::Forms::TextBox());
  this->edit_btn = (gcnew System::Windows::Forms::Button());
  this->guardian_address_label = (gcnew System::Windows::Forms::Label());
  this->guardian_pincode = (gcnew System::Windows::Forms::Label());
  this->mother_tongue_label = (gcnew System::Windows::Forms::Label());
  this->height_label = (gcnew System::Windows::Forms::Label());
  this->weight_label = (gcnew System::Windows::Forms::Label());
  this->home_pincode_label = (gcnew System::Windows::Forms::Label());
  this->aadhaar_number_label = (gcnew System::Windows::Forms::Label());
  this->do_you_have_passport_label = (gcnew System::Windows::Forms::Label());
  this->blood_group_label = (gcnew System::Windows::Forms::Label());
  this->guardian_email_label = (gcnew System::Windows::Forms::Label());
  this->permanent_address_label = (gcnew System::Windows::Forms::Label());
  this->label3 = (gcnew System::Windows::Forms::Label());
  this->subjects_label = (gcnew System::Windows::Forms::Label());
  this->board_label = (gcnew System::Windows::Forms::Label());
  this->passport_expiry_date_label = (gcnew System::Windows::Forms::Label());
  this->passport_number_label = (gcnew System::Windows::Forms::Label());
  this->passport_issued_by_country_label = (gcnew System::Windows::Forms::Label());
  this->marks_label = (gcnew System::Windows::Forms::Label());
  this->year_of_passing_label = (gcnew System::Windows::Forms::Label());
  this->hostel_combobox = (gcnew System::Windows::Forms::ComboBox());
  this->dob_datetimepicker = (gcnew System::Windows::Forms::DateTimePicker());
  this->date_of_join_datetimepicker = (gcnew System::Windows::Forms::DateTimePicker());
  this->father_mobile_textbox = (gcnew System::Windows::Forms::TextBox());
  this->guardian_pincode_textbox = (gcnew System::Windows::Forms::TextBox());
  this->guardian_email_textbox = (gcnew System::Windows::Forms::TextBox());
  this->mother_mobile_textbox = (gcnew System::Windows::Forms::TextBox());
  this->mother_occupation_textbox = (gcnew System::Windows::Forms::TextBox());
  this->mother_name_textbox = (gcnew System::Windows::Forms::TextBox());
  this->mother_tongue_textbox = (gcnew System::Windows::Forms::TextBox());
  this->guardian_mobile_textbox = (gcnew System::Windows::Forms::TextBox());
  this->guardian_occupation_textbox = (gcnew System::Windows::Forms::TextBox());
  this->guardian_name_textbox = (gcnew System::Windows::Forms::TextBox());
  this->home_pincode_textbox = (gcnew System::Windows::Forms::TextBox());
  this->passport_number_textbox = (gcnew System::Windows::Forms::TextBox());
  this->passport_issued_by_country_textbox = (gcnew System::Windows::Forms::TextBox());
  this->height_textbox = (gcnew System::Windows::Forms::TextBox());
  this->weight_textbox = (gcnew System::Windows::Forms::TextBox());
  this->marks_textbox = (gcnew System::Windows::Forms::TextBox());
  this->subjects_textbox = (gcnew System::Windows::Forms::TextBox());
  this->board_textbox = (gcnew System::Windows::Forms::TextBox());
  this->aadhaar_number_textbox = (gcnew System::Windows::Forms::TextBox());
  this->year_of_passing_textbox = (gcnew System::Windows::Forms::TextBox());
  this->permanent_address_textbox = (gcnew System::Windows::Forms::RichTextBox());
  this->guardian_address_textbox = (gcnew System::Windows::Forms::RichTextBox());
  this->annual_income_combobox = (gcnew System::Windows::Forms::ComboBox());
  this->father_qualification_combobox = (gcnew System::Windows::Forms::ComboBox());
  this->mother_qualification_combobox = (gcnew System::Windows::Forms::ComboBox());
  this->guardian_combobox = (gcnew System::Windows::Forms::ComboBox());
  this->blood_group_combobox = (gcnew System::Windows::Forms::ComboBox());
  this->do_you_have_passport_combobox = (gcnew System::Windows::Forms::ComboBox());
  this->passport_expiry_datetimepicker = (gcnew System::Windows::Forms::DateTimePicker());
  this->save_btn = (gcnew System::Windows::Forms::Button());
  this->SuspendLayout();
  // 
  // hostel_label
  // 
  this->hostel_label->AutoSize = true;
  this->hostel_label->Location = System::Drawing::Point(54, 26);
  this->hostel_label->Name = L"hostel_label";
  this->hostel_label->Size = System::Drawing::Size(60, 17);
  this->hostel_label->TabIndex = 0;
  this->hostel_label->Text = L"Hostel : ";
  // 
  // father_occupation_label
  // 
  this->father_occupation_label->AutoSize = true;
  this->father_occupation_label->Location = System::Drawing::Point(54, 260);
  this->father_occupation_label->Name = L"father_occupation_label";
  this->father_occupation_label->Size = System::Drawing::Size(143, 17);
  this->father_occupation_label->TabIndex = 1;
  this->father_occupation_label->Text = L"Father\'s Occupation :";
  // 
  // father_qualification_label
  // 
  this->father_qualification_label->AutoSize = true;
  this->father_qualification_label->Location = System::Drawing::Point(53, 233);
  this->father_qualification_label->Name = L"father_qualification_label";
  this->father_qualification_label->Size = System::Drawing::Size(227, 17);
  this->father_qualification_label->TabIndex = 2;
  this->father_qualification_label->Text = L"Father\'s Educational Qualification :";
  // 
  // father_name_label
  // 
  this->father_name_label->AutoSize = true;
  this->father_name_label->Location = System::Drawing::Point(53, 202);
  this->father_name_label->Name = L"father_name_label";
  this->father_name_label->Size = System::Drawing::Size(108, 17);
  this->father_name_label->TabIndex = 3;
  this->father_name_label->Text = L"Father\'s Name :";
  // 
  // annual_family_income_label
  // 
  this->annual_family_income_label->AutoSize = true;
  this->annual_family_income_label->Location = System::Drawing::Point(603, 131);
  this->annual_family_income_label->Name = L"annual_family_income_label";
  this->annual_family_income_label->Size = System::Drawing::Size(153, 17);
  this->annual_family_income_label->TabIndex = 4;
  this->annual_family_income_label->Text = L"Annual Family Income :";
  // 
  // admission_session_label
  // 
  this->admission_session_label->AutoSize = true;
  this->admission_session_label->Location = System::Drawing::Point(603, 105);
  this->admission_session_label->Name = L"admission_session_label";
  this->admission_session_label->Size = System::Drawing::Size(138, 17);
  this->admission_session_label->TabIndex = 5;
  this->admission_session_label->Text = L"Admission Session : ";
  // 
  // alternate_email_label
  // 
  this->alternate_email_label->AutoSize = true;
  this->alternate_email_label->Location = System::Drawing::Point(603, 78);
  this->alternate_email_label->Name = L"alternate_email_label";
  this->alternate_email_label->Size = System::Drawing::Size(115, 17);
  this->alternate_email_label->TabIndex = 6;
  this->alternate_email_label->Text = L"Alternate Email : ";
  // 
  // emergency_contact_label
  // 
  this->emergency_contact_label->AutoSize = true;
  this->emergency_contact_label->Location = System::Drawing::Point(603, 48);
  this->emergency_contact_label->Name = L"emergency_contact_label";
  this->emergency_contact_label->Size = System::Drawing::Size(143, 17);
  this->emergency_contact_label->TabIndex = 7;
  this->emergency_contact_label->Text = L"Emergency Contact : ";
  // 
  // phone_label
  // 
  this->phone_label->AutoSize = true;
  this->phone_label->Location = System::Drawing::Point(603, 22);
  this->phone_label->Name = L"phone_label";
  this->phone_label->Size = System::Drawing::Size(194, 17);
  this->phone_label->TabIndex = 8;
  this->phone_label->Text = L"Your Mobile Phone Number : ";
  // 
  // date_of_join_label
  // 
  this->date_of_join_label->AutoSize = true;
  this->date_of_join_label->Location = System::Drawing::Point(54, 105);
  this->date_of_join_label->Name = L"date_of_join_label";
  this->date_of_join_label->Size = System::Drawing::Size(96, 17);
  this->date_of_join_label->TabIndex = 9;
  this->date_of_join_label->Text = L"Date of Join : ";
  // 
  // dob_label
  // 
  this->dob_label->AutoSize = true;
  this->dob_label->Location = System::Drawing::Point(54, 80);
  this->dob_label->Name = L"dob_label";
  this->dob_label->Size = System::Drawing::Size(50, 17);
  this->dob_label->TabIndex = 10;
  this->dob_label->Text = L"DOB : ";
  // 
  // room_label
  // 
  this->room_label->AutoSize = true;
  this->room_label->Location = System::Drawing::Point(54, 52);
  this->room_label->Name = L"room_label";
  this->room_label->Size = System::Drawing::Size(79, 17);
  this->room_label->TabIndex = 11;
  this->room_label->Text = L"Room No : ";
  // 
  // nature_of_disability_label
  // 
  this->nature_of_disability_label->AutoSize = true;
  this->nature_of_disability_label->Location = System::Drawing::Point(54, 131);
  this->nature_of_disability_label->Name = L"nature_of_disability_label";
  this->nature_of_disability_label->Size = System::Drawing::Size(139, 17);
  this->nature_of_disability_label->TabIndex = 12;
  this->nature_of_disability_label->Text = L"Nature of Disability : ";
  // 
  // guardian_mobile_label
  // 
  this->guardian_mobile_label->AutoSize = true;
  this->guardian_mobile_label->Location = System::Drawing::Point(54, 409);
  this->guardian_mobile_label->Name = L"guardian_mobile_label";
  this->guardian_mobile_label->Size = System::Drawing::Size(229, 17);
  this->guardian_mobile_label->TabIndex = 13;
  this->guardian_mobile_label->Text = L"Guardian\'s Mobile Phone Number :";
  // 
  // guardian_occupation_label
  // 
  this->guardian_occupation_label->AutoSize = true;
  this->guardian_occupation_label->Location = System::Drawing::Point(54, 382);
  this->guardian_occupation_label->Name = L"guardian_occupation_label";
  this->guardian_occupation_label->Size = System::Drawing::Size(161, 17);
  this->guardian_occupation_label->TabIndex = 14;
  this->guardian_occupation_label->Text = L"Guardian\'s Occupation :";
  // 
  // guardian_name_label
  // 
  this->guardian_name_label->AutoSize = true;
  this->guardian_name_label->Location = System::Drawing::Point(54, 354);
  this->guardian_name_label->Name = L"guardian_name_label";
  this->guardian_name_label->Size = System::Drawing::Size(126, 17);
  this->guardian_name_label->TabIndex = 15;
  this->guardian_name_label->Text = L"Guardian\'s Name :";
  // 
  // guardian_label
  // 
  this->guardian_label->AutoSize = true;
  this->guardian_label->Location = System::Drawing::Point(54, 327);
  this->guardian_label->Name = L"guardian_label";
  this->guardian_label->Size = System::Drawing::Size(75, 17);
  this->guardian_label->TabIndex = 16;
  this->guardian_label->Text = L"Guardian :";
  // 
  // mother_mobile_label
  // 
  this->mother_mobile_label->AutoSize = true;
  this->mother_mobile_label->Location = System::Drawing::Point(603, 283);
  this->mother_mobile_label->Name = L"mother_mobile_label";
  this->mother_mobile_label->Size = System::Drawing::Size(214, 17);
  this->mother_mobile_label->TabIndex = 17;
  this->mother_mobile_label->Text = L"Mother\'s Mobile Phone Number :";
  // 
  // mother_occupation_label
  // 
  this->mother_occupation_label->AutoSize = true;
  this->mother_occupation_label->Location = System::Drawing::Point(603, 256);
  this->mother_occupation_label->Name = L"mother_occupation_label";
  this->mother_occupation_label->Size = System::Drawing::Size(146, 17);
  this->mother_occupation_label->TabIndex = 18;
  this->mother_occupation_label->Text = L"Mother\'s Occupation :";
  // 
  // mother_qualification_label
  // 
  this->mother_qualification_label->AutoSize = true;
  this->mother_qualification_label->Location = System::Drawing::Point(603, 226);
  this->mother_qualification_label->Name = L"mother_qualification_label";
  this->mother_qualification_label->Size = System::Drawing::Size(230, 17);
  this->mother_qualification_label->TabIndex = 19;
  this->mother_qualification_label->Text = L"Mother\'s Educational Qualification :";
  // 
  // mother_name_label
  // 
  this->mother_name_label->AutoSize = true;
  this->mother_name_label->Location = System::Drawing::Point(603, 198);
  this->mother_name_label->Name = L"mother_name_label";
  this->mother_name_label->Size = System::Drawing::Size(111, 17);
  this->mother_name_label->TabIndex = 20;
  this->mother_name_label->Text = L"Mother\'s Name :";
  // 
  // father_mobile_label
  // 
  this->father_mobile_label->AutoSize = true;
  this->father_mobile_label->Location = System::Drawing::Point(54, 288);
  this->father_mobile_label->Name = L"father_mobile_label";
  this->father_mobile_label->Size = System::Drawing::Size(211, 17);
  this->father_mobile_label->TabIndex = 21;
  this->father_mobile_label->Text = L"Father\'s Mobile Phone Number :";
  // 
  // percentage_disability_label
  // 
  this->percentage_disability_label->AutoSize = true;
  this->percentage_disability_label->Location = System::Drawing::Point(54, 159);
  this->percentage_disability_label->Name = L"percentage_disability_label";
  this->percentage_disability_label->Size = System::Drawing::Size(210, 17);
  this->percentage_disability_label->TabIndex = 22;
  this->percentage_disability_label->Text = L"Percentage Of Disability (PwD) :";
  // 
  // father_name_textbox
  // 
  this->father_name_textbox->Location = System::Drawing::Point(286, 199);
  this->father_name_textbox->Name = L"father_name_textbox";
  this->father_name_textbox->Size = System::Drawing::Size(235, 22);
  this->father_name_textbox->TabIndex = 23;
  this->father_name_textbox->Visible = false;
  // 
  // percentage_of_disability_textbox
  // 
  this->percentage_of_disability_textbox->Location = System::Drawing::Point(286, 156);
  this->percentage_of_disability_textbox->Name = L"percentage_of_disability_textbox";
  this->percentage_of_disability_textbox->ReadOnly = true;
  this->percentage_of_disability_textbox->Size = System::Drawing::Size(235, 22);
  this->percentage_of_disability_textbox->TabIndex = 24;
  // 
  // admission_session_textbox
  // 
  this->admission_session_textbox->Location = System::Drawing::Point(843, 100);
  this->admission_session_textbox->Name = L"admission_session_textbox";
  this->admission_session_textbox->Size = System::Drawing::Size(306, 22);
  this->admission_session_textbox->TabIndex = 26;
  // 
  // alternate_email_textbox
  // 
  this->alternate_email_textbox->Location = System::Drawing::Point(843, 75);
  this->alternate_email_textbox->Name = L"alternate_email_textbox";
  this->alternate_email_textbox->Size = System::Drawing::Size(306, 22);
  this->alternate_email_textbox->TabIndex = 27;
  // 
  // emergency_contact_textbox
  // 
  this->emergency_contact_textbox->Location = System::Drawing::Point(843, 47);
  this->emergency_contact_textbox->Name = L"emergency_contact_textbox";
  this->emergency_contact_textbox->Size = System::Drawing::Size(306, 22);
  this->emergency_contact_textbox->TabIndex = 28;
  // 
  // mobile_textbox
  // 
  this->mobile_textbox->Location = System::Drawing::Point(843, 23);
  this->mobile_textbox->Name = L"mobile_textbox";
  this->mobile_textbox->Size = System::Drawing::Size(306, 22);
  this->mobile_textbox->TabIndex = 29;
  // 
  // nature_of_disability_textbox
  // 
  this->nature_of_disability_textbox->Location = System::Drawing::Point(286, 128);
  this->nature_of_disability_textbox->Name = L"nature_of_disability_textbox";
  this->nature_of_disability_textbox->ReadOnly = true;
  this->nature_of_disability_textbox->Size = System::Drawing::Size(235, 22);
  this->nature_of_disability_textbox->TabIndex = 30;
  // 
  // father_occupation_combobox
  // 
  this->father_occupation_combobox->Location = System::Drawing::Point(286, 257);
  this->father_occupation_combobox->Name = L"father_occupation_combobox";
  this->father_occupation_combobox->Size = System::Drawing::Size(235, 22);
  this->father_occupation_combobox->TabIndex = 31;
  // 
  // room_textbox
  // 
  this->room_textbox->Location = System::Drawing::Point(286, 47);
  this->room_textbox->Name = L"room_textbox";
  this->room_textbox->Size = System::Drawing::Size(235, 22);
  this->room_textbox->TabIndex = 33;
  // 
  // edit_btn
  // 
  this->edit_btn->Location = System::Drawing::Point(1143, 720);
  this->edit_btn->Name = L"edit_btn";
  this->edit_btn->Size = System::Drawing::Size(75, 23);
  this->edit_btn->TabIndex = 34;
  this->edit_btn->Text = L"EDIT";
  this->edit_btn->UseVisualStyleBackColor = true;
  this->edit_btn->Click += gcnew System::EventHandler(this, &additional_details::edit_btn_Click);
  // 
  // guardian_address_label
  // 
  this->guardian_address_label->AutoSize = true;
  this->guardian_address_label->Location = System::Drawing::Point(603, 382);
  this->guardian_address_label->Name = L"guardian_address_label";
  this->guardian_address_label->Size = System::Drawing::Size(141, 17);
  this->guardian_address_label->TabIndex = 35;
  this->guardian_address_label->Text = L"Guardian\'s Address :";
  // 
  // guardian_pincode
  // 
  this->guardian_pincode->AutoSize = true;
  this->guardian_pincode->Location = System::Drawing::Point(603, 354);
  this->guardian_pincode->Name = L"guardian_pincode";
  this->guardian_pincode->Size = System::Drawing::Size(140, 17);
  this->guardian_pincode->TabIndex = 36;
  this->guardian_pincode->Text = L"Guardian\'s Pincode :";
  // 
  // mother_tongue_label
  // 
  this->mother_tongue_label->AutoSize = true;
  this->mother_tongue_label->Location = System::Drawing::Point(54, 452);
  this->mother_tongue_label->Name = L"mother_tongue_label";
  this->mother_tongue_label->Size = System::Drawing::Size(113, 17);
  this->mother_tongue_label->TabIndex = 37;
  this->mother_tongue_label->Text = L"Mother Tongue :";
  // 
  // height_label
  // 
  this->height_label->AutoSize = true;
  this->height_label->Location = System::Drawing::Point(54, 548);
  this->height_label->Name = L"height_label";
  this->height_label->Size = System::Drawing::Size(108, 17);
  this->height_label->TabIndex = 38;
  this->height_label->Text = L"Height (in cm) : ";
  // 
  // weight_label
  // 
  this->weight_label->AutoSize = true;
  this->weight_label->Location = System::Drawing::Point(54, 512);
  this->weight_label->Name = L"weight_label";
  this->weight_label->Size = System::Drawing::Size(106, 17);
  this->weight_label->TabIndex = 39;
  this->weight_label->Text = L"Weight (in Kg) :";
  // 
  // home_pincode_label
  // 
  this->home_pincode_label->AutoSize = true;
  this->home_pincode_label->Location = System::Drawing::Point(603, 452);
  this->home_pincode_label->Name = L"home_pincode_label";
  this->home_pincode_label->Size = System::Drawing::Size(108, 17);
  this->home_pincode_label->TabIndex = 40;
  this->home_pincode_label->Text = L"Home Pincode :";
  // 
  // aadhaar_number_label
  // 
  this->aadhaar_number_label->AutoSize = true;
  this->aadhaar_number_label->Location = System::Drawing::Point(603, 483);
  this->aadhaar_number_label->Name = L"aadhaar_number_label";
  this->aadhaar_number_label->Size = System::Drawing::Size(124, 17);
  this->aadhaar_number_label->TabIndex = 41;
  this->aadhaar_number_label->Text = L"Aadhaar Number :";
  // 
  // do_you_have_passport_label
  // 
  this->do_you_have_passport_label->AutoSize = true;
  this->do_you_have_passport_label->Location = System::Drawing::Point(54, 589);
  this->do_you_have_passport_label->Name = L"do_you_have_passport_label";
  this->do_you_have_passport_label->Size = System::Drawing::Size(156, 17);
  this->do_you_have_passport_label->TabIndex = 42;
  this->do_you_have_passport_label->Text = L"Do you have Passport :";
  // 
  // blood_group_label
  // 
  this->blood_group_label->AutoSize = true;
  this->blood_group_label->Location = System::Drawing::Point(54, 483);
  this->blood_group_label->Name = L"blood_group_label";
  this->blood_group_label->Size = System::Drawing::Size(96, 17);
  this->blood_group_label->TabIndex = 43;
  this->blood_group_label->Text = L"Blood Group :";
  // 
  // guardian_email_label
  // 
  this->guardian_email_label->AutoSize = true;
  this->guardian_email_label->Location = System::Drawing::Point(604, 323);
  this->guardian_email_label->Name = L"guardian_email_label";
  this->guardian_email_label->Size = System::Drawing::Size(123, 17);
  this->guardian_email_label->TabIndex = 44;
  this->guardian_email_label->Text = L"Guardian\'s Email :";
  // 
  // permanent_address_label
  // 
  this->permanent_address_label->AutoSize = true;
  this->permanent_address_label->Location = System::Drawing::Point(603, 512);
  this->permanent_address_label->Name = L"permanent_address_label";
  this->permanent_address_label->Size = System::Drawing::Size(141, 17);
  this->permanent_address_label->TabIndex = 45;
  this->permanent_address_label->Text = L"Permanent Address :";
  // 
  // label3
  // 
  this->label3->AutoSize = true;
  this->label3->Location = System::Drawing::Point(88, 619);
  this->label3->Name = L"label3";
  this->label3->Size = System::Drawing::Size(0, 17);
  this->label3->TabIndex = 48;
  // 
  // subjects_label
  // 
  this->subjects_label->AutoSize = true;
  this->subjects_label->Location = System::Drawing::Point(603, 619);
  this->subjects_label->Name = L"subjects_label";
  this->subjects_label->Size = System::Drawing::Size(193, 17);
  this->subjects_label->TabIndex = 49;
  this->subjects_label->Text = L"Class 12th or Equi. Subjects :";
  // 
  // board_label
  // 
  this->board_label->AutoSize = true;
  this->board_label->Location = System::Drawing::Point(603, 589);
  this->board_label->Name = L"board_label";
  this->board_label->Size = System::Drawing::Size(177, 17);
  this->board_label->TabIndex = 50;
  this->board_label->Text = L"Class 12th or Equi. Board :";
  // 
  // passport_expiry_date_label
  // 
  this->passport_expiry_date_label->AutoSize = true;
  this->passport_expiry_date_label->Location = System::Drawing::Point(54, 683);
  this->passport_expiry_date_label->Name = L"passport_expiry_date_label";
  this->passport_expiry_date_label->Size = System::Drawing::Size(148, 17);
  this->passport_expiry_date_label->TabIndex = 51;
  this->passport_expiry_date_label->Text = L"Passport Expiry Date :";
  // 
  // passport_number_label
  // 
  this->passport_number_label->AutoSize = true;
  this->passport_number_label->Location = System::Drawing::Point(54, 652);
  this->passport_number_label->Name = L"passport_number_label";
  this->passport_number_label->Size = System::Drawing::Size(126, 17);
  this->passport_number_label->TabIndex = 52;
  this->passport_number_label->Text = L"Passport Number :";
  // 
  // passport_issued_by_country_label
  // 
  this->passport_issued_by_country_label->AutoSize = true;
  this->passport_issued_by_country_label->Location = System::Drawing::Point(54, 619);
  this->passport_issued_by_country_label->Name = L"passport_issued_by_country_label";
  this->passport_issued_by_country_label->Size = System::Drawing::Size(189, 17);
  this->passport_issued_by_country_label->TabIndex = 53;
  this->passport_issued_by_country_label->Text = L"Passport issued by Country :";
  // 
  // marks_label
  // 
  this->marks_label->AutoSize = true;
  this->marks_label->Location = System::Drawing::Point(603, 652);
  this->marks_label->Name = L"marks_label";
  this->marks_label->Size = System::Drawing::Size(228, 17);
  this->marks_label->TabIndex = 54;
  this->marks_label->Text = L"Class 12th or Equi. (%/CGPA/CPI) :";
  // 
  // year_of_passing_label
  // 
  this->year_of_passing_label->AutoSize = true;
  this->year_of_passing_label->Location = System::Drawing::Point(603, 683);
  this->year_of_passing_label->Name = L"year_of_passing_label";
  this->year_of_passing_label->Size = System::Drawing::Size(239, 17);
  this->year_of_passing_label->TabIndex = 55;
  this->year_of_passing_label->Text = L"Class 12th or Equi. Year of Passing :";
  // 
  // hostel_combobox
  // 
  this->hostel_combobox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
  this->hostel_combobox->FormattingEnabled = true;
  this->hostel_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(15) {L"Non-Hosteller", L"Dihing", L"Manas", L"Kapili", 
   L"Brahmaputra", L"Siang", L"Dibang", L"Umiam", L"Barak", L"Kameng", L"Married Scholars", L"Subhansiri", L"Dhansiri", L"Lohit", 
   L"A-Type"});
  this->hostel_combobox->Location = System::Drawing::Point(286, 17);
  this->hostel_combobox->Name = L"hostel_combobox";
  this->hostel_combobox->Size = System::Drawing::Size(235, 24);
  this->hostel_combobox->TabIndex = 56;
  // 
  // dob_datetimepicker
  // 
  this->dob_datetimepicker->CustomFormat = L"dd-MM-yyyy";
  this->dob_datetimepicker->Enabled = false;
  this->dob_datetimepicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
  this->dob_datetimepicker->Location = System::Drawing::Point(286, 75);
  this->dob_datetimepicker->Name = L"dob_datetimepicker";
  this->dob_datetimepicker->Size = System::Drawing::Size(235, 22);
  this->dob_datetimepicker->TabIndex = 57;
  // 
  // date_of_join_datetimepicker
  // 
  this->date_of_join_datetimepicker->CustomFormat = L"dd-MM-yyyy";
  this->date_of_join_datetimepicker->Enabled = false;
  this->date_of_join_datetimepicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
  this->date_of_join_datetimepicker->Location = System::Drawing::Point(286, 100);
  this->date_of_join_datetimepicker->Name = L"date_of_join_datetimepicker";
  this->date_of_join_datetimepicker->Size = System::Drawing::Size(235, 22);
  this->date_of_join_datetimepicker->TabIndex = 58;
  // 
  // father_mobile_textbox
  // 
  this->father_mobile_textbox->Location = System::Drawing::Point(286, 285);
  this->father_mobile_textbox->Name = L"father_mobile_textbox";
  this->father_mobile_textbox->Size = System::Drawing::Size(235, 22);
  this->father_mobile_textbox->TabIndex = 59;
  // 
  // guardian_pincode_textbox
  // 
  this->guardian_pincode_textbox->Location = System::Drawing::Point(843, 351);
  this->guardian_pincode_textbox->Name = L"guardian_pincode_textbox";
  this->guardian_pincode_textbox->Size = System::Drawing::Size(306, 22);
  this->guardian_pincode_textbox->TabIndex = 60;
  // 
  // guardian_email_textbox
  // 
  this->guardian_email_textbox->Location = System::Drawing::Point(843, 320);
  this->guardian_email_textbox->Name = L"guardian_email_textbox";
  this->guardian_email_textbox->Size = System::Drawing::Size(306, 22);
  this->guardian_email_textbox->TabIndex = 61;
  // 
  // mother_mobile_textbox
  // 
  this->mother_mobile_textbox->Location = System::Drawing::Point(843, 278);
  this->mother_mobile_textbox->Name = L"mother_mobile_textbox";
  this->mother_mobile_textbox->Size = System::Drawing::Size(306, 22);
  this->mother_mobile_textbox->TabIndex = 62;
  // 
  // mother_occupation_textbox
  // 
  this->mother_occupation_textbox->Location = System::Drawing::Point(843, 251);
  this->mother_occupation_textbox->Name = L"mother_occupation_textbox";
  this->mother_occupation_textbox->Size = System::Drawing::Size(306, 22);
  this->mother_occupation_textbox->TabIndex = 63;
  // 
  // mother_name_textbox
  // 
  this->mother_name_textbox->Location = System::Drawing::Point(843, 195);
  this->mother_name_textbox->Name = L"mother_name_textbox";
  this->mother_name_textbox->Size = System::Drawing::Size(306, 22);
  this->mother_name_textbox->TabIndex = 65;
  // 
  // mother_tongue_textbox
  // 
  this->mother_tongue_textbox->Location = System::Drawing::Point(286, 449);
  this->mother_tongue_textbox->Name = L"mother_tongue_textbox";
  this->mother_tongue_textbox->Size = System::Drawing::Size(235, 22);
  this->mother_tongue_textbox->TabIndex = 67;
  // 
  // guardian_mobile_textbox
  // 
  this->guardian_mobile_textbox->Location = System::Drawing::Point(286, 406);
  this->guardian_mobile_textbox->Name = L"guardian_mobile_textbox";
  this->guardian_mobile_textbox->Size = System::Drawing::Size(235, 22);
  this->guardian_mobile_textbox->TabIndex = 68;
  // 
  // guardian_occupation_textbox
  // 
  this->guardian_occupation_textbox->Location = System::Drawing::Point(286, 379);
  this->guardian_occupation_textbox->Name = L"guardian_occupation_textbox";
  this->guardian_occupation_textbox->Size = System::Drawing::Size(235, 22);
  this->guardian_occupation_textbox->TabIndex = 69;
  // 
  // guardian_name_textbox
  // 
  this->guardian_name_textbox->Location = System::Drawing::Point(286, 351);
  this->guardian_name_textbox->Name = L"guardian_name_textbox";
  this->guardian_name_textbox->Size = System::Drawing::Size(235, 22);
  this->guardian_name_textbox->TabIndex = 70;
  // 
  // home_pincode_textbox
  // 
  this->home_pincode_textbox->Location = System::Drawing::Point(843, 449);
  this->home_pincode_textbox->Name = L"home_pincode_textbox";
  this->home_pincode_textbox->Size = System::Drawing::Size(306, 22);
  this->home_pincode_textbox->TabIndex = 72;
  // 
  // passport_number_textbox
  // 
  this->passport_number_textbox->Location = System::Drawing::Point(286, 649);
  this->passport_number_textbox->Name = L"passport_number_textbox";
  this->passport_number_textbox->ReadOnly = true;
  this->passport_number_textbox->Size = System::Drawing::Size(235, 22);
  this->passport_number_textbox->TabIndex = 74;
  // 
  // passport_issued_by_country_textbox
  // 
  this->passport_issued_by_country_textbox->Location = System::Drawing::Point(286, 616);
  this->passport_issued_by_country_textbox->Name = L"passport_issued_by_country_textbox";
  this->passport_issued_by_country_textbox->ReadOnly = true;
  this->passport_issued_by_country_textbox->Size = System::Drawing::Size(235, 22);
  this->passport_issued_by_country_textbox->TabIndex = 75;
  // 
  // height_textbox
  // 
  this->height_textbox->Location = System::Drawing::Point(286, 545);
  this->height_textbox->Name = L"height_textbox";
  this->height_textbox->ReadOnly = true;
  this->height_textbox->Size = System::Drawing::Size(235, 22);
  this->height_textbox->TabIndex = 77;
  // 
  // weight_textbox
  // 
  this->weight_textbox->Location = System::Drawing::Point(286, 509);
  this->weight_textbox->Name = L"weight_textbox";
  this->weight_textbox->ReadOnly = true;
  this->weight_textbox->Size = System::Drawing::Size(235, 22);
  this->weight_textbox->TabIndex = 78;
  // 
  // marks_textbox
  // 
  this->marks_textbox->Location = System::Drawing::Point(843, 649);
  this->marks_textbox->Name = L"marks_textbox";
  this->marks_textbox->ReadOnly = true;
  this->marks_textbox->Size = System::Drawing::Size(306, 22);
  this->marks_textbox->TabIndex = 79;
  // 
  // subjects_textbox
  // 
  this->subjects_textbox->Location = System::Drawing::Point(843, 616);
  this->subjects_textbox->Name = L"subjects_textbox";
  this->subjects_textbox->ReadOnly = true;
  this->subjects_textbox->Size = System::Drawing::Size(306, 22);
  this->subjects_textbox->TabIndex = 80;
  // 
  // board_textbox
  // 
  this->board_textbox->Location = System::Drawing::Point(843, 586);
  this->board_textbox->Name = L"board_textbox";
  this->board_textbox->ReadOnly = true;
  this->board_textbox->Size = System::Drawing::Size(306, 22);
  this->board_textbox->TabIndex = 81;
  // 
  // aadhaar_number_textbox
  // 
  this->aadhaar_number_textbox->Location = System::Drawing::Point(843, 480);
  this->aadhaar_number_textbox->Name = L"aadhaar_number_textbox";
  this->aadhaar_number_textbox->ReadOnly = true;
  this->aadhaar_number_textbox->Size = System::Drawing::Size(306, 22);
  this->aadhaar_number_textbox->TabIndex = 82;
  // 
  // year_of_passing_textbox
  // 
  this->year_of_passing_textbox->Location = System::Drawing::Point(843, 680);
  this->year_of_passing_textbox->Name = L"year_of_passing_textbox";
  this->year_of_passing_textbox->ReadOnly = true;
  this->year_of_passing_textbox->Size = System::Drawing::Size(306, 22);
  this->year_of_passing_textbox->TabIndex = 83;
  // 
  // permanent_address_textbox
  // 
  this->permanent_address_textbox->Location = System::Drawing::Point(843, 509);
  this->permanent_address_textbox->Name = L"permanent_address_textbox";
  this->permanent_address_textbox->Size = System::Drawing::Size(306, 56);
  this->permanent_address_textbox->TabIndex = 84;
  this->permanent_address_textbox->Text = L"";
  // 
  // guardian_address_textbox
  // 
  this->guardian_address_textbox->Location = System::Drawing::Point(843, 379);
  this->guardian_address_textbox->Name = L"guardian_address_textbox";
  this->guardian_address_textbox->Size = System::Drawing::Size(306, 56);
  this->guardian_address_textbox->TabIndex = 85;
  this->guardian_address_textbox->Text = L"";
  // 
  // annual_income_combobox
  // 
  this->annual_income_combobox->FormattingEnabled = true;
  this->annual_income_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Less Than 1 Lakh", L"Between 1 Lakh to 5 Lakh", 
   L"Between 5 Lakh to 6 Lakh", L"Between 6 Lakh to 8 Lakh", L"Above 8 Lakh"});
  this->annual_income_combobox->Location = System::Drawing::Point(843, 129);
  this->annual_income_combobox->Name = L"annual_income_combobox";
  this->annual_income_combobox->Size = System::Drawing::Size(306, 24);
  this->annual_income_combobox->TabIndex = 86;
  // 
  // father_qualification_combobox
  // 
  this->father_qualification_combobox->FormattingEnabled = true;
  this->father_qualification_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"School level", L"Diploma", 
   L"Bachelors Degree", L"Masters Degree", L"PhD Degree", L"Others"});
  this->father_qualification_combobox->Location = System::Drawing::Point(286, 230);
  this->father_qualification_combobox->Name = L"father_qualification_combobox";
  this->father_qualification_combobox->Size = System::Drawing::Size(235, 24);
  this->father_qualification_combobox->TabIndex = 87;
  // 
  // mother_qualification_combobox
  // 
  this->mother_qualification_combobox->FormattingEnabled = true;
  this->mother_qualification_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"School level", L"Diploma", 
   L"Bachelors Degree", L"Masters Degree", L"PhD Degree", L"Others"});
  this->mother_qualification_combobox->Location = System::Drawing::Point(843, 223);
  this->mother_qualification_combobox->Name = L"mother_qualification_combobox";
  this->mother_qualification_combobox->Size = System::Drawing::Size(306, 24);
  this->mother_qualification_combobox->TabIndex = 88;
  // 
  // guardian_combobox
  // 
  this->guardian_combobox->FormattingEnabled = true;
  this->guardian_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Father", L"Mother", L"Other"});
  this->guardian_combobox->Location = System::Drawing::Point(286, 324);
  this->guardian_combobox->Name = L"guardian_combobox";
  this->guardian_combobox->Size = System::Drawing::Size(235, 24);
  this->guardian_combobox->TabIndex = 89;
  // 
  // blood_group_combobox
  // 
  this->blood_group_combobox->FormattingEnabled = true;
  this->blood_group_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"A+", L"A-", L"B+", L"B-", L"O+", L"O-", 
   L"AB+", L"AB-"});
  this->blood_group_combobox->Location = System::Drawing::Point(286, 478);
  this->blood_group_combobox->Name = L"blood_group_combobox";
  this->blood_group_combobox->Size = System::Drawing::Size(235, 24);
  this->blood_group_combobox->TabIndex = 90;
  // 
  // do_you_have_passport_combobox
  // 
  this->do_you_have_passport_combobox->FormattingEnabled = true;
  this->do_you_have_passport_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"YES", L"NO"});
  this->do_you_have_passport_combobox->Location = System::Drawing::Point(286, 586);
  this->do_you_have_passport_combobox->Name = L"do_you_have_passport_combobox";
  this->do_you_have_passport_combobox->Size = System::Drawing::Size(235, 24);
  this->do_you_have_passport_combobox->TabIndex = 91;
  // 
  // passport_expiry_datetimepicker
  // 
  this->passport_expiry_datetimepicker->CustomFormat = L"dd-MM-yyyy";
  this->passport_expiry_datetimepicker->Enabled = false;
  this->passport_expiry_datetimepicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
  this->passport_expiry_datetimepicker->Location = System::Drawing::Point(286, 680);
  this->passport_expiry_datetimepicker->Name = L"passport_expiry_datetimepicker";
  this->passport_expiry_datetimepicker->Size = System::Drawing::Size(235, 22);
  this->passport_expiry_datetimepicker->TabIndex = 92;
  // 
  // save_btn
  // 
  this->save_btn->Location = System::Drawing::Point(1021, 720);
  this->save_btn->Name = L"save_btn";
  this->save_btn->Size = System::Drawing::Size(75, 23);
  this->save_btn->TabIndex = 93;
  this->save_btn->Text = L"SAVE";
  this->save_btn->UseVisualStyleBackColor = true;
  this->save_btn->Click += gcnew System::EventHandler(this, &additional_details::save_btn_Click);
  // 
  // additional_details
  // 
  this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
  this->AutoScroll = true;
  this->ClientSize = System::Drawing::Size(1288, 755);
  this->Controls->Add(this->save_btn);
  this->Controls->Add(this->passport_expiry_datetimepicker);
  this->Controls->Add(this->do_you_have_passport_combobox);
  this->Controls->Add(this->blood_group_combobox);
  this->Controls->Add(this->guardian_combobox);
  this->Controls->Add(this->mother_qualification_combobox);
  this->Controls->Add(this->father_qualification_combobox);
  this->Controls->Add(this->annual_income_combobox);
  this->Controls->Add(this->guardian_address_textbox);
  this->Controls->Add(this->permanent_address_textbox);
  this->Controls->Add(this->year_of_passing_textbox);
  this->Controls->Add(this->aadhaar_number_textbox);
  this->Controls->Add(this->board_textbox);
  this->Controls->Add(this->subjects_textbox);
  this->Controls->Add(this->marks_textbox);
  this->Controls->Add(this->weight_textbox);
  this->Controls->Add(this->height_textbox);
  this->Controls->Add(this->passport_issued_by_country_textbox);
  this->Controls->Add(this->passport_number_textbox);
  this->Controls->Add(this->home_pincode_textbox);
  this->Controls->Add(this->guardian_name_textbox);
  this->Controls->Add(this->guardian_occupation_textbox);
  this->Controls->Add(this->guardian_mobile_textbox);
  this->Controls->Add(this->mother_tongue_textbox);
  this->Controls->Add(this->mother_name_textbox);
  this->Controls->Add(this->mother_occupation_textbox);
  this->Controls->Add(this->mother_mobile_textbox);
  this->Controls->Add(this->guardian_email_textbox);
  this->Controls->Add(this->guardian_pincode_textbox);
  this->Controls->Add(this->father_mobile_textbox);
  this->Controls->Add(this->date_of_join_datetimepicker);
  this->Controls->Add(this->dob_datetimepicker);
  this->Controls->Add(this->hostel_combobox);
  this->Controls->Add(this->year_of_passing_label);
  this->Controls->Add(this->marks_label);
  this->Controls->Add(this->passport_issued_by_country_label);
  this->Controls->Add(this->passport_number_label);
  this->Controls->Add(this->passport_expiry_date_label);
  this->Controls->Add(this->board_label);
  this->Controls->Add(this->subjects_label);
  this->Controls->Add(this->label3);
  this->Controls->Add(this->permanent_address_label);
  this->Controls->Add(this->guardian_email_label);
  this->Controls->Add(this->blood_group_label);
  this->Controls->Add(this->do_you_have_passport_label);
  this->Controls->Add(this->aadhaar_number_label);
  this->Controls->Add(this->home_pincode_label);
  this->Controls->Add(this->weight_label);
  this->Controls->Add(this->height_label);
  this->Controls->Add(this->mother_tongue_label);
  this->Controls->Add(this->guardian_pincode);
  this->Controls->Add(this->guardian_address_label);
  this->Controls->Add(this->edit_btn);
  this->Controls->Add(this->room_textbox);
  this->Controls->Add(this->father_occupation_combobox);
  this->Controls->Add(this->nature_of_disability_textbox);
  this->Controls->Add(this->mobile_textbox);
  this->Controls->Add(this->emergency_contact_textbox);
  this->Controls->Add(this->alternate_email_textbox);
  this->Controls->Add(this->admission_session_textbox);
  this->Controls->Add(this->percentage_of_disability_textbox);
  this->Controls->Add(this->father_name_textbox);
  this->Controls->Add(this->percentage_disability_label);
  this->Controls->Add(this->father_mobile_label);
  this->Controls->Add(this->mother_name_label);
  this->Controls->Add(this->mother_qualification_label);
  this->Controls->Add(this->mother_occupation_label);
  this->Controls->Add(this->mother_mobile_label);
  this->Controls->Add(this->guardian_label);
  this->Controls->Add(this->guardian_name_label);
  this->Controls->Add(this->guardian_occupation_label);
  this->Controls->Add(this->guardian_mobile_label);
  this->Controls->Add(this->nature_of_disability_label);
  this->Controls->Add(this->room_label);
  this->Controls->Add(this->dob_label);
  this->Controls->Add(this->date_of_join_label);
  this->Controls->Add(this->phone_label);
  this->Controls->Add(this->emergency_contact_label);
  this->Controls->Add(this->alternate_email_label);
  this->Controls->Add(this->admission_session_label);
  this->Controls->Add(this->annual_family_income_label);
  this->Controls->Add(this->father_name_label);
  this->Controls->Add(this->father_qualification_label);
  this->Controls->Add(this->father_occupation_label);
  this->Controls->Add(this->hostel_label);
  this->Margin = System::Windows::Forms::Padding(4);
  this->Name = L"additional_details";
  this->Text = L"additional_details";
  this->Load += gcnew System::EventHandler(this, &additional_details::additional_details_Load);
  this->ResumeLayout(false);
  this->PerformLayout();

 }
#pragma endregion

 static String ^hostel="manas";
 static String ^room="C-110";
 static String ^dob="04-07-1999";
 static String ^dateofjoin="23-07-2017";
 static String ^natureofdisability;
 static String ^percentageofdisability;
 static String ^mobileno;
 static String ^emergencycontact;
 static String ^alternateemail;
 static String ^admissionsession;
 static String ^annualincome;
 static String ^fathername;
 static String ^fatheroccupation;
 static String ^fathermobileno;
 static String ^fatherqualification;
 static String ^mothername;
 static String ^motherqualification;
 static String ^motheroccupation;
 static String ^mothermobileno;
 static String ^guardian;
 static String ^guardianname;
 static String ^guardianoccupation;
 static String ^guardianmobileno;
 static String ^guardianpincode;
 static String ^guardianemail;
 static String ^guardianaddress;
 static String ^mothertongue;
 static String ^bloodgroup;
 static String ^weight;
 static String ^height;
 static String ^doyouhavepassport;
 static String ^passportissuedbycountry;
 static String ^passportno;
 static String ^passportexpiry;
 static String ^homepincode;
 static String ^aadhaarno;
 static String ^permanentaddress;
 static String ^board;
 static String ^subjects;
 static String ^marks;
 static String ^yearofpassing;

 void resetlabels()
 {
  hostel_label->Text = "Hostel : ";
  room_label->Text = "Room No. : ";
  dob_label->Text= "DOB : ";
  date_of_join_label->Text = "Date of Join : ";
  nature_of_disability_label->Text = "Nature of Disability : ";
  percentage_disability_label->Text= "Percentage of Disability (PwD) : ";
  phone_label->Text = "Your Mobile Phone Number : ";
  emergency_contact_label->Text = "Emergency Contact : ";
  alternate_email_label->Text = "Alternate Email : ";
  admission_session_label ->Text= "Admission Session : ";
  annual_family_income_label ->Text= "Annual Family Income : ";
  father_name_label->Text = "Father's Name : ";
  father_occupation_label->Text = "Father's Occupation : ";
  father_mobile_label->Text = "Father's Mobile Phone Number : ";
  father_qualification_label->Text="Father's Educational Qualification : ";
  mother_name_label->Text= "Mother's Name : ";
  mother_qualification_label->Text = "Mother's Educational Qualification : ";
  mother_occupation_label->Text= "Mother's Occupation : ";
  mother_mobile_label->Text = "Mother's Mobile Phone Number : ";
  guardian_label->Text = "Guardian : ";
  guardian_name_label->Text = "Guardian's Name : ";
  guardian_occupation_label->Text = "Guardian's Occupation : " ;
  guardian_mobile_label->Text = "Guardian's Mobile Phone Number : ";
  guardian_pincode->Text = "Guardian's Pincode : ";
  guardian_email_label ->Text= "Guardian's Email : ";
  guardian_address_label->Text = "Guardian's Address : ";
  mother_tongue_label->Text = "Mother Tongue : ";
  blood_group_label->Text = "Blood Group : " ;
  weight_label->Text = "Weight (in Kg) : ";
  height_label->Text = "Height (in cm) : ";
  do_you_have_passport_label->Text = "Do you have Passport : ";
  passport_issued_by_country_label->Text = "Passport issued by Country : ";
  passport_number_label->Text = "Passport Number : ";
  passport_expiry_date_label->Text = "Passport Expiry Date : ";
  home_pincode_label->Text = "Home Pincode : ";
  aadhaar_number_label->Text = "Aadhaar Number : ";
  permanent_address_label->Text = "Permanent Address : ";
  board_label->Text = "Class 12th or Equi. Board : ";
  subjects_label->Text="Class 12th or Equi. Subjects : ";
  marks_label->Text = "Class 12th or Equi. (%/CGPA/CPI) : ";
  year_of_passing_label->Text = "Class 12th or Equi. Year of Passing : ";


  hostel_combobox->Show();
  room_textbox->Show();
  dob_datetimepicker->Show();
  date_of_join_datetimepicker->Show();
  nature_of_disability_textbox->Show();
  percentage_of_disability_textbox->Show();
  mobile_textbox->Show();
  emergency_contact_textbox->Show();
  alternate_email_textbox->Show();
  admission_session_textbox->Show();
  annual_income_combobox->Show();
  father_name_textbox->Show();
  father_occupation_combobox->Show();
  father_mobile_textbox->Show();
  father_qualification_combobox->Show();
  mother_name_textbox->Show();
  mother_qualification_combobox->Show();
  mother_occupation_textbox->Show();
  mother_mobile_textbox->Show();
  guardian_combobox->Show();
  guardian_name_textbox->Show();
  guardian_occupation_textbox->Show();
  guardian_mobile_textbox->Show();
  guardian_pincode_textbox->Show();
  guardian_email_textbox->Show();
  guardian_address_textbox->Show();
  mother_tongue_textbox->Show();
  blood_group_combobox->Show();
  weight_textbox->Show();
  height_textbox->Show();
  do_you_have_passport_combobox->Show();
  passport_issued_by_country_textbox->Show();
  passport_number_textbox->Show();
  passport_expiry_datetimepicker->Show();
  home_pincode_textbox->Show();
  aadhaar_number_textbox->Show();
  permanent_address_textbox->Show();
  board_textbox->Show();
  subjects_textbox->Show();
  marks_textbox->Show();
  year_of_passing_textbox->Show();


  save_btn->Show();
 }

 void hidetextboxes()
 {
  hostel_combobox->Hide();
  room_textbox->Hide();
  dob_datetimepicker->Hide();
  date_of_join_datetimepicker->Hide();
  nature_of_disability_textbox->Hide();
  percentage_of_disability_textbox->Hide();
  mobile_textbox->Hide();
  emergency_contact_textbox->Hide();
  alternate_email_textbox->Hide();
  admission_session_textbox->Hide();
  annual_income_combobox->Hide();
  father_name_textbox->Hide();
  father_occupation_combobox->Hide();
  father_mobile_textbox->Hide();
  father_qualification_combobox->Hide();
  mother_name_textbox->Hide();
  mother_qualification_combobox->Hide();
  mother_occupation_textbox->Hide();
  mother_mobile_textbox->Hide();
  guardian_combobox->Hide();
  guardian_name_textbox->Hide();
  guardian_occupation_textbox->Hide();
  guardian_mobile_textbox->Hide();
  guardian_pincode_textbox->Hide();
  guardian_email_textbox->Hide();
  guardian_address_textbox->Hide();
  mother_tongue_textbox->Hide();
  blood_group_combobox->Hide();
  weight_textbox->Hide();
  height_textbox->Hide();
  do_you_have_passport_combobox->Hide();
  passport_issued_by_country_textbox->Hide();
  passport_number_textbox->Hide();
  passport_expiry_datetimepicker->Hide();
  home_pincode_textbox->Hide();
  aadhaar_number_textbox->Hide();
  permanent_address_textbox->Hide();
  board_textbox->Hide();
  subjects_textbox->Hide();
  marks_textbox->Hide();
  year_of_passing_textbox->Hide();

  save_btn->Hide();

 }
private: System::Void edit_btn_Click(System::Object^  sender, System::EventArgs^  e) {
   edit_btn->Hide();
  
  /*hostel_label->Text="Hostel  ";
  room_label->Text="Room No ";
  hostel_combobox->Visible=true;
  hostel_combobox->Text = hostel;*/
   resetlabels();
   

   
  }
private: System::Void additional_details_Load(System::Object^  sender, System::EventArgs^  e) {
 
   hidetextboxes();
   try{

   OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
   DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
   DB_Connection->Open();
   String ^ selectString = "SELECT * FROM Student WHERE Username = "+"'akshy170201025'" ;
   OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);

   OleDbDataReader ^ reader = cmd->ExecuteReader();


while(reader->Read())
{
hostel_label->Text += reader->GetString(13);
hostel_combobox->Text =  reader->GetString(13);
alternate_email_textbox->Text = reader->GetString(6);
alternate_email_label->Text += reader->GetString(6);
mobile_textbox ->Text = reader->GetString(7);
phone_label->Text += reader->GetString(7);
room_label->Text += reader->GetString(14);
room_textbox->Text = reader->GetString(14);
permanent_address_label->Text += reader->GetString(15);
permanent_address_textbox->Text = reader->GetString(15);
home_pincode_label->Text += reader->GetString(16);
home_pincode_textbox->Text = reader->GetString(16);
dob_label->Text += reader->GetString(17);
//dob_datetimepicker->Text = reader->GetString(17);
nature_of_disability_textbox->Text = reader->GetString(19);
nature_of_disability_label->Text += reader->GetString(19);
percentage_of_disability_textbox->Text = reader->GetString(20);
percentage_disability_label->Text += reader->GetString(20);
emergency_contact_textbox->Text = reader->GetString(21);
emergency_contact_label->Text += reader->GetString(21);
//date_of_join_datetimepicker->Text = reader->GetString(22);
date_of_join_label->Text += reader->GetString(22);
admission_session_textbox->Text = reader->GetString(23);
admission_session_label->Text += reader->GetString(23);
annual_income_combobox->Text = reader->GetString(25);
annual_family_income_label->Text += reader->GetString(25);
father_name_textbox->Text = reader->GetString(26);
father_name_label->Text += reader->GetString(26);
father_qualification_combobox->Text = reader->GetString(27);
father_qualification_label->Text += reader->GetString(27);
father_occupation_combobox->Text = reader->GetString(28);
father_occupation_label->Text += reader->GetString(28);
father_mobile_textbox->Text = reader->GetString(29);
father_mobile_label->Text += reader->GetString(29);
mother_name_textbox->Text = reader->GetString(30);
mother_name_label->Text += reader->GetString(30);
mother_qualification_combobox->Text = reader->GetString(31);
mother_qualification_label->Text += reader->GetString(31);
mother_occupation_textbox->Text = reader->GetString(32);
mother_occupation_label->Text += reader->GetString(32);
mother_mobile_textbox->Text = reader->GetString(33);
mother_mobile_label->Text += reader->GetString(33);
guardian_combobox->Text = reader->GetString(34);
guardian_label->Text += reader->GetString(34);
guardian_name_textbox->Text = reader->GetString(35);
guardian_name_label->Text += reader->GetString(35);
guardian_occupation_textbox->Text = reader->GetString(36);
guardian_occupation_label->Text += reader->GetString(36);
guardian_mobile_textbox->Text = reader->GetString(37);
guardian_mobile_label->Text += reader->GetString(37);
guardian_email_textbox->Text = reader->GetString(38);
guardian_email_label->Text += reader->GetString(38);
guardian_address_textbox->Text = reader->GetString(39);
guardian_address_label->Text += reader->GetString(39);
guardian_pincode_textbox->Text = reader->GetString(40);
guardian_pincode->Text += reader->GetString(40);
permanent_address_textbox->Text = reader->GetString(41);
permanent_address_label->Text += reader->GetString(41);
home_pincode_textbox->Text = reader->GetString(42);
home_pincode_label->Text += reader->GetString(42);
mother_tongue_textbox->Text = reader->GetString(43);
mother_tongue_label->Text += reader->GetString(43);
blood_group_combobox->Text = reader->GetString(44);
blood_group_label->Text += reader->GetString(44);
height_textbox->Text = reader->GetString(45);
height_label->Text += reader->GetString(45);
weight_textbox->Text = reader->GetString(46);
weight_label->Text += reader->GetString(46);
aadhaar_number_textbox->Text = reader->GetString(47);
aadhaar_number_label->Text += reader->GetString(47);
do_you_have_passport_combobox->Text = reader->GetString(48);
do_you_have_passport_label->Text += reader->GetString(48);
passport_issued_by_country_textbox->Text = reader->GetString(49);
passport_issued_by_country_label->Text += reader->GetString(49);
passport_number_textbox->Text = reader->GetString(50);
passport_number_label->Text += reader->GetString(50);
//passport_expiry_datetimepicker->Text = reader->GetString(51);
passport_expiry_date_label->Text += reader->GetString(51);
board_textbox->Text = reader->GetString(52);
board_label->Text += reader->GetString(52);
subjects_textbox->Text = reader->GetString(53);
subjects_label->Text += reader->GetString(53);
year_of_passing_textbox->Text = reader->GetString(54);
year_of_passing_label->Text += reader->GetString(54);
marks_textbox->Text = reader->GetString(55);
marks_label->Text += reader->GetString(55);
}
   //Remove after testing (end)
   DB_Connection->Close();

   }

   catch(Exception ^ ex)
   {
   MessageBox::Show(ex->Message);
   }
   hostel_combobox->Text=hostel;
   hostel_label->Text+=hostel;
   room_label->Text+=room;
   
  }

private: System::Void save_btn_Click(System::Object^  sender, System::EventArgs^  e) {
   
  }
 
      
     
};
}