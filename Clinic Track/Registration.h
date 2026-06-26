#pragma once

namespace ClinicTrack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
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
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ nudPatAge;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::DateTimePicker^ dtpBirthDate;


	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::Button^ btnSave;


	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtFullName;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbGender;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nudPatAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dtpBirthDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtFullName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbGender = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPatAge))->BeginInit();
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Location = System::Drawing::Point(728, 653);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(54, 20);
			this->linkLabel1->TabIndex = 72;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Log In";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Registration::linkLabel1_LinkClicked);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(537, 653);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 20);
			this->label6->TabIndex = 71;
			this->label6->Text = L"Already have an account\?";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(692, 416);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 22);
			this->label5->TabIndex = 70;
			this->label5->Text = L"Gender:";
			// 
			// nudPatAge
			// 
			this->nudPatAge->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->nudPatAge->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudPatAge->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudPatAge->Location = System::Drawing::Point(478, 441);
			this->nudPatAge->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->nudPatAge->Name = L"nudPatAge";
			this->nudPatAge->Size = System::Drawing::Size(142, 34);
			this->nudPatAge->TabIndex = 69;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(473, 416);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 22);
			this->label4->TabIndex = 68;
			this->label4->Text = L"Age:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(471, 330);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 22);
			this->label3->TabIndex = 67;
			this->label3->Text = L"Birth Date:";
			// 
			// dtpBirthDate
			// 
			this->dtpBirthDate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dtpBirthDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpBirthDate->Location = System::Drawing::Point(476, 355);
			this->dtpBirthDate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dtpBirthDate->Name = L"dtpBirthDate";
			this->dtpBirthDate->Size = System::Drawing::Size(360, 34);
			this->dtpBirthDate->TabIndex = 65;
			// 
			// txtEmail
			// 
			this->txtEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(474, 269);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(360, 34);
			this->txtEmail->TabIndex = 64;
			// 
			// btnSave
			// 
			this->btnSave->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSave->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(558, 590);
			this->btnSave->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(200, 50);
			this->btnSave->TabIndex = 63;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &Registration::btnSave_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(474, 521);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(360, 34);
			this->txtPassword->TabIndex = 62;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(469, 497);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 22);
			this->label9->TabIndex = 61;
			this->label9->Text = L"Password:";
			// 
			// txtFullName
			// 
			this->txtFullName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtFullName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtFullName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFullName->Location = System::Drawing::Point(475, 180);
			this->txtFullName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(360, 34);
			this->txtFullName->TabIndex = 60;
			this->txtFullName->TextChanged += gcnew System::EventHandler(this, &Registration::txtFullName_TextChanged);
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(469, 244);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 22);
			this->label8->TabIndex = 59;
			this->label8->Text = L"Email:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(470, 155);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 22);
			this->label2->TabIndex = 58;
			this->label2->Text = L"Full Name:";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(509, 85);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(291, 40);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Account Registration";
			// 
			// cbGender
			// 
			this->cbGender->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cbGender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbGender->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbGender->FormattingEnabled = true;
			this->cbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cbGender->Location = System::Drawing::Point(696, 441);
			this->cbGender->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cbGender->Name = L"cbGender";
			this->cbGender->Size = System::Drawing::Size(140, 36);
			this->cbGender->TabIndex = 73;
			this->cbGender->SelectedIndexChanged += gcnew System::EventHandler(this, &Registration::cbGender_SelectedIndexChanged);
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1344, 712);
			this->Controls->Add(this->cbGender);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->nudPatAge);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dtpBirthDate);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtFullName);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Registration";
			this->Text = L"Registration";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPatAge))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
protected:
	// Override sa CreateParams para i-force ang Double Buffering sa buong composite window
	virtual property System::Windows::Forms::CreateParams^ CreateParams{
		System::Windows::Forms::CreateParams ^ get() override {
			System::Windows::Forms::CreateParams^ cp = __super::CreateParams;
			// 0x02000000 ay WS_EX_COMPOSITED (Ino-overhaul nito ang pag-render para hindi kumurap)
			cp->ExStyle |= 0x02000000;
			return cp;
		}
	}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Close();
}
private: System::Void Registration_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Siguraduhing may laman ang mga textboxes
	if (txtFullName->Text->Trim() == "" || txtEmail->Text->Trim() == "" || txtPassword->Text->Trim() == "") {
		MessageBox::Show("Please fill in all the fields.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	String^ name = txtFullName->Text;
	String^ email = txtEmail->Text;
	String^ password = txtPassword->Text;

	// 1. Para sa DateTimePicker (Kunin ang petsa sa format na DD/MM/YYYY)
	// Palitan ang 'dateTimePicker1' kung ano ang totoong pangalan nito sa designer mo
	String^ birthdate = dtpBirthDate->Value.ToString("dd/MM/yyyy");

	// 2. Para sa NumericUpDown (Edad - Siguraduhing kinukuha ang value at ginagawang String)
	// Palitan ang 'numericUpDown1' kung ano ang totoong pangalan nito sa designer mo
	String^ age = nudPatAge->Value.ToString();

	// 3. Para sa ComboBox (Gender - Siguraduhing may napili bago i-convert)
	// Palitan ang 'comboBox1' kung ano ang totoong pangalan nito sa designer mo
	String^ gender = (cbGender->SelectedIndex != -1) ? cbGender->SelectedItem->ToString() : "Not Specified";

	// 2. Itakda ang pangalan ng text file kung saan ise-save ang data
	String^ filename = "user_database.txt";

	try {

		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filename, true);
		// Idinagdag si gender sa pinakadulo na may kasamang kuwit:
		sw->WriteLine(name + "," + email + "," + password + "," + birthdate + "," + age + "," + gender);
		sw->Close();

		MessageBox::Show("Your account has been created successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close(); // Isasara ang registration form
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred while saving the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void CreateAccount_Load(System::Object^ sender, System::EventArgs^ e) {	
}
private: System::Void txtFullName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cbGender_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
