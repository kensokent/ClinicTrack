#pragma once
#include "Registration.h";
#include "Main.h";

namespace ClinicTrack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnLogin;


	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblMain;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblMain = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Location = System::Drawing::Point(750, 559);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(66, 20);
			this->linkLabel1->TabIndex = 25;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Sign Up";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(567, 559);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 20);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Don\'t have an account\?";
			// 
			// btnLogin
			// 
			this->btnLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLogin->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(589, 471);
			this->btnLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(200, 50);
			this->btnLogin->TabIndex = 23;
			this->btnLogin->Text = L"Log In";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPassword->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(508, 365);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(360, 34);
			this->txtPassword->TabIndex = 22;
			// 
			// txtEmail
			// 
			this->txtEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtEmail->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(508, 272);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(360, 34);
			this->txtEmail->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(504, 338);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 22);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Password:";
			this->label2->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(504, 245);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 22);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Email:";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// lblMain
			// 
			this->lblMain->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblMain->AutoSize = true;
			this->lblMain->BackColor = System::Drawing::Color::Transparent;
			this->lblMain->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMain->Location = System::Drawing::Point(491, 115);
			this->lblMain->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblMain->Name = L"lblMain";
			this->lblMain->Size = System::Drawing::Size(395, 61);
			this->lblMain->TabIndex = 18;
			this->lblMain->Text = L"CLINIC RECORDS";
			this->lblMain->Click += gcnew System::EventHandler(this, &Login::lblMain_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1344, 712);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblMain);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Login";
			this->Text = L"Login";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
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
	this->Hide();
	Registration^ regForm = gcnew Registration();
	regForm->ShowDialog();
	this->Show();
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ inputEmail = txtEmail->Text;
	String^ inputPassword = txtPassword->Text;
	String^ filename = "user_database.txt";

	// 1. Tsek muna kung may nagawa nang text file (database file)
	if (!File::Exists(filename)) {
		MessageBox::Show("No registered accounts found in the system. Please sign up first.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	try {
		array<String^>^ allAccounts = System::IO::File::ReadAllLines(filename);
		bool loginSuccess = false;

		for each (String ^ accountLine in allAccounts) {
			array<String^>^ parts = accountLine->Split(',');

			if (parts->Length >= 3) {
				String^ savedName = parts[0]->Trim();
				String^ savedEmail = parts[1]->Trim();
				String^ savedPassword = parts[2]->Trim();

				if (inputEmail == savedEmail && inputPassword == savedPassword) {
					loginSuccess = true;
					System::IO::File::WriteAllText("current_user.txt", savedName);
					break;
				}
			}
		}
	if (loginSuccess) {
		this->Hide();

		// Buksan si Main gamit ang default constructor dahil babasahin naman niya ang txt file
		ClinicTrack::Main^ mainSystem = gcnew ClinicTrack::Main();
		mainSystem->Show();
	}
	else {
		MessageBox::Show("Wrong Email or Password. Try again.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

} // Dito magtatapos ang 'try' block
	   catch (Exception^ ex) {
		   MessageBox::Show("An error occurred while reading the account: " + ex->Message, "Error");
	   }
}
private: System::Void lblMain_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
