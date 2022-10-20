#pragma once

#include "Database.h"

#include "ConfigDatabase.h"

namespace ShopDataView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Sumário para ShopDataDisplay
	/// </summary>
	public ref class ShopDataDisplay : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlCon = gcnew MySqlConnection();
		MySqlCommand^ cmd = gcnew MySqlCommand();
		MySqlDataAdapter^ sqlDataAdapter = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlReader;
		DataTable^ sqlDt = gcnew DataTable();
		// Set the Database information (host, port, database, user, password)
		Database^ DB = gcnew Database(host, port, database, user, password);
		
		
	private: System::Windows::Forms::TextBox^ tbID;
	private: System::Windows::Forms::Label^ label12;

	public:

		ShopDataDisplay(void)
		{
			InitializeComponent();
			dataGridView1->DataSource = DB->ConnectDB(sqlCon, cmd, sqlDataAdapter, sqlReader, sqlDt);
			//ConnectDB();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~ShopDataDisplay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ InputPanel;
	internal: System::Windows::Forms::Panel^ panel1;
	private:

	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnRefresh;

	private: System::Windows::Forms::Button^ btnAdd;


	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::TextBox^ tbSearch;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbFirstName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbSurname;


	private: System::Windows::Forms::TextBox^ tbDataReg;

	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbDateOfBirth;
	private: System::Windows::Forms::TextBox^ tbProductId;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbbZipCode;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbCpf;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Button^ btnConfig;


	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->InputPanel = (gcnew System::Windows::Forms::Panel());
			this->tbID = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbCpf = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbProductId = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbbZipCode = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->tbDataReg = (gcnew System::Windows::Forms::TextBox());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbSurname = (gcnew System::Windows::Forms::TextBox());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnConfig = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->InputPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// InputPanel
			// 
			this->InputPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->InputPanel->Controls->Add(this->tbID);
			this->InputPanel->Controls->Add(this->label12);
			this->InputPanel->Controls->Add(this->comboBox1);
			this->InputPanel->Controls->Add(this->label11);
			this->InputPanel->Controls->Add(this->tbCpf);
			this->InputPanel->Controls->Add(this->label10);
			this->InputPanel->Controls->Add(this->tbProductId);
			this->InputPanel->Controls->Add(this->label9);
			this->InputPanel->Controls->Add(this->tbbZipCode);
			this->InputPanel->Controls->Add(this->label8);
			this->InputPanel->Controls->Add(this->tbAddress);
			this->InputPanel->Controls->Add(this->label7);
			this->InputPanel->Controls->Add(this->tbDateOfBirth);
			this->InputPanel->Controls->Add(this->tbDataReg);
			this->InputPanel->Controls->Add(this->tbPhone);
			this->InputPanel->Controls->Add(this->label6);
			this->InputPanel->Controls->Add(this->label5);
			this->InputPanel->Controls->Add(this->label4);
			this->InputPanel->Controls->Add(this->tbSurname);
			this->InputPanel->Controls->Add(this->tbFirstName);
			this->InputPanel->Controls->Add(this->label3);
			this->InputPanel->Controls->Add(this->label2);
			this->InputPanel->Controls->Add(this->tbSearch);
			this->InputPanel->Controls->Add(this->label1);
			this->InputPanel->Location = System::Drawing::Point(12, 26);
			this->InputPanel->Name = L"InputPanel";
			this->InputPanel->Size = System::Drawing::Size(1164, 100);
			this->InputPanel->TabIndex = 0;
			this->InputPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ShopDataDisplay::InputPanel_Paint);
			// 
			// tbID
			// 
			this->tbID->Location = System::Drawing::Point(127, 10);
			this->tbID->Name = L"tbID";
			this->tbID->Size = System::Drawing::Size(162, 20);
			this->tbID->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(10, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(26, 21);
			this->label12->TabIndex = 22;
			this->label12->Text = L"ID";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"R$ 10,00", L"R$ 50,00", L"R$ 100,00", L"R$ 120,00" });
			this->comboBox1->Location = System::Drawing::Point(898, 37);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(813, 39);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 21);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Shipping";
			// 
			// tbCpf
			// 
			this->tbCpf->Location = System::Drawing::Point(658, 10);
			this->tbCpf->Name = L"tbCpf";
			this->tbCpf->Size = System::Drawing::Size(149, 20);
			this->tbCpf->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(573, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 21);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Cpf";
			// 
			// tbProductId
			// 
			this->tbProductId->Location = System::Drawing::Point(898, 6);
			this->tbProductId->Name = L"tbProductId";
			this->tbProductId->Size = System::Drawing::Size(122, 20);
			this->tbProductId->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(813, 6);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 21);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Produt ID";
			// 
			// tbbZipCode
			// 
			this->tbbZipCode->Location = System::Drawing::Point(658, 38);
			this->tbbZipCode->Name = L"tbbZipCode";
			this->tbbZipCode->Size = System::Drawing::Size(149, 20);
			this->tbbZipCode->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(573, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 21);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Zip Code";
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(658, 71);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(290, 20);
			this->tbAddress->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(573, 71);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 21);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Address";
			// 
			// tbDateOfBirth
			// 
			this->tbDateOfBirth->Location = System::Drawing::Point(405, 71);
			this->tbDateOfBirth->Name = L"tbDateOfBirth";
			this->tbDateOfBirth->Size = System::Drawing::Size(162, 20);
			this->tbDateOfBirth->TabIndex = 11;
			// 
			// tbDataReg
			// 
			this->tbDataReg->Location = System::Drawing::Point(405, 40);
			this->tbDataReg->Name = L"tbDataReg";
			this->tbDataReg->Size = System::Drawing::Size(162, 20);
			this->tbDataReg->TabIndex = 10;
			this->tbDataReg->TextChanged += gcnew System::EventHandler(this, &ShopDataDisplay::tbDataReg_textChanged);
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(405, 10);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(162, 20);
			this->tbPhone->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(295, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 21);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Date Of Birth";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(295, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 21);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Date Reg.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(295, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 21);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Phone";
			// 
			// tbSurname
			// 
			this->tbSurname->Location = System::Drawing::Point(127, 71);
			this->tbSurname->Name = L"tbSurname";
			this->tbSurname->Size = System::Drawing::Size(162, 20);
			this->tbSurname->TabIndex = 5;
			// 
			// tbFirstName
			// 
			this->tbFirstName->Location = System::Drawing::Point(127, 39);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(162, 20);
			this->tbFirstName->TabIndex = 4;
			this->tbFirstName->TextChanged += gcnew System::EventHandler(this, &ShopDataDisplay::tbFirstName_textChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Surname";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Firstname";
			// 
			// tbSearch
			// 
			this->tbSearch->Location = System::Drawing::Point(979, 71);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(162, 20);
			this->tbSearch->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1049, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Search";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->btnConfig);
			this->panel1->Controls->Add(this->btnSearch);
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Controls->Add(this->btnReset);
			this->panel1->Controls->Add(this->btnDelete);
			this->panel1->Controls->Add(this->btnUpdate);
			this->panel1->Controls->Add(this->btnRefresh);
			this->panel1->Controls->Add(this->btnAdd);
			this->panel1->Location = System::Drawing::Point(12, 132);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1164, 84);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ShopDataDisplay::panel1_Paint);
			// 
			// btnConfig
			// 
			this->btnConfig->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfig->Location = System::Drawing::Point(727, 21);
			this->btnConfig->Name = L"btnConfig";
			this->btnConfig->Size = System::Drawing::Size(114, 38);
			this->btnConfig->TabIndex = 8;
			this->btnConfig->Text = L"Config";
			this->btnConfig->UseVisualStyleBackColor = true;
			this->btnConfig->Click += gcnew System::EventHandler(this, &ShopDataDisplay::btnConfig_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(607, 21);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(114, 38);
			this->btnSearch->TabIndex = 7;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ShopDataDisplay::btnSearch_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(919, 21);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(114, 38);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &ShopDataDisplay::btnExit_click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(487, 21);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(114, 38);
			this->btnReset->TabIndex = 5;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &ShopDataDisplay::btnReset_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(367, 21);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(114, 38);
			this->btnDelete->TabIndex = 4;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ShopDataDisplay::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(247, 21);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(114, 38);
			this->btnUpdate->TabIndex = 3;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ShopDataDisplay::btnUpdate_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->Location = System::Drawing::Point(127, 21);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(114, 38);
			this->btnRefresh->TabIndex = 2;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &ShopDataDisplay::btnRefresh_click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(7, 21);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(114, 38);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ShopDataDisplay::btnAdd_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(12, 222);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1164, 447);
			this->panel2->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1154, 437);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ShopDataDisplay::dataGridView1_CellClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1188, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ShopDataDisplay
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1188, 681);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->InputPanel);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"ShopDataDisplay";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"My Shop";
			this->Load += gcnew System::EventHandler(this, &ShopDataDisplay::ShopDataDisplay_Load);
			this->InputPanel->ResumeLayout(false);
			this->InputPanel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnRefresh_click(System::Object^ sender, System::EventArgs^ e) {
		DB->ConnectDB(sqlCon, cmd, sqlDataAdapter, sqlReader, sqlDt);
		dataGridView1->DataSource = DB->RefreshDB(sqlCon, cmd);
	}
	private: System::Void btnExit_click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult iExit;
		try
		{
			iExit = MessageBox::Show("Confirm exit application", "Exit?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Exception", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		}
	}
	private: System::Void InputPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void tbFirstName_textChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbDataReg_textChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ShopDataDisplay_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void tbSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnConfig_Click(System::Object^ sender, System::EventArgs^ e) {
		/*ConfigDatabase^ config = gcnew ConfigDatabase;
		config->ShowDialog();
		DB = config->GetDB();
		config->Close();*/
		
	}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	tbID->Text = "";
	tbAddress->Text = "";
	tbbZipCode->Text = "";
	tbCpf->Text = "";
	tbDataReg->Text = "";
	tbDateOfBirth->Text = "";
	tbFirstName->Text = "";
	tbPhone->Text = "";
	tbSurname->Text = "";
	tbSearch->Text = "";
	tbProductId->Text = "";
	comboBox1->Text = "";
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	try {
		tbID->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		//tbID->Enabled = false;
		tbFirstName->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		tbSurname->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		tbPhone->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		tbCpf->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		tbbZipCode->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		tbAddress->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		tbProductId->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		comboBox1->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		
		tbDataReg->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		tbDateOfBirth->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
		
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "Exception", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	}
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		DataView^ dv = sqlDt->DefaultView;
		dv->RowFilter = String::Format("firstname like '%{0}%'", tbSearch->Text);
		dataGridView1->DataSource = dv->ToTable();

	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "Exception", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	}
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	
	array<TextBox^>^ values = gcnew array<TextBox^>(10);
	values[0] = tbID;
	values[1] = tbFirstName;
	values[2] = tbSurname;
	values[3] = tbPhone;
	values[4] = tbCpf;
	values[5] = tbbZipCode;
	values[6] = tbAddress;
	values[7] = tbProductId;
	values[8] = tbDataReg;
	values[9] = tbDateOfBirth;

	DB->InsertDB(sqlCon, cmd, values, comboBox1);
	DB->ConnectDB(sqlCon, cmd, sqlDataAdapter, sqlReader, sqlDt);
	dataGridView1->DataSource = DB->RefreshDB(sqlCon, cmd);
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	array<TextBox^>^ values = gcnew array<TextBox^>(10);
	values[0] = tbID;
	values[1] = tbFirstName;
	values[2] = tbSurname;
	values[3] = tbPhone;
	values[4] = tbCpf;
	values[5] = tbbZipCode;
	values[6] = tbAddress;
	values[7] = tbProductId;
	values[8] = tbDataReg;
	values[9] = tbDateOfBirth;

	DB->UpdateDB(sqlCon, cmd, sqlReader, values, comboBox1);
	DB->ConnectDB(sqlCon, cmd, sqlDataAdapter, sqlReader, sqlDt);
	dataGridView1->DataSource = DB->RefreshDB(sqlCon, cmd);
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	DB->DeleteDB(sqlCon, cmd, sqlReader, tbID->Text);
	DB->ConnectDB(sqlCon, cmd, sqlDataAdapter, sqlReader, sqlDt);
	dataGridView1->DataSource = DB->RefreshDB(sqlCon, cmd);
}
};
}
