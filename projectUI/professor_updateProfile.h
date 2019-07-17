#pragma once
#include <string.h>
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

namespace projectUI {

	/// <summary>
	/// Summary for professor_updateProfile
	/// </summary>
	public ref class professor_updateProfile : public System::Windows::Forms::UserControl
	{
	public:
		String ^usrnm;     //stores the username of logged in user.
	public:
		professor_updateProfile(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		professor_updateProfile(String ^text)
		{
			InitializeComponent();
			usrnm=text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~professor_updateProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblPassword;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::Label^  lblSecEmail;
	private: System::Windows::Forms::TextBox^  txtSecEmail;
	private: System::Windows::Forms::Label^  lblPhoneNo;
	private: System::Windows::Forms::TextBox^  txtPhoneNo;
	private: System::Windows::Forms::Label^  lblRoomNo;
	private: System::Windows::Forms::TextBox^  txtRoomNo;
	private: System::Windows::Forms::Label^  lblEmergencyNo;
	private: System::Windows::Forms::TextBox^  txtEmergencyNo;
	private: System::Windows::Forms::Label^  lblPermanentAddress;

	private: System::Windows::Forms::Label^  lblPincode;
	private: System::Windows::Forms::TextBox^  txtPincode;
	private: System::Windows::Forms::Label^  lblPassportStatus;

	private: System::Windows::Forms::Label^  lblPassportNo;
	private: System::Windows::Forms::TextBox^  txtPassportNumber;
	private: System::Windows::Forms::Label^  lblPassportCountry;
	private: System::Windows::Forms::TextBox^  txtPassportCountry;
	private: System::Windows::Forms::Label^  lblPassportExpiryDate;
	private: System::Windows::Forms::TextBox^  txtPassportExpiry;

	private: System::Windows::Forms::Label^  lblPhoto;
	private: System::Windows::Forms::Label^  lblHomepageLink;

	private: System::Windows::Forms::Button^  btnPhoto;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialogPhoto;
	private: System::Windows::Forms::TextBox^  txtHomepageLink;
	private: System::Windows::Forms::ComboBox^  comboBoxPassportStatus;

	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::Label^  lblSize;
	private: System::Windows::Forms::PictureBox^  pictureBoxPhoto;
	private: System::Windows::Forms::TextBox^  txtPhoto;
	private: System::Windows::Forms::TextBox^  txtPermanentAddress;
	private: System::Windows::Forms::Label^  labelUpdateProfile;






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
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblSecEmail = (gcnew System::Windows::Forms::Label());
			this->txtSecEmail = (gcnew System::Windows::Forms::TextBox());
			this->lblPhoneNo = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->lblRoomNo = (gcnew System::Windows::Forms::Label());
			this->txtRoomNo = (gcnew System::Windows::Forms::TextBox());
			this->lblEmergencyNo = (gcnew System::Windows::Forms::Label());
			this->txtEmergencyNo = (gcnew System::Windows::Forms::TextBox());
			this->lblPermanentAddress = (gcnew System::Windows::Forms::Label());
			this->lblPincode = (gcnew System::Windows::Forms::Label());
			this->txtPincode = (gcnew System::Windows::Forms::TextBox());
			this->lblPassportStatus = (gcnew System::Windows::Forms::Label());
			this->lblPassportNo = (gcnew System::Windows::Forms::Label());
			this->txtPassportNumber = (gcnew System::Windows::Forms::TextBox());
			this->lblPassportCountry = (gcnew System::Windows::Forms::Label());
			this->txtPassportCountry = (gcnew System::Windows::Forms::TextBox());
			this->lblPassportExpiryDate = (gcnew System::Windows::Forms::Label());
			this->txtPassportExpiry = (gcnew System::Windows::Forms::TextBox());
			this->lblPhoto = (gcnew System::Windows::Forms::Label());
			this->lblHomepageLink = (gcnew System::Windows::Forms::Label());
			this->btnPhoto = (gcnew System::Windows::Forms::Button());
			this->openFileDialogPhoto = (gcnew System::Windows::Forms::OpenFileDialog());
			this->txtHomepageLink = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxPassportStatus = (gcnew System::Windows::Forms::ComboBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->lblSize = (gcnew System::Windows::Forms::Label());
			this->pictureBoxPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtPhoto = (gcnew System::Windows::Forms::TextBox());
			this->txtPermanentAddress = (gcnew System::Windows::Forms::TextBox());
			this->labelUpdateProfile = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(58, 75);
			this->lblPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(103, 23);
			this->lblPassword->TabIndex = 0;
			this->lblPassword->Text = L"Password";
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(403, 77);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(269, 32);
			this->txtPassword->TabIndex = 1;
			// 
			// lblSecEmail
			// 
			this->lblSecEmail->AutoSize = true;
			this->lblSecEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblSecEmail->Location = System::Drawing::Point(58, 120);
			this->lblSecEmail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSecEmail->Name = L"lblSecEmail";
			this->lblSecEmail->Size = System::Drawing::Size(174, 23);
			this->lblSecEmail->TabIndex = 2;
			this->lblSecEmail->Text = L"Secondary Email";
			this->lblSecEmail->Click += gcnew System::EventHandler(this, &professor_updateProfile::lblSecEmail_Click);
			// 
			// txtSecEmail
			// 
			this->txtSecEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtSecEmail->Location = System::Drawing::Point(403, 121);
			this->txtSecEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtSecEmail->Name = L"txtSecEmail";
			this->txtSecEmail->Size = System::Drawing::Size(269, 32);
			this->txtSecEmail->TabIndex = 3;
			// 
			// lblPhoneNo
			// 
			this->lblPhoneNo->AutoSize = true;
			this->lblPhoneNo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPhoneNo->Location = System::Drawing::Point(58, 164);
			this->lblPhoneNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPhoneNo->Name = L"lblPhoneNo";
			this->lblPhoneNo->Size = System::Drawing::Size(157, 23);
			this->lblPhoneNo->TabIndex = 4;
			this->lblPhoneNo->Text = L"Phone Number";
			// 
			// txtPhoneNo
			// 
			this->txtPhoneNo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPhoneNo->Location = System::Drawing::Point(403, 165);
			this->txtPhoneNo->Margin = System::Windows::Forms::Padding(4);
			this->txtPhoneNo->Name = L"txtPhoneNo";
			this->txtPhoneNo->Size = System::Drawing::Size(269, 32);
			this->txtPhoneNo->TabIndex = 5;
			// 
			// lblRoomNo
			// 
			this->lblRoomNo->AutoSize = true;
			this->lblRoomNo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblRoomNo->Location = System::Drawing::Point(58, 208);
			this->lblRoomNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRoomNo->Name = L"lblRoomNo";
			this->lblRoomNo->Size = System::Drawing::Size(152, 23);
			this->lblRoomNo->TabIndex = 6;
			this->lblRoomNo->Text = L"Room Number";
			// 
			// txtRoomNo
			// 
			this->txtRoomNo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtRoomNo->Location = System::Drawing::Point(403, 210);
			this->txtRoomNo->Margin = System::Windows::Forms::Padding(4);
			this->txtRoomNo->Name = L"txtRoomNo";
			this->txtRoomNo->Size = System::Drawing::Size(269, 32);
			this->txtRoomNo->TabIndex = 7;
			// 
			// lblEmergencyNo
			// 
			this->lblEmergencyNo->AutoSize = true;
			this->lblEmergencyNo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblEmergencyNo->Location = System::Drawing::Point(58, 253);
			this->lblEmergencyNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEmergencyNo->Name = L"lblEmergencyNo";
			this->lblEmergencyNo->Size = System::Drawing::Size(294, 23);
			this->lblEmergencyNo->TabIndex = 8;
			this->lblEmergencyNo->Text = L"Emergency Contact Number";
			// 
			// txtEmergencyNo
			// 
			this->txtEmergencyNo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtEmergencyNo->Location = System::Drawing::Point(403, 254);
			this->txtEmergencyNo->Margin = System::Windows::Forms::Padding(4);
			this->txtEmergencyNo->Name = L"txtEmergencyNo";
			this->txtEmergencyNo->Size = System::Drawing::Size(269, 32);
			this->txtEmergencyNo->TabIndex = 9;
			// 
			// lblPermanentAddress
			// 
			this->lblPermanentAddress->AutoSize = true;
			this->lblPermanentAddress->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPermanentAddress->Location = System::Drawing::Point(58, 297);
			this->lblPermanentAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPermanentAddress->Name = L"lblPermanentAddress";
			this->lblPermanentAddress->Size = System::Drawing::Size(202, 23);
			this->lblPermanentAddress->TabIndex = 10;
			this->lblPermanentAddress->Text = L"Permanent Address";
			// 
			// lblPincode
			// 
			this->lblPincode->AutoSize = true;
			this->lblPincode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPincode->Location = System::Drawing::Point(58, 341);
			this->lblPincode->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPincode->Name = L"lblPincode";
			this->lblPincode->Size = System::Drawing::Size(90, 23);
			this->lblPincode->TabIndex = 12;
			this->lblPincode->Text = L"Pincode";
			// 
			// txtPincode
			// 
			this->txtPincode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPincode->Location = System::Drawing::Point(403, 343);
			this->txtPincode->Margin = System::Windows::Forms::Padding(4);
			this->txtPincode->Name = L"txtPincode";
			this->txtPincode->Size = System::Drawing::Size(269, 32);
			this->txtPincode->TabIndex = 13;
			// 
			// lblPassportStatus
			// 
			this->lblPassportStatus->AutoSize = true;
			this->lblPassportStatus->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPassportStatus->Location = System::Drawing::Point(58, 386);
			this->lblPassportStatus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPassportStatus->Name = L"lblPassportStatus";
			this->lblPassportStatus->Size = System::Drawing::Size(156, 23);
			this->lblPassportStatus->TabIndex = 14;
			this->lblPassportStatus->Text = L"Passport Status";
			// 
			// lblPassportNo
			// 
			this->lblPassportNo->AutoSize = true;
			this->lblPassportNo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPassportNo->Location = System::Drawing::Point(58, 430);
			this->lblPassportNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPassportNo->Name = L"lblPassportNo";
			this->lblPassportNo->Size = System::Drawing::Size(177, 23);
			this->lblPassportNo->TabIndex = 16;
			this->lblPassportNo->Text = L"Passport Number";
			// 
			// txtPassportNumber
			// 
			this->txtPassportNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPassportNumber->Location = System::Drawing::Point(403, 431);
			this->txtPassportNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtPassportNumber->Name = L"txtPassportNumber";
			this->txtPassportNumber->Size = System::Drawing::Size(269, 32);
			this->txtPassportNumber->TabIndex = 17;
			// 
			// lblPassportCountry
			// 
			this->lblPassportCountry->AutoSize = true;
			this->lblPassportCountry->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPassportCountry->Location = System::Drawing::Point(58, 474);
			this->lblPassportCountry->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPassportCountry->Name = L"lblPassportCountry";
			this->lblPassportCountry->Size = System::Drawing::Size(175, 23);
			this->lblPassportCountry->TabIndex = 18;
			this->lblPassportCountry->Text = L"Passport Country";
			// 
			// txtPassportCountry
			// 
			this->txtPassportCountry->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPassportCountry->Location = System::Drawing::Point(403, 475);
			this->txtPassportCountry->Margin = System::Windows::Forms::Padding(4);
			this->txtPassportCountry->Name = L"txtPassportCountry";
			this->txtPassportCountry->Size = System::Drawing::Size(269, 32);
			this->txtPassportCountry->TabIndex = 19;
			// 
			// lblPassportExpiryDate
			// 
			this->lblPassportExpiryDate->AutoSize = true;
			this->lblPassportExpiryDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPassportExpiryDate->Location = System::Drawing::Point(59, 519);
			this->lblPassportExpiryDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPassportExpiryDate->Name = L"lblPassportExpiryDate";
			this->lblPassportExpiryDate->Size = System::Drawing::Size(208, 23);
			this->lblPassportExpiryDate->TabIndex = 20;
			this->lblPassportExpiryDate->Text = L"Passport Expiry Date";
			// 
			// txtPassportExpiry
			// 
			this->txtPassportExpiry->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPassportExpiry->Location = System::Drawing::Point(403, 520);
			this->txtPassportExpiry->Margin = System::Windows::Forms::Padding(4);
			this->txtPassportExpiry->Name = L"txtPassportExpiry";
			this->txtPassportExpiry->Size = System::Drawing::Size(269, 32);
			this->txtPassportExpiry->TabIndex = 21;
			// 
			// lblPhoto
			// 
			this->lblPhoto->AutoSize = true;
			this->lblPhoto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPhoto->Location = System::Drawing::Point(58, 563);
			this->lblPhoto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPhoto->Name = L"lblPhoto";
			this->lblPhoto->Size = System::Drawing::Size(67, 23);
			this->lblPhoto->TabIndex = 22;
			this->lblPhoto->Text = L"Photo";
			// 
			// lblHomepageLink
			// 
			this->lblHomepageLink->AutoSize = true;
			this->lblHomepageLink->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblHomepageLink->Location = System::Drawing::Point(70, 778);
			this->lblHomepageLink->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblHomepageLink->Name = L"lblHomepageLink";
			this->lblHomepageLink->Size = System::Drawing::Size(163, 23);
			this->lblHomepageLink->TabIndex = 23;
			this->lblHomepageLink->Text = L"Homepage Link";
			// 
			// btnPhoto
			// 
			this->btnPhoto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPhoto->Location = System::Drawing::Point(574, 563);
			this->btnPhoto->Margin = System::Windows::Forms::Padding(4);
			this->btnPhoto->Name = L"btnPhoto";
			this->btnPhoto->Size = System::Drawing::Size(100, 34);
			this->btnPhoto->TabIndex = 24;
			this->btnPhoto->Text = L"Browse";
			this->btnPhoto->UseVisualStyleBackColor = true;
			this->btnPhoto->Click += gcnew System::EventHandler(this, &professor_updateProfile::btnPhoto_Click);
			// 
			// openFileDialogPhoto
			// 
			this->openFileDialogPhoto->FileName = L"openFileDialogPhoto";
			this->openFileDialogPhoto->Filter = L"Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
			this->openFileDialogPhoto->Title = L"Select your Photo";
			// 
			// txtHomepageLink
			// 
			this->txtHomepageLink->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtHomepageLink->Location = System::Drawing::Point(403, 780);
			this->txtHomepageLink->Margin = System::Windows::Forms::Padding(4);
			this->txtHomepageLink->Name = L"txtHomepageLink";
			this->txtHomepageLink->Size = System::Drawing::Size(269, 32);
			this->txtHomepageLink->TabIndex = 25;
			// 
			// comboBoxPassportStatus
			// 
			this->comboBoxPassportStatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxPassportStatus->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBoxPassportStatus->FormattingEnabled = true;
			this->comboBoxPassportStatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Yes", L"No"});
			this->comboBoxPassportStatus->Location = System::Drawing::Point(403, 387);
			this->comboBoxPassportStatus->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxPassportStatus->Name = L"comboBoxPassportStatus";
			this->comboBoxPassportStatus->Size = System::Drawing::Size(269, 31);
			this->comboBoxPassportStatus->TabIndex = 26;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::LimeGreen;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::White;
			this->btnUpdate->Location = System::Drawing::Point(229, 834);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(292, 49);
			this->btnUpdate->TabIndex = 27;
			this->btnUpdate->Text = L"Update Information";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &professor_updateProfile::btnUpdate_Click);
			// 
			// lblSize
			// 
			this->lblSize->AutoSize = true;
			this->lblSize->Location = System::Drawing::Point(178, 890);
			this->lblSize->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSize->Name = L"lblSize";
			this->lblSize->Size = System::Drawing::Size(0, 17);
			this->lblSize->TabIndex = 28;
			// 
			// pictureBoxPhoto
			// 
			this->pictureBoxPhoto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxPhoto->ImageLocation = L"Resources\\\\";
			this->pictureBoxPhoto->Location = System::Drawing::Point(403, 611);
			this->pictureBoxPhoto->Margin = System::Windows::Forms::Padding(4);
			this->pictureBoxPhoto->Name = L"pictureBoxPhoto";
			this->pictureBoxPhoto->Size = System::Drawing::Size(160, 148);
			this->pictureBoxPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxPhoto->TabIndex = 29;
			this->pictureBoxPhoto->TabStop = false;
			// 
			// txtPhoto
			// 
			this->txtPhoto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPhoto->Location = System::Drawing::Point(403, 565);
			this->txtPhoto->Margin = System::Windows::Forms::Padding(4);
			this->txtPhoto->Name = L"txtPhoto";
			this->txtPhoto->Size = System::Drawing::Size(172, 32);
			this->txtPhoto->TabIndex = 30;
			// 
			// txtPermanentAddress
			// 
			this->txtPermanentAddress->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPermanentAddress->Location = System::Drawing::Point(403, 297);
			this->txtPermanentAddress->Margin = System::Windows::Forms::Padding(4);
			this->txtPermanentAddress->Name = L"txtPermanentAddress";
			this->txtPermanentAddress->Size = System::Drawing::Size(269, 32);
			this->txtPermanentAddress->TabIndex = 31;
			// 
			// labelUpdateProfile
			// 
			this->labelUpdateProfile->AutoSize = true;
			this->labelUpdateProfile->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelUpdateProfile->Location = System::Drawing::Point(56, 27);
			this->labelUpdateProfile->Name = L"labelUpdateProfile";
			this->labelUpdateProfile->Size = System::Drawing::Size(204, 34);
			this->labelUpdateProfile->TabIndex = 32;
			this->labelUpdateProfile->Text = L"Update Profile";
			// 
			// professor_updateProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->labelUpdateProfile);
			this->Controls->Add(this->txtPermanentAddress);
			this->Controls->Add(this->txtPhoto);
			this->Controls->Add(this->pictureBoxPhoto);
			this->Controls->Add(this->lblSize);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->comboBoxPassportStatus);
			this->Controls->Add(this->txtHomepageLink);
			this->Controls->Add(this->btnPhoto);
			this->Controls->Add(this->lblHomepageLink);
			this->Controls->Add(this->lblPhoto);
			this->Controls->Add(this->txtPassportExpiry);
			this->Controls->Add(this->lblPassportExpiryDate);
			this->Controls->Add(this->txtPassportCountry);
			this->Controls->Add(this->lblPassportCountry);
			this->Controls->Add(this->txtPassportNumber);
			this->Controls->Add(this->lblPassportNo);
			this->Controls->Add(this->lblPassportStatus);
			this->Controls->Add(this->txtPincode);
			this->Controls->Add(this->lblPincode);
			this->Controls->Add(this->lblPermanentAddress);
			this->Controls->Add(this->txtEmergencyNo);
			this->Controls->Add(this->lblEmergencyNo);
			this->Controls->Add(this->txtRoomNo);
			this->Controls->Add(this->lblRoomNo);
			this->Controls->Add(this->txtPhoneNo);
			this->Controls->Add(this->lblPhoneNo);
			this->Controls->Add(this->txtSecEmail);
			this->Controls->Add(this->lblSecEmail);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->lblPassword);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"professor_updateProfile";
			this->Size = System::Drawing::Size(711, 614);
			this->Load += gcnew System::EventHandler(this, &professor_updateProfile::professor_updateProfile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lblSecEmail_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btnPhoto_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (openFileDialogPhoto->ShowDialog() == DialogResult::OK)
				 {
					 // display image in picture box  
					 pictureBoxPhoto->Image = gcnew Bitmap(openFileDialogPhoto->FileName);
					 // image file path  
					 txtPhoto->Text = openFileDialogPhoto->FileName;

				 }
				 if (!Directory::Exists("Resources"))
				 {
					 Directory::CreateDirectory("Resources");
				 }



			 }
	private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(txtPassword->Text=="")
				 {
					 MessageBox::Show("Enter Password");
					 return;
				 }
				 if(txtPhoneNo->Text=="")
				 {
					 MessageBox::Show("Enter Phone Number");
					 return;
				 }
				 if(txtRoomNo->Text=="")
				 {
					 MessageBox::Show("Enter Room Number");
					 return;
				 }
				 if(txtEmergencyNo->Text=="")
				 {
					 MessageBox::Show("Enter Emergency Number");
					 return;
				 }
				 if(txtPermanentAddress->Text=="")
				 {
					 MessageBox::Show("Enter Permanent Address");
					 return;
				 }
				 if(txtPincode->Text=="")
				 {
					 MessageBox::Show("Enter Pincode");
					 return;
				 }
				 if(comboBoxPassportStatus->Text=="")
				 {
					 MessageBox::Show("Enter Passport Status");
					 return;
				 }
				 OleDb::OleDbConnection ^con;
				 try
				 {
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();

					 if(File::Exists("Resources\\" + this->usrnm+".jpg"))
						 File::Delete("Resources\\" + this->usrnm+".jpg");
					 File::Copy(txtPhoto->Text,"Resources\\" + this->usrnm+".jpg");


					 String^ com="UPDATE Professor SET [Password]='"+ this->txtPassword->Text +"',[SecondaryEmail]='"+ this->txtSecEmail->Text +"',[PhoneNo]='"+ this->txtPhoneNo->Text +"',[Address]='"+ this->txtRoomNo->Text +"',[EmergencyContact]='"+ this->txtEmergencyNo->Text +"',[PermanentAddress]='"+ this->txtPermanentAddress->Text +"',[HomePincode]='"+ this->txtPincode->Text +"',[DoYouHavePassport]='"+ this->comboBoxPassportStatus->Text +"',[PassportNumber]='"+ this->txtPassportNumber->Text +"',[PassportIssuedByCountry]='"+ this->txtPassportCountry->Text +"',[PassportExpiryDate]='"+ this->txtPassportExpiry->Text +"',[HomePageLink]='"+ this->txtHomepageLink->Text +"',[PassportSizePhotograph]='"+ "Resources\\" + this->usrnm+".jpg" +"' where [Username]='"+this->usrnm+"' ;";
					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
					 con->Close();
					 MessageBox::Show("Profile Updated Successfully");

				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 //con->Close();
				 }
			 }
	private: System::Void professor_updateProfile_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^con;
				 try
				 {
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();
					 String^ com2="SELECT * FROM Professor WHERE [Username]='"+this->usrnm+"'";
					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com2,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
					 String^ imageLocation;
					 while(readerData->Read())
					 {
						 txtPassword->Text=readerData->GetString(5);
						 txtSecEmail->Text=readerData->GetString(6);
						 txtPhoneNo->Text=readerData->GetString(7);
						 txtRoomNo->Text=readerData->GetString(12);
						 txtEmergencyNo->Text=readerData->GetString(15);
						 txtPermanentAddress->Text=readerData->GetString(22);
						 txtPincode->Text=readerData->GetString(23);
						 comboBoxPassportStatus->Text=readerData->GetString(29);
						 txtPassportNumber->Text=readerData->GetString(31);
						 txtPassportCountry->Text=readerData->GetString(30);
						 txtPassportExpiry->Text=readerData->GetString(32);
						 imageLocation=readerData->GetString(34);
						 txtHomepageLink->Text=readerData->GetString(33);
					 }
					 pictureBoxPhoto->ImageLocation=imageLocation;
					 con->Close();

				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }
			 }

	};
}
