#pragma once

namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Prof
	/// </summary>
	public ref class Prof : public System::Windows::Forms::Form
	{
	public:
		Prof(void)
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
		~Prof()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ExtraInfoBtn;
	protected: 








	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;























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
			this->ExtraInfoBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// ExtraInfoBtn
			// 
			this->ExtraInfoBtn->BackColor = System::Drawing::Color::Teal;
			this->ExtraInfoBtn->FlatAppearance->BorderSize = 0;
			this->ExtraInfoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExtraInfoBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ExtraInfoBtn->ForeColor = System::Drawing::Color::White;
			this->ExtraInfoBtn->Location = System::Drawing::Point(129, 189);
			this->ExtraInfoBtn->Margin = System::Windows::Forms::Padding(0);
			this->ExtraInfoBtn->Name = L"ExtraInfoBtn";
			this->ExtraInfoBtn->Size = System::Drawing::Size(194, 47);
			this->ExtraInfoBtn->TabIndex = 39;
			this->ExtraInfoBtn->Text = L"Additional Information";
			this->ExtraInfoBtn->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(243, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 25);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Designation, Dept.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(243, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 25);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Dept ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(243, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 28);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Full Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(98, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(117, 100);
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(243, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 25);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Webmail";
			// 
			// Prof
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 288);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ExtraInfoBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Prof";
			this->Text = L"Prof";
			this->Load += gcnew System::EventHandler(this, &Prof::Prof_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Prof_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
