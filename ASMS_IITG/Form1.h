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
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label4;
	protected: 
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  formsPanel;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->formsPanel = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->formsPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Teal;
			this->label4->Location = System::Drawing::Point(120, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"All at one place.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(120, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(381, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Student | Faculty | Administration";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Teal;
			this->label6->Location = System::Drawing::Point(118, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(399, 41);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Academic System IITG";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Location = System::Drawing::Point(-2, 128);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(986, 47);
			this->panel2->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Teal;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Chiller", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Gold;
			this->button2->Location = System::Drawing::Point(956, 0);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(27, 47);
			this->button2->TabIndex = 8;
			this->button2->Text = L"\?";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(876, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 47);
			this->button1->TabIndex = 7;
			this->button1->Text = L"SEARCH";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(627, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(246, 19);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Teal;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(339, 0);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 47);
			this->button4->TabIndex = 5;
			this->button4->Text = L"FORMS";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->MouseEnter += gcnew System::EventHandler(this, &Form1::button4_MouseEnter);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Teal;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(150, 0);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(189, 47);
			this->button5->TabIndex = 1;
			this->button5->Text = L"ACADEMIC CALENDAR";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Teal;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(8, 0);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(142, 47);
			this->button6->TabIndex = 0;
			this->button6->Text = L"NOTICE BOARD";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(9, 14);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// formsPanel
			// 
			this->formsPanel->BackColor = System::Drawing::Color::Teal;
			this->formsPanel->Controls->Add(this->button9);
			this->formsPanel->Controls->Add(this->button8);
			this->formsPanel->Controls->Add(this->button7);
			this->formsPanel->Controls->Add(this->button3);
			this->formsPanel->Location = System::Drawing::Point(337, 128);
			this->formsPanel->Margin = System::Windows::Forms::Padding(0);
			this->formsPanel->Name = L"formsPanel";
			this->formsPanel->Size = System::Drawing::Size(180, 158);
			this->formsPanel->TabIndex = 10;
			this->formsPanel->MouseLeave += gcnew System::EventHandler(this, &Form1::formsPanel_MouseLeave);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Teal;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(1, 129);
			this->button9->Margin = System::Windows::Forms::Padding(1);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(178, 27);
			this->button9->TabIndex = 3;
			this->button9->Text = L"   PhD";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Teal;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(1, 102);
			this->button8->Margin = System::Windows::Forms::Padding(1);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(178, 27);
			this->button8->TabIndex = 2;
			this->button8->Text = L"   MTech/MDes";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Teal;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(1, 75);
			this->button7->Margin = System::Windows::Forms::Padding(1);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(178, 27);
			this->button7->TabIndex = 1;
			this->button7->Text = L"   General";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Teal;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(1, 47);
			this->button3->Margin = System::Windows::Forms::Padding(1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 28);
			this->button3->TabIndex = 0;
			this->button3->Text = L"   BTech/BDes/MSc";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(985, 612);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->formsPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Homepage - Academic Section";
			this->TransparencyKey = System::Drawing::SystemColors::WindowText;
			this->MouseEnter += gcnew System::EventHandler(this, &Form1::Form1_MouseEnter);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->formsPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


private: System::Void button4_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		    formsPanel->Show();
	    }

private: System::Void formsPanel_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		    formsPanel->Hide();
	    }

private: System::Void Form1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		    formsPanel->Hide();
	    }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
			
					OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					DB_Connection->Open();
					String ^ first = "Chirag3";
					String ^ insertString = "insert into CourseList([CourseID],[CourseName],[DeptID],[Credits],[CourseLink]) VALUES('" +first+ "', '" +first+ "', '" +first+ "', '" +first+ "', '" +first+ "' );";
					
					OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
					

					cmd->ExecuteNonQuery();
					DB_Connection->Close();	 
			 }
			
			catch(Exception ^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		 }
};
}

