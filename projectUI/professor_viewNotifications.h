#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for professor_viewNotifications
	/// </summary>
	public ref class professor_viewNotifications : public System::Windows::Forms::UserControl
	{
	public:
		String^ usrnm;
	public:
		professor_viewNotifications(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		professor_viewNotifications(String^ txt)
		{
			InitializeComponent();
			usrnm=txt;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~professor_viewNotifications()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 





	private: System::Windows::Forms::Button^  viewNotifications_btn;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;

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
			this->viewNotifications_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// viewNotifications_btn
			// 
			this->viewNotifications_btn->BackColor = System::Drawing::Color::Teal;
			this->viewNotifications_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->viewNotifications_btn->ForeColor = System::Drawing::Color::White;
			this->viewNotifications_btn->Location = System::Drawing::Point(300, 331);
			this->viewNotifications_btn->Name = L"viewNotifications_btn";
			this->viewNotifications_btn->Size = System::Drawing::Size(142, 50);
			this->viewNotifications_btn->TabIndex = 4;
			this->viewNotifications_btn->Text = L"Refresh";
			this->viewNotifications_btn->UseVisualStyleBackColor = false;
			this->viewNotifications_btn->Click += gcnew System::EventHandler(this, &professor_viewNotifications::viewNotifications_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(28, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(701, 247);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &professor_viewNotifications::dataGridView1_CellContentClick);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(300, 418);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(429, 169);
			this->textBox1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(122, 418);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 23);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Message :";
			// 
			// professor_viewNotifications
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->viewNotifications_btn);
			this->Name = L"professor_viewNotifications";
			this->Size = System::Drawing::Size(753, 614);
			this->Load += gcnew System::EventHandler(this, &professor_viewNotifications::professor_viewNotifications_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void viewNotifications_btn_Click(System::Object^  sender, System::EventArgs^  e) {


				 OleDb::OleDbConnection ^con;
				 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
				 con=gcnew OleDb::OleDbConnection(connString);
				 String^ com="Select [NotificationID],[SenderUsername],[SendTime],[SendDate],[Message] from Notification where [OtherReceivers]='"+this->usrnm+ "' and [Type]='"+"Message"+"';"; 
				 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
				 con->Open(); 
				 OleDb::OleDbDataAdapter^ adapter=gcnew OleDb::OleDbDataAdapter();
				 adapter->SelectCommand=cmd;
				 DataTable^ data =gcnew DataTable();
				 adapter->Fill(data);
				 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
				 if(readerData->Read()){
					 BindingSource^ bSource=gcnew BindingSource();
					 bSource->DataSource=data;
					 dataGridView1->DataSource=bSource;
					 adapter->Update(data);
					 con->Close();
				 }
				 else{
					 MessageBox::Show("No Notifications are present");
					 con->Close();

				 }	
			 }
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 if (e->RowIndex>=0)
				 {
					 DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
					 textBox1->Text=row->Cells["Message"]->Value->ToString();
				 }
			 }
	private: System::Void professor_viewNotifications_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
