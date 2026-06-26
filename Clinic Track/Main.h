#pragma once
#include <Fstream>
#include <iostream>

namespace ClinicTrack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();

			

			try {
				// 1. Basahin kung sino ang nakatala sa current_user.txt
				if (System::IO::File::Exists("current_user.txt")) {
					String^ activeUser = System::IO::File::ReadAllText("current_user.txt")->Trim();
					txtActiveUsername->Text = activeUser; // Siguraduhing tugma sa Name property ng textbox mo
				}
				else {
					txtActiveUsername->Text = "Unknown User";
				}

				// 2. Kuhanin ang saktong Oras at Petsa NGAYON sa computer
				System::DateTime now = System::DateTime::Now;
				lblLoginDate->Text = now.ToString("MMMM dd, yyyy"); // Halimbawa: June 19, 2026
				lblLoginTime->Text = now.ToString("hh:mm tt");      // Halimbawa: 01:45 PM

				// 3. Gawing bawal i-edit ng user ang mga boxes (Para display lang talaga)
				txtActiveUsername->ReadOnly = true;
				lblLoginDate->ReadOnly = true;
				lblLoginTime->ReadOnly = true;

			}
			catch (System::Exception^ ex) {
				MessageBox::Show("Error loading session info: " + ex->Message, "System Error");
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnTrack;
	private: System::Windows::Forms::Button^ btnNavSettings;
	protected:

	protected:




	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnPatientRecord;


	private: System::Windows::Forms::Button^ btnPatientRegistration;
	private: System::Windows::Forms::Panel^ pnlContainer;










	private: System::Windows::Forms::Panel^ pnlPatientReg;

	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ txtPatFullName;
	private: System::Windows::Forms::NumericUpDown^ nudPatAge;


	private: System::Windows::Forms::TextBox^ txtPatAddress;



	private: System::Windows::Forms::ComboBox^ cbPatGender;
	private: System::Windows::Forms::ComboBox^ cbPatBloodType;
	private: System::Windows::Forms::TextBox^ txtPatEmergContact;



	private: System::Windows::Forms::TextBox^ txtPatEmergName;

	private: System::Windows::Forms::TextBox^ txtPatContact;



	private: System::Windows::Forms::Button^ btnSave;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ pnlRecordManagement;
	private: System::Windows::Forms::DataGridView^ dgvPatients;










	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::Button^ btnSearch;



	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ pnlWelcome;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::Panel^ pnlAppointmentSched;


private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::DateTimePicker^ dtpAppotDate;

private: System::Windows::Forms::TextBox^ txtAppotPatientName;


private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ txtAppotReason;


private: System::Windows::Forms::ComboBox^ cbAppotDoctor;

private: System::Windows::Forms::ComboBox^ cbAppotTime;

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Panel^ pnlAppointmentMonitor;


private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TextBox^ txtSearchAppot;

private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::DataGridView^ dgvAppointments;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::Panel^ pnlAccountSettings;


private: System::Windows::Forms::Label^ label27;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ txtActiveUsername;
private: System::Windows::Forms::TextBox^ lblLoginTime;










private: System::Windows::Forms::TextBox^ lblLoginDate;



private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label31;

private: System::Windows::Forms::Button^ btnLogout;


private: System::Windows::Forms::Button^ btnExit;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label28;









































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->btnTrack = (gcnew System::Windows::Forms::Button());
			this->btnNavSettings = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnPatientRecord = (gcnew System::Windows::Forms::Button());
			this->btnPatientRegistration = (gcnew System::Windows::Forms::Button());
			this->pnlContainer = (gcnew System::Windows::Forms::Panel());
			this->pnlRecordManagement = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->dgvPatients = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pnlAppointmentMonitor = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtSearchAppot = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dgvAppointments = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pnlPatientReg = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->cbPatBloodType = (gcnew System::Windows::Forms::ComboBox());
			this->txtPatEmergContact = (gcnew System::Windows::Forms::TextBox());
			this->txtPatEmergName = (gcnew System::Windows::Forms::TextBox());
			this->txtPatContact = (gcnew System::Windows::Forms::TextBox());
			this->cbPatGender = (gcnew System::Windows::Forms::ComboBox());
			this->nudPatAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtPatAddress = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtPatFullName = (gcnew System::Windows::Forms::TextBox());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->pnlAppointmentSched = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtAppotReason = (gcnew System::Windows::Forms::TextBox());
			this->cbAppotDoctor = (gcnew System::Windows::Forms::ComboBox());
			this->cbAppotTime = (gcnew System::Windows::Forms::ComboBox());
			this->dtpAppotDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtAppotPatientName = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pnlAccountSettings = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtActiveUsername = (gcnew System::Windows::Forms::TextBox());
			this->lblLoginTime = (gcnew System::Windows::Forms::TextBox());
			this->lblLoginDate = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnlWelcome = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pnlContainer->SuspendLayout();
			this->pnlRecordManagement->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPatients))->BeginInit();
			this->pnlAppointmentMonitor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAppointments))->BeginInit();
			this->pnlPatientReg->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPatAge))->BeginInit();
			this->pnlAppointmentSched->SuspendLayout();
			this->pnlAccountSettings->SuspendLayout();
			this->pnlWelcome->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnTrack
			// 
			this->btnTrack->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btnTrack->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnTrack->FlatAppearance->BorderSize = 0;
			this->btnTrack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnTrack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTrack->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTrack->Location = System::Drawing::Point(70, 476);
			this->btnTrack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnTrack->Name = L"btnTrack";
			this->btnTrack->Size = System::Drawing::Size(312, 50);
			this->btnTrack->TabIndex = 14;
			this->btnTrack->Text = L"Track Appointment";
			this->btnTrack->UseVisualStyleBackColor = false;
			this->btnTrack->Click += gcnew System::EventHandler(this, &Main::btnSchedule_Click);
			// 
			// btnNavSettings
			// 
			this->btnNavSettings->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btnNavSettings->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnNavSettings->FlatAppearance->BorderSize = 0;
			this->btnNavSettings->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnNavSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavSettings->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNavSettings->Location = System::Drawing::Point(70, 556);
			this->btnNavSettings->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnNavSettings->Name = L"btnNavSettings";
			this->btnNavSettings->Size = System::Drawing::Size(312, 50);
			this->btnNavSettings->TabIndex = 13;
			this->btnNavSettings->Text = L"Account Settings";
			this->btnNavSettings->UseVisualStyleBackColor = false;
			this->btnNavSettings->Click += gcnew System::EventHandler(this, &Main::btnNavSettings_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(70, 316);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(312, 50);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Schedule Appointment";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Main::btnTrack_Click);
			// 
			// btnPatientRecord
			// 
			this->btnPatientRecord->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btnPatientRecord->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnPatientRecord->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnPatientRecord->FlatAppearance->BorderSize = 0;
			this->btnPatientRecord->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnPatientRecord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPatientRecord->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPatientRecord->Location = System::Drawing::Point(70, 396);
			this->btnPatientRecord->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnPatientRecord->Name = L"btnPatientRecord";
			this->btnPatientRecord->Size = System::Drawing::Size(312, 50);
			this->btnPatientRecord->TabIndex = 10;
			this->btnPatientRecord->Text = L" Patient Records";
			this->btnPatientRecord->UseVisualStyleBackColor = false;
			this->btnPatientRecord->Click += gcnew System::EventHandler(this, &Main::btnPatientRecord_Click);
			// 
			// btnPatientRegistration
			// 
			this->btnPatientRegistration->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btnPatientRegistration->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnPatientRegistration->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnPatientRegistration->FlatAppearance->BorderSize = 0;
			this->btnPatientRegistration->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnPatientRegistration->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPatientRegistration->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPatientRegistration->ForeColor = System::Drawing::Color::Black;
			this->btnPatientRegistration->Location = System::Drawing::Point(70, 236);
			this->btnPatientRegistration->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnPatientRegistration->Name = L"btnPatientRegistration";
			this->btnPatientRegistration->Size = System::Drawing::Size(312, 50);
			this->btnPatientRegistration->TabIndex = 9;
			this->btnPatientRegistration->Text = L"Patient Registration";
			this->btnPatientRegistration->UseVisualStyleBackColor = false;
			this->btnPatientRegistration->Click += gcnew System::EventHandler(this, &Main::btnPatientRegistration_Click);
			// 
			// pnlContainer
			// 
			this->pnlContainer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pnlContainer->Controls->Add(this->pnlAppointmentSched);
			this->pnlContainer->Controls->Add(this->pnlRecordManagement);
			this->pnlContainer->Controls->Add(this->pnlAppointmentMonitor);
			this->pnlContainer->Controls->Add(this->pnlPatientReg);
			this->pnlContainer->Controls->Add(this->pnlAccountSettings);
			this->pnlContainer->Controls->Add(this->pnlWelcome);
			this->pnlContainer->Location = System::Drawing::Point(408, 40);
			this->pnlContainer->Name = L"pnlContainer";
			this->pnlContainer->Size = System::Drawing::Size(870, 626);
			this->pnlContainer->TabIndex = 15;
			this->pnlContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Main::panel1_Paint);
			// 
			// pnlRecordManagement
			// 
			this->pnlRecordManagement->Controls->Add(this->label15);
			this->pnlRecordManagement->Controls->Add(this->btnSearch);
			this->pnlRecordManagement->Controls->Add(this->txtSearch);
			this->pnlRecordManagement->Controls->Add(this->label13);
			this->pnlRecordManagement->Controls->Add(this->btnDelete);
			this->pnlRecordManagement->Controls->Add(this->btnUpdate);
			this->pnlRecordManagement->Controls->Add(this->dgvPatients);
			this->pnlRecordManagement->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlRecordManagement->Location = System::Drawing::Point(0, 0);
			this->pnlRecordManagement->Name = L"pnlRecordManagement";
			this->pnlRecordManagement->Size = System::Drawing::Size(870, 626);
			this->pnlRecordManagement->TabIndex = 35;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(38, 144);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(203, 25);
			this->label15->TabIndex = 64;
			this->label15->Text = L"Search Patient Name:";
			// 
			// btnSearch
			// 
			this->btnSearch->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSearch->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(750, 140);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(86, 34);
			this->btnSearch->TabIndex = 63;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Main::btnSearch_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(248, 140);
			this->txtSearch->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(495, 34);
			this->txtSearch->TabIndex = 61;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(322, 40);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(228, 38);
			this->label13->TabIndex = 26;
			this->label13->Text = L" Patient Records";
			// 
			// btnDelete
			// 
			this->btnDelete->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnDelete->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(455, 541);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(200, 50);
			this->btnDelete->TabIndex = 25;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &Main::btnDelete_Click_1);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnUpdate->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(206, 541);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(200, 50);
			this->btnUpdate->TabIndex = 24;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &Main::btnUpdate_Click);
			// 
			// dgvPatients
			// 
			this->dgvPatients->AllowUserToAddRows = false;
			this->dgvPatients->AllowUserToDeleteRows = false;
			this->dgvPatients->AllowUserToResizeColumns = false;
			this->dgvPatients->AllowUserToResizeRows = false;
			this->dgvPatients->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->dgvPatients->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvPatients->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPatients->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvPatients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPatients->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvPatients->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvPatients->Location = System::Drawing::Point(24, 196);
			this->dgvPatients->MultiSelect = false;
			this->dgvPatients->Name = L"dgvPatients";
			this->dgvPatients->ReadOnly = true;
			this->dgvPatients->RowHeadersVisible = false;
			this->dgvPatients->RowHeadersWidth = 62;
			this->dgvPatients->RowTemplate->Height = 28;
			this->dgvPatients->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvPatients->Size = System::Drawing::Size(821, 320);
			this->dgvPatients->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Patient ID";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Full Name";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Age";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Gender";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Contact No.";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Blood Type";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Address";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Emegency Contacy Name";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Emegency Contacy No.";
			this->Column9->MinimumWidth = 8;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// pnlAppointmentMonitor
			// 
			this->pnlAppointmentMonitor->Controls->Add(this->label23);
			this->pnlAppointmentMonitor->Controls->Add(this->button3);
			this->pnlAppointmentMonitor->Controls->Add(this->txtSearchAppot);
			this->pnlAppointmentMonitor->Controls->Add(this->button7);
			this->pnlAppointmentMonitor->Controls->Add(this->button8);
			this->pnlAppointmentMonitor->Controls->Add(this->dgvAppointments);
			this->pnlAppointmentMonitor->Controls->Add(this->label22);
			this->pnlAppointmentMonitor->Controls->Add(this->button2);
			this->pnlAppointmentMonitor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlAppointmentMonitor->Location = System::Drawing::Point(0, 0);
			this->pnlAppointmentMonitor->Name = L"pnlAppointmentMonitor";
			this->pnlAppointmentMonitor->Size = System::Drawing::Size(870, 626);
			this->pnlAppointmentMonitor->TabIndex = 71;
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(39, 150);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(203, 25);
			this->label23->TabIndex = 70;
			this->label23->Text = L"Search Patient Name:";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(751, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 34);
			this->button3->TabIndex = 69;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// txtSearchAppot
			// 
			this->txtSearchAppot->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtSearchAppot->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSearchAppot->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearchAppot->Location = System::Drawing::Point(249, 146);
			this->txtSearchAppot->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtSearchAppot->Name = L"txtSearchAppot";
			this->txtSearchAppot->Size = System::Drawing::Size(495, 34);
			this->txtSearchAppot->TabIndex = 68;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(456, 547);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(200, 50);
			this->button7->TabIndex = 67;
			this->button7->Text = L"Complete";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Main::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(207, 547);
			this->button8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(200, 50);
			this->button8->TabIndex = 66;
			this->button8->Text = L"Cancel";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Main::button8_Click);
			// 
			// dgvAppointments
			// 
			this->dgvAppointments->AllowUserToAddRows = false;
			this->dgvAppointments->AllowUserToDeleteRows = false;
			this->dgvAppointments->AllowUserToResizeColumns = false;
			this->dgvAppointments->AllowUserToResizeRows = false;
			this->dgvAppointments->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->dgvAppointments->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvAppointments->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvAppointments->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvAppointments->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAppointments->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->Column10
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvAppointments->DefaultCellStyle = dataGridViewCellStyle4;
			this->dgvAppointments->Location = System::Drawing::Point(25, 202);
			this->dgvAppointments->MultiSelect = false;
			this->dgvAppointments->Name = L"dgvAppointments";
			this->dgvAppointments->ReadOnly = true;
			this->dgvAppointments->RowHeadersVisible = false;
			this->dgvAppointments->RowHeadersWidth = 62;
			this->dgvAppointments->RowTemplate->Height = 28;
			this->dgvAppointments->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvAppointments->Size = System::Drawing::Size(821, 320);
			this->dgvAppointments->TabIndex = 65;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Appointment ID";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Patient Name";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Date";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Time";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Doctor";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Reasons";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Status";
			this->Column10->MinimumWidth = 8;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(310, 40);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(270, 38);
			this->label22->TabIndex = 28;
			this->label22->Text = L"Track Appointment";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(541, 804);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 50);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// pnlPatientReg
			// 
			this->pnlPatientReg->Controls->Add(this->label12);
			this->pnlPatientReg->Controls->Add(this->label11);
			this->pnlPatientReg->Controls->Add(this->label10);
			this->pnlPatientReg->Controls->Add(this->label9);
			this->pnlPatientReg->Controls->Add(this->label8);
			this->pnlPatientReg->Controls->Add(this->label7);
			this->pnlPatientReg->Controls->Add(this->label6);
			this->pnlPatientReg->Controls->Add(this->label5);
			this->pnlPatientReg->Controls->Add(this->label4);
			this->pnlPatientReg->Controls->Add(this->btnSave);
			this->pnlPatientReg->Controls->Add(this->cbPatBloodType);
			this->pnlPatientReg->Controls->Add(this->txtPatEmergContact);
			this->pnlPatientReg->Controls->Add(this->txtPatEmergName);
			this->pnlPatientReg->Controls->Add(this->txtPatContact);
			this->pnlPatientReg->Controls->Add(this->cbPatGender);
			this->pnlPatientReg->Controls->Add(this->nudPatAge);
			this->pnlPatientReg->Controls->Add(this->txtPatAddress);
			this->pnlPatientReg->Controls->Add(this->dateTimePicker1);
			this->pnlPatientReg->Controls->Add(this->txtPatFullName);
			this->pnlPatientReg->Controls->Add(this->lblTitle);
			this->pnlPatientReg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlPatientReg->Location = System::Drawing::Point(0, 0);
			this->pnlPatientReg->Name = L"pnlPatientReg";
			this->pnlPatientReg->Size = System::Drawing::Size(870, 626);
			this->pnlPatientReg->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(471, 408);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 22);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Blood Type:";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(471, 305);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(200, 22);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Emergency Contact No.\r\n";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(471, 214);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(224, 22);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Emergency Contact Name:";
			this->label10->Click += gcnew System::EventHandler(this, &Main::label10_Click);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(471, 109);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 22);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Contact No.";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(85, 409);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 22);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Address:";
			this->label8->Click += gcnew System::EventHandler(this, &Main::label8_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(297, 303);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 22);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Gender:";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(85, 305);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 22);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Age:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(85, 211);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 22);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Birth Date:";
			this->label5->Click += gcnew System::EventHandler(this, &Main::label5_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(85, 109);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 22);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Full Name:";
			// 
			// btnSave
			// 
			this->btnSave->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSave->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(352, 541);
			this->btnSave->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(200, 50);
			this->btnSave->TabIndex = 24;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &Main::btnSave_Click);
			// 
			// cbPatBloodType
			// 
			this->cbPatBloodType->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cbPatBloodType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPatBloodType->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbPatBloodType->FormattingEnabled = true;
			this->cbPatBloodType->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"A-", L"B+", L"B-", L"AB+", L"AB-",
					L"O+", L"O-"
			});
			this->cbPatBloodType->Location = System::Drawing::Point(475, 433);
			this->cbPatBloodType->Name = L"cbPatBloodType";
			this->cbPatBloodType->Size = System::Drawing::Size(121, 36);
			this->cbPatBloodType->TabIndex = 9;
			// 
			// txtPatEmergContact
			// 
			this->txtPatEmergContact->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPatEmergContact->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPatEmergContact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPatEmergContact->Location = System::Drawing::Point(475, 330);
			this->txtPatEmergContact->Name = L"txtPatEmergContact";
			this->txtPatEmergContact->Size = System::Drawing::Size(330, 34);
			this->txtPatEmergContact->TabIndex = 8;
			// 
			// txtPatEmergName
			// 
			this->txtPatEmergName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPatEmergName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPatEmergName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPatEmergName->Location = System::Drawing::Point(475, 239);
			this->txtPatEmergName->Name = L"txtPatEmergName";
			this->txtPatEmergName->Size = System::Drawing::Size(330, 34);
			this->txtPatEmergName->TabIndex = 7;
			// 
			// txtPatContact
			// 
			this->txtPatContact->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPatContact->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPatContact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPatContact->Location = System::Drawing::Point(475, 134);
			this->txtPatContact->Name = L"txtPatContact";
			this->txtPatContact->Size = System::Drawing::Size(330, 34);
			this->txtPatContact->TabIndex = 6;
			// 
			// cbPatGender
			// 
			this->cbPatGender->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cbPatGender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPatGender->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbPatGender->FormattingEnabled = true;
			this->cbPatGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cbPatGender->Location = System::Drawing::Point(301, 328);
			this->cbPatGender->Name = L"cbPatGender";
			this->cbPatGender->Size = System::Drawing::Size(121, 36);
			this->cbPatGender->TabIndex = 5;
			// 
			// nudPatAge
			// 
			this->nudPatAge->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->nudPatAge->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudPatAge->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudPatAge->Location = System::Drawing::Point(89, 330);
			this->nudPatAge->Name = L"nudPatAge";
			this->nudPatAge->Size = System::Drawing::Size(120, 34);
			this->nudPatAge->TabIndex = 4;
			// 
			// txtPatAddress
			// 
			this->txtPatAddress->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPatAddress->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPatAddress->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPatAddress->Location = System::Drawing::Point(89, 434);
			this->txtPatAddress->Multiline = true;
			this->txtPatAddress->Name = L"txtPatAddress";
			this->txtPatAddress->Size = System::Drawing::Size(333, 75);
			this->txtPatAddress->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(89, 236);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(333, 34);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// txtPatFullName
			// 
			this->txtPatFullName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPatFullName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPatFullName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPatFullName->Location = System::Drawing::Point(89, 134);
			this->txtPatFullName->Name = L"txtPatFullName";
			this->txtPatFullName->Size = System::Drawing::Size(333, 34);
			this->txtPatFullName->TabIndex = 1;
			this->txtPatFullName->TextChanged += gcnew System::EventHandler(this, &Main::textBox1_TextChanged);
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(320, 26);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(277, 38);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Patient Registration";
			this->lblTitle->Click += gcnew System::EventHandler(this, &Main::lblTitle_Click);
			// 
			// pnlAppointmentSched
			// 
			this->pnlAppointmentSched->Controls->Add(this->button1);
			this->pnlAppointmentSched->Controls->Add(this->label21);
			this->pnlAppointmentSched->Controls->Add(this->label20);
			this->pnlAppointmentSched->Controls->Add(this->label19);
			this->pnlAppointmentSched->Controls->Add(this->label18);
			this->pnlAppointmentSched->Controls->Add(this->label17);
			this->pnlAppointmentSched->Controls->Add(this->txtAppotReason);
			this->pnlAppointmentSched->Controls->Add(this->cbAppotDoctor);
			this->pnlAppointmentSched->Controls->Add(this->cbAppotTime);
			this->pnlAppointmentSched->Controls->Add(this->dtpAppotDate);
			this->pnlAppointmentSched->Controls->Add(this->txtAppotPatientName);
			this->pnlAppointmentSched->Controls->Add(this->label16);
			this->pnlAppointmentSched->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlAppointmentSched->Location = System::Drawing::Point(0, 0);
			this->pnlAppointmentSched->Name = L"pnlAppointmentSched";
			this->pnlAppointmentSched->Size = System::Drawing::Size(870, 626);
			this->pnlAppointmentSched->TabIndex = 65;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(329, 517);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 50);
			this->button1->TabIndex = 70;
			this->button1->Text = L"Book";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main::btnBook_Click);
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(470, 154);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(162, 25);
			this->label21->TabIndex = 69;
			this->label21->Text = L"Assigned Doctor:";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(470, 265);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(263, 25);
			this->label20->TabIndex = 68;
			this->label20->Text = L"Reason for Visit / Symptoms:";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(74, 385);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(62, 25);
			this->label19->TabIndex = 67;
			this->label19->Text = L"Time:";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(74, 268);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(59, 25);
			this->label18->TabIndex = 66;
			this->label18->Text = L"Date:";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(72, 154);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(135, 25);
			this->label17->TabIndex = 65;
			this->label17->Text = L"Patient Name:";
			// 
			// txtAppotReason
			// 
			this->txtAppotReason->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtAppotReason->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtAppotReason->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAppotReason->Location = System::Drawing::Point(472, 295);
			this->txtAppotReason->Multiline = true;
			this->txtAppotReason->Name = L"txtAppotReason";
			this->txtAppotReason->Size = System::Drawing::Size(333, 86);
			this->txtAppotReason->TabIndex = 33;
			// 
			// cbAppotDoctor
			// 
			this->cbAppotDoctor->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cbAppotDoctor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbAppotDoctor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbAppotDoctor->FormattingEnabled = true;
			this->cbAppotDoctor->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Dr. Gabriel Santos (General Physician)",
					L"Dr. Althea Reyes (Pediatrics - Kids)", L"Dr. Marcus Cruz (Internal Medicine)", L"Dr. Chloe Villanueva (OB-GYN)", L"Dr. Juan Luna (Cardiologist - Heart)",
					L"Dr. Sarah De Leon (Dermatologist - Skin)"
			});
			this->cbAppotDoctor->Location = System::Drawing::Point(472, 180);
			this->cbAppotDoctor->Name = L"cbAppotDoctor";
			this->cbAppotDoctor->Size = System::Drawing::Size(333, 36);
			this->cbAppotDoctor->TabIndex = 32;
			// 
			// cbAppotTime
			// 
			this->cbAppotTime->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cbAppotTime->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbAppotTime->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbAppotTime->FormattingEnabled = true;
			this->cbAppotTime->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"08:00 AM", L"09:00 AM", L"10:00 AM", L"11:00 AM",
					L"01:00 PM", L"02:00 PM", L"03:00 PM", L"04:00 PM"
			});
			this->cbAppotTime->Location = System::Drawing::Point(77, 410);
			this->cbAppotTime->Name = L"cbAppotTime";
			this->cbAppotTime->Size = System::Drawing::Size(333, 36);
			this->cbAppotTime->TabIndex = 31;
			// 
			// dtpAppotDate
			// 
			this->dtpAppotDate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dtpAppotDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpAppotDate->Location = System::Drawing::Point(77, 295);
			this->dtpAppotDate->Name = L"dtpAppotDate";
			this->dtpAppotDate->Size = System::Drawing::Size(333, 34);
			this->dtpAppotDate->TabIndex = 30;
			// 
			// txtAppotPatientName
			// 
			this->txtAppotPatientName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtAppotPatientName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtAppotPatientName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAppotPatientName->Location = System::Drawing::Point(77, 182);
			this->txtAppotPatientName->Name = L"txtAppotPatientName";
			this->txtAppotPatientName->Size = System::Drawing::Size(333, 34);
			this->txtAppotPatientName->TabIndex = 28;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(273, 39);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(327, 38);
			this->label16->TabIndex = 27;
			this->label16->Text = L" Schedule Appointment";
			// 
			// pnlAccountSettings
			// 
			this->pnlAccountSettings->Controls->Add(this->btnExit);
			this->pnlAccountSettings->Controls->Add(this->label31);
			this->pnlAccountSettings->Controls->Add(this->btnLogout);
			this->pnlAccountSettings->Controls->Add(this->label27);
			this->pnlAccountSettings->Controls->Add(this->label25);
			this->pnlAccountSettings->Controls->Add(this->label24);
			this->pnlAccountSettings->Controls->Add(this->txtActiveUsername);
			this->pnlAccountSettings->Controls->Add(this->lblLoginTime);
			this->pnlAccountSettings->Controls->Add(this->lblLoginDate);
			this->pnlAccountSettings->Controls->Add(this->label1);
			this->pnlAccountSettings->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlAccountSettings->Location = System::Drawing::Point(0, 0);
			this->pnlAccountSettings->Name = L"pnlAccountSettings";
			this->pnlAccountSettings->Size = System::Drawing::Size(870, 626);
			this->pnlAccountSettings->TabIndex = 71;
			// 
			// btnExit
			// 
			this->btnExit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnExit->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(496, 530);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(200, 50);
			this->btnExit->TabIndex = 76;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &Main::btnExit_Click);
			// 
			// label31
			// 
			this->label31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(350, 155);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(207, 28);
			this->label31->TabIndex = 75;
			this->label31->Text = L"Current User Session";
			// 
			// btnLogout
			// 
			this->btnLogout->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLogout->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(225, 530);
			this->btnLogout->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(200, 50);
			this->btnLogout->TabIndex = 73;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &Main::btnLogout_Click);
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(287, 207);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(118, 25);
			this->label27->TabIndex = 69;
			this->label27->Text = L"Active User:";
			this->label27->Click += gcnew System::EventHandler(this, &Main::label27_Click);
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(287, 377);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(115, 25);
			this->label25->TabIndex = 67;
			this->label25->Text = L"Login Time:";
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(284, 288);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(112, 25);
			this->label24->TabIndex = 66;
			this->label24->Text = L"Login Date:";
			// 
			// txtActiveUsername
			// 
			this->txtActiveUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtActiveUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtActiveUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtActiveUsername->Location = System::Drawing::Point(289, 236);
			this->txtActiveUsername->Name = L"txtActiveUsername";
			this->txtActiveUsername->ReadOnly = true;
			this->txtActiveUsername->Size = System::Drawing::Size(333, 34);
			this->txtActiveUsername->TabIndex = 33;
			// 
			// lblLoginTime
			// 
			this->lblLoginTime->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblLoginTime->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoginTime->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLoginTime->Location = System::Drawing::Point(289, 405);
			this->lblLoginTime->Name = L"lblLoginTime";
			this->lblLoginTime->ReadOnly = true;
			this->lblLoginTime->Size = System::Drawing::Size(333, 34);
			this->lblLoginTime->TabIndex = 31;
			// 
			// lblLoginDate
			// 
			this->lblLoginDate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblLoginDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblLoginDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLoginDate->Location = System::Drawing::Point(289, 316);
			this->lblLoginDate->Name = L"lblLoginDate";
			this->lblLoginDate->ReadOnly = true;
			this->lblLoginDate->Size = System::Drawing::Size(333, 34);
			this->lblLoginDate->TabIndex = 30;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(332, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 38);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Account Settings";
			// 
			// pnlWelcome
			// 
			this->pnlWelcome->Controls->Add(this->label3);
			this->pnlWelcome->Controls->Add(this->label2);
			this->pnlWelcome->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlWelcome->Location = System::Drawing::Point(0, 0);
			this->pnlWelcome->Name = L"pnlWelcome";
			this->pnlWelcome->Size = System::Drawing::Size(870, 626);
			this->pnlWelcome->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(134, 326);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(603, 28);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Good day! Please select an option from the menu to get started.";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(148, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(559, 54);
			this->label2->TabIndex = 4;
			this->label2->Text = L"WELCOME TO CLINICTRACK!";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Navy;
			this->label26->Location = System::Drawing::Point(57, 70);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(176, 74);
			this->label26->TabIndex = 77;
			this->label26->Text = L"Clinic";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Teal;
			this->label28->Location = System::Drawing::Point(211, 70);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(171, 74);
			this->label28->TabIndex = 78;
			this->label28->Text = L"Track";
			this->label28->Click += gcnew System::EventHandler(this, &Main::label28_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1344, 712);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->pnlContainer);
			this->Controls->Add(this->btnTrack);
			this->Controls->Add(this->btnNavSettings);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btnPatientRecord);
			this->Controls->Add(this->btnPatientRegistration);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Main";
			this->Text = L"Main";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->pnlContainer->ResumeLayout(false);
			this->pnlRecordManagement->ResumeLayout(false);
			this->pnlRecordManagement->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPatients))->EndInit();
			this->pnlAppointmentMonitor->ResumeLayout(false);
			this->pnlAppointmentMonitor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAppointments))->EndInit();
			this->pnlPatientReg->ResumeLayout(false);
			this->pnlPatientReg->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPatAge))->EndInit();
			this->pnlAppointmentSched->ResumeLayout(false);
			this->pnlAppointmentSched->PerformLayout();
			this->pnlAccountSettings->ResumeLayout(false);
			this->pnlAccountSettings->PerformLayout();
			this->pnlWelcome->ResumeLayout(false);
			this->pnlWelcome->PerformLayout();
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
private:
	void LoadAppointmentRecords() {
		// Siguraduhing tama ang pangalan ng DataGridView mo para sa Track Appointment
		dgvAppointments->Rows->Clear();

		if (System::IO::File::Exists("appointments.txt")) {
			array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");

			for (int i = 0; i < lines->Length; i++) {
				if (System::String::IsNullOrWhiteSpace(lines[i])) continue;

				array<String^>^ parts = lines[i]->Split(',');

				// Dapat may 7 parts: ID, Name, Date, Time, Doctor, Reason, Status
				if (parts->Length >= 7) {
					dgvAppointments->Rows->Add(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6]);
				}
			}
		}
	}
private:
	String^ targetUpdateID = "";

	void LoadPatientRecords() {
		// 1. Linisin muna ang lumang laman ng DataGridView para hindi mag-double
		dgvPatients->Rows->Clear();

		// 2. Basahin ang bawat linya ng patients.txt kung mayroon nito
		if (System::IO::File::Exists("patients.txt")) {
			array<String^>^ lines = System::IO::File::ReadAllLines("patients.txt");

			for (int i = 0; i < lines->Length; i++) {
				array<String^>^ parts = lines[i]->Split(',');

				// 3. Siguraduhing may sapat na columns bago ihulog sa DataGridView mo
				if (parts->Length >= 9) {
					dgvPatients->Rows->Add(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6], parts[7], parts[8]);
				}
			}
		}
	}
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadPatientRecords();

		pnlWelcome->Visible = true;
		pnlWelcome->BringToFront();

		pnlPatientReg->Visible = false;
		pnlRecordManagement->Visible = false;
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void lblTitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPatientRegistration_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadPatientRecords();

	pnlPatientReg->Visible = true;
	pnlPatientReg->BringToFront();

	pnlWelcome->Visible = false;
	pnlRecordManagement->Visible = false;
}
private: System::Void btnPatientRecord_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlRecordManagement->Visible = true;
	pnlRecordManagement->BringToFront();

	pnlWelcome->Visible = false;
	pnlPatientReg->Visible = false;
}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtPatFullName->Text == "") {
		MessageBox::Show("Please fill out all required fields.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// BAGO: Inayos ang string para sumunod sa pwesto ng columns mo (Address muna bago Emergency)
	String^ currentRecord = targetUpdateID + "," + txtPatFullName->Text + "," + nudPatAge->Value.ToString() + "," + cbPatGender->Text + "," + txtPatContact->Text + "," + cbPatBloodType->Text + "," + txtPatAddress->Text + "," + txtPatEmergName->Text + "," + txtPatEmergContact->Text;

	if (targetUpdateID == "" || targetUpdateID == nullptr) {
		// =========================================================
		// MODE A: NEW PATIENT 
		// =========================================================
		int lineCount = 1;
		if (System::IO::File::Exists("patients.txt")) {
			array<String^>^ totalLines = System::IO::File::ReadAllLines("patients.txt");
			int validLines = 0;
			for (int i = 0; i < totalLines->Length; i++) {
				if (!System::String::IsNullOrWhiteSpace(totalLines[i])) validLines++;
			}
			lineCount = validLines + 1;
		}
		String^ autoID = lineCount.ToString("D3");

		// Buuin ulit gamit ang tamang Auto ID at bagong format
		currentRecord = autoID + "," + txtPatFullName->Text + "," + nudPatAge->Value.ToString() + "," + cbPatGender->Text + "," + txtPatContact->Text + "," + cbPatBloodType->Text + "," + txtPatAddress->Text + "," + txtPatEmergName->Text + "," + txtPatEmergContact->Text;

		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("patients.txt", true);
		sw->WriteLine(currentRecord);
		sw->Close();

		MessageBox::Show("Patient record successfully saved!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		// =========================================================
		// MODE B: UPDATE PATIENT
		// =========================================================
		if (System::IO::File::Exists("patients.txt")) {
			array<String^>^ lines = System::IO::File::ReadAllLines("patients.txt");
			System::Collections::Generic::List<String^>^ updatedLines = gcnew System::Collections::Generic::List<String^>();

			for (int i = 0; i < lines->Length; i++) {
				if (System::String::IsNullOrWhiteSpace(lines[i])) continue;

				array<String^>^ parts = lines[i]->Split(',');

				if (parts->Length >= 2 && parts[0] == targetUpdateID) {
					updatedLines->Add(currentRecord); // Ipalit ang binagong record
				}
				else {
					updatedLines->Add(lines[i]);
				}
			}
			System::IO::File::WriteAllLines("patients.txt", updatedLines->ToArray());
			MessageBox::Show("Patient record successfully updated!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		targetUpdateID = "";
	}

	// I-refresh ang data grid view at linisin ang form
	LoadPatientRecords();

	txtPatFullName->Clear();
	nudPatAge->Value = 0;
	cbPatGender->SelectedIndex = -1;
	txtPatContact->Clear();
	cbPatBloodType->SelectedIndex = -1;
	txtPatEmergName->Clear();
	txtPatEmergContact->Clear();
	txtPatAddress->Clear();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvPatients->SelectedRows->Count == 0 || dgvPatients->SelectedRows[0]->Cells[0]->Value == nullptr) {
		MessageBox::Show("Please select a patient row from the table to update.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	try {
		// 1. Kuhanin ang Patient ID (Column 0)
		targetUpdateID = dgvPatients->SelectedRows[0]->Cells[0]->Value->ToString();

		// 2. Ibuhos pabalik ang mga text base sa mismong pwesto nila sa DataGridView mo:
		txtPatFullName->Text = dgvPatients->SelectedRows[0]->Cells[1]->Value != nullptr ? dgvPatients->SelectedRows[0]->Cells[1]->Value->ToString() : "";

		// Age (Column 2)
		if (dgvPatients->SelectedRows[0]->Cells[2]->Value != nullptr) {
			nudPatAge->Value = System::Convert::ToInt32(dgvPatients->SelectedRows[0]->Cells[2]->Value);
		}
		else {
			nudPatAge->Value = 0;
		}

		cbPatGender->Text = dgvPatients->SelectedRows[0]->Cells[3]->Value != nullptr ? dgvPatients->SelectedRows[0]->Cells[3]->Value->ToString() : ""; // Column 3
		txtPatContact->Text = dgvPatients->SelectedRows[0]->Cells[4]->Value != nullptr ? dgvPatients->SelectedRows[0]->Cells[4]->Value->ToString() : ""; // Column 4
		cbPatBloodType->Text = dgvPatients->SelectedRows[0]->Cells[5]->Value != nullptr ? dgvPatients->SelectedRows[0]->Cells[5]->Value->ToString() : ""; // Column 5
		txtPatAddress->Text = dgvPatients->SelectedRows[0]->Cells[6]->Value != nullptr ? dgvPatients->SelectedRows[0]->Cells[6]->Value->ToString() : "";
		txtPatEmergName->Text = dgvPatients->SelectedRows[0]->Cells[7]->Value != nullptr ? dgvPatients->SelectedRows[0]->Cells[7]->Value->ToString() : "";
		txtPatEmergContact->Text = dgvPatients->SelectedRows[0]->Cells[8]->Value != nullptr ? dgvPatients->SelectedRows[0]->Cells[8]->Value->ToString() : "";

		// 3. Lipat ng panel pabalik sa Registration Form
		pnlPatientReg->Visible = true;
		pnlPatientReg->BringToFront();

		pnlWelcome->Visible = false;
		pnlRecordManagement->Visible = false;

	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Error map data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnDelete_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// 1. Siguraduhing may napiling row sa table
	if (dgvPatients->SelectedRows->Count == 0) {
		MessageBox::Show("Please select a patient row from the table to delete.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Kuhanin ang Patient ID (Column 0) ng napiling row
	String^ selectedID = dgvPatients->SelectedRows[0]->Cells[0]->Value->ToString();
	String^ selectedName = dgvPatients->SelectedRows[0]->Cells[1]->Value->ToString();

	// Mag-tanong muna para siguradong hindi accidental ang pagpindot
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete " + selectedName + "?", "Confirm Delete", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		if (System::IO::File::Exists("patients.txt")) {
			array<String^>^ lines = System::IO::File::ReadAllLines("patients.txt");

			// Gagawa ng bagong listahan kung saan HINDI kasama ang binura mong ID
			System::Collections::Generic::List<String^>^ remainingLines = gcnew System::Collections::Generic::List<String^>();

			for (int i = 0; i < lines->Length; i++) {
				array<String^>^ parts = lines[i]->Split(',');
				if (parts->Length >= 9) {
					// Kung hindi kapareho ng buraing ID, i-save sa listahan
					if (parts[0] != selectedID) {
						remainingLines->Add(lines[i]);
					}
				}
			}

			// Isulat muli ang text file gamit ang natirang mga pasyente
			System::IO::File::WriteAllLines("patients.txt", remainingLines->ToArray());

			MessageBox::Show("Patient record successfully deleted!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// I-refresh ang table para mawala na ang binura
			LoadPatientRecords();
		}
	}
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ searchName = txtSearch->Text->Trim()->ToLower();

	// Kung walang tinype, i-load ulit lahat ng pasyente
	if (searchName == "") {
		LoadPatientRecords();
		return;
	}

	dgvPatients->Rows->Clear(); // Linisin ang table bago i-buhos ang filter results

	if (System::IO::File::Exists("patients.txt")) {
		array<String^>^ lines = System::IO::File::ReadAllLines("patients.txt");
		for (int i = 0; i < lines->Length; i++) {
			array<String^>^ parts = lines[i]->Split(',');
			if (parts->Length >= 9) {
				String^ currentPatientName = parts[1]->ToLower(); // parts[1] ay Full Name

				// Kung naglalaman ng sinesearch mong letra o pangalan
				if (currentPatientName->Contains(searchName)) {
					dgvPatients->Rows->Add(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6], parts[7], parts[8]);
				}
			}
		}
	}

}
private: System::Void btnBook_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Validation: Siguraduhing may laman ang mga importanteng fields
	if (txtAppotPatientName->Text == "" || cbAppotTime->Text == "" || cbAppotDoctor->Text == "") {
		MessageBox::Show("Please fill up all required fields (Patient Name, Time, and Doctor).", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	try {
		// 2. Auto-Generate Appointment ID (APP-001, APP-002, etc.)
		int appotLineCount = 1;
		if (System::IO::File::Exists("appointments.txt")) {
			array<String^>^ totalLines = System::IO::File::ReadAllLines("appointments.txt");
			int validLines = 0;
			for (int i = 0; i < totalLines->Length; i++) {
				if (!System::String::IsNullOrWhiteSpace(totalLines[i])) validLines++;
			}
			appotLineCount = validLines + 1;
		}
		String^ appotID = "APP-" + appotLineCount.ToString("D3");

		// 3. Kuhanin ang mga data mula sa iyong form controls
		String^ patientName = txtAppotPatientName->Text;
		String^ appotDate = dtpAppotDate->Value.ToString("MM/dd/yyyy");
		String^ appotTime = cbAppotTime->Text;
		String^ doctorName = cbAppotDoctor->Text;

		// Linisin ang reason para hindi masira ang CSV format kung may mag-comma o mag-enter
		String^ reason = txtAppotReason->Text->Replace("\r\n", " ")->Replace(",", " ");
		String^ status = "Scheduled"; // Default status para sa bagong book

		// Buuin ang isang linya ng record
		String^ recordLine = appotID + "," + patientName + "," + appotDate + "," + appotTime + "," + doctorName + "," + reason + "," + status;

		// 4. I-save sa appointments.txt
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("appointments.txt", true);
		sw->WriteLine(recordLine);
		sw->Close();

		MessageBox::Show("Appointment successfully booked! ID: " + appotID, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// 5. Linisin ang mga controls para sa susunod na transaksyon
		txtAppotPatientName->Clear();
		cbAppotTime->SelectedIndex = -1;
		cbAppotDoctor->SelectedIndex = -1;
		txtAppotReason->Clear();
		dtpAppotDate->Value = System::DateTime::Now;

		// 6. I-refresh agad ang DataGridView para updated ang listahan
		LoadAppointmentRecords();

	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Error saving appointment: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnSchedule_Click(System::Object ^ sender, System::EventArgs ^ e) {
	// 1. Ilabas ang Track/Monitor panel at dalhin sa harap
	pnlAppointmentMonitor->Visible = true;
	pnlAppointmentMonitor->BringToFront();

	// 2. Itago ang lahat ng ibang panels
	pnlWelcome->Visible = false;
	pnlPatientReg->Visible = false;
	pnlRecordManagement->Visible = false;
	pnlAppointmentSched->Visible = false; // Itago ang Sched panel

	// 3. TAWAGIN ANG LOAD FUNCTION: Para pagkapasok mo, lilitaw agad ang mga records!
	LoadAppointmentRecords();

}
private: System::Void btnTrack_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Ilabas ang Schedule panel at dalhin sa harap
	pnlAppointmentSched->Visible = true;
	pnlAppointmentSched->BringToFront();

	// 2. Itago ang lahat ng ibang panels para hindi magpatong-patong
	pnlWelcome->Visible = false;
	pnlPatientReg->Visible = false;
	pnlRecordManagement->Visible = false;
	pnlAppointmentMonitor->Visible = false; // Itago ang Track panel

	LoadAppointmentRecords();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ searchName = txtSearchAppot->Text->Trim()->ToLower();

	// Kung walang tinype, i-load ulit lahat ng records
	if (System::String::IsNullOrWhiteSpace(searchName)) {
		LoadAppointmentRecords();
		return;
	}

	dgvAppointments->Rows->Clear();

	if (System::IO::File::Exists("appointments.txt")) {
		array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");

		for (int i = 0; i < lines->Length; i++) {
			if (System::String::IsNullOrWhiteSpace(lines[i])) continue;

			array<String^>^ parts = lines[i]->Split(',');
			if (parts->Length >= 7) {
				String^ patientName = parts[1]->ToLower();

				// I-check kung kasama ang tinype na pangalan sa record
				if (patientName->Contains(searchName)) {
					dgvAppointments->Rows->Add(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6]);
				}
			}
		}
	}

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvAppointments->SelectedRows->Count == 0 || dgvAppointments->SelectedRows[0]->Cells[0]->Value == nullptr) {
		MessageBox::Show("Please select an appointment from the table to cancel.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Kuhanin ang ID ng napiling appointment (Column 0)
	String^ selectedAppotID = dgvAppointments->SelectedRows[0]->Cells[0]->Value->ToString();

	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to cancel appointment " + selectedAppotID + "?",
		"Confirm Cancellation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		try {
			array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");
			System::Collections::Generic::List<String^>^ updatedLines = gcnew System::Collections::Generic::List<String^>();

			for (int i = 0; i < lines->Length; i++) {
				if (System::String::IsNullOrWhiteSpace(lines[i])) continue;

				array<String^>^ parts = lines[i]->Split(',');
				if (parts->Length >= 7 && parts[0] == selectedAppotID) {
					// Palitan ang pang-pitong part (Index 6) ng "Cancelled"
					parts[6] = "Cancelled";
					String^ updatedLine = System::String::Join(",", parts);
					updatedLines->Add(updatedLine);
				}
				else {
					updatedLines->Add(lines[i]);
				}
			}

			// Isulat muli ang buong file gamit ang updated list
			System::IO::File::WriteAllLines("appointments.txt", updatedLines->ToArray());
			MessageBox::Show("Appointment " + selectedAppotID + " has been cancelled.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// I-refresh ang grid view para makita agad ang pagbabago
			LoadAppointmentRecords();

		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error cancelling appointment: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvAppointments->SelectedRows->Count == 0 || dgvAppointments->SelectedRows[0]->Cells[0]->Value == nullptr) {
		MessageBox::Show("Please select an appointment from the table to mark as completed.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Kuhanin ang ID ng napiling appointment (Column 0)
	String^ selectedAppotID = dgvAppointments->SelectedRows[0]->Cells[0]->Value->ToString();

	System::Windows::Forms::DialogResult result = MessageBox::Show("Mark appointment " + selectedAppotID + " as completed?",
		"Confirm Completion", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		try {
			array<String^>^ lines = System::IO::File::ReadAllLines("appointments.txt");
			System::Collections::Generic::List<String^>^ updatedLines = gcnew System::Collections::Generic::List<String^>();

			for (int i = 0; i < lines->Length; i++) {
				if (System::String::IsNullOrWhiteSpace(lines[i])) continue;

				array<String^>^ parts = lines[i]->Split(',');
				if (parts->Length >= 7 && parts[0] == selectedAppotID) {
					// Palitan ang pang-pitong part (Index 6) ng "Completed"
					parts[6] = "Completed";
					String^ updatedLine = System::String::Join(",", parts);
					updatedLines->Add(updatedLine);
				}
				else {
					updatedLines->Add(lines[i]);
				}
			}

			// Isulat muli ang buong file gamit ang updated list
			System::IO::File::WriteAllLines("appointments.txt", updatedLines->ToArray());
			MessageBox::Show("Appointment " + selectedAppotID + " marked as completed.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// I-refresh ang grid view para makita agad ang pagbabago
			LoadAppointmentRecords();

		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error completing appointment: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to log out?",
		"Logout Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		// 1. Hanapin ang nakatagong Login form na nakabukas na sa background kanina
		// Ginagamit nito ang listahan ng mga bukas na forms ng application mo
		if (System::Windows::Forms::Application::OpenForms->Count > 0) {
			// Ang unang-unang form na binuksan mo (ang Login Form) ay palaging nasa Index 0
			System::Windows::Forms::Form^ loginForm = System::Windows::Forms::Application::OpenForms[0];

			// 2. Ipakita muli ang Login Form
			loginForm->Show();
		}

		// 3. Itago itong kasalukuyang Main Form
		this->Hide();
	}
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to close ClinicTrack?",
		"Exit Application", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		// Ito ang magpapatay sa buong engine ng Windows Forms application
		System::Windows::Forms::Application::Exit();
	}
}
private: System::Void btnNavSettings_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Ilabas ang Account Settings panel at dalhin sa harap
	pnlAccountSettings->Visible = true;
	pnlAccountSettings->BringToFront();

	// 2. Itago ang lahat ng iba pang panels para malinis ang screen
	pnlWelcome->Visible = false;
	pnlPatientReg->Visible = false;
	pnlRecordManagement->Visible = false;
	pnlAppointmentSched->Visible = false;
	pnlAppointmentMonitor->Visible = false;

	// Optional: Kung may ginawa tayong code para mag-highlight yung napiling button kagabi, isama mo ito:
	// HighlightActiveButton(btnNavSettings);
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
