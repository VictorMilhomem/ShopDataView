#pragma once

#include "Database.h"

namespace ShopDataView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para ConfigDatabase
	/// </summary>
	public ref class ConfigDatabase : public System::Windows::Forms::Form
	{
		Database^ DB;
	public:
		ConfigDatabase(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~ConfigDatabase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tBHost;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbPort;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbDB;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbUser;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tBHost = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbPort = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbDB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbUser = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tBHost
			// 
			this->tBHost->Location = System::Drawing::Point(109, 37);
			this->tBHost->Name = L"tBHost";
			this->tBHost->Size = System::Drawing::Size(100, 20);
			this->tBHost->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Host";
			// 
			// tbPort
			// 
			this->tbPort->Location = System::Drawing::Point(109, 74);
			this->tbPort->Name = L"tbPort";
			this->tbPort->Size = System::Drawing::Size(100, 20);
			this->tbPort->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Port";
			// 
			// tbDB
			// 
			this->tbDB->Location = System::Drawing::Point(109, 109);
			this->tbDB->Name = L"tbDB";
			this->tbDB->Size = System::Drawing::Size(100, 20);
			this->tbDB->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Database";
			// 
			// tbUser
			// 
			this->tbUser->Location = System::Drawing::Point(109, 145);
			this->tbUser->Name = L"tbUser";
			this->tbUser->Size = System::Drawing::Size(100, 20);
			this->tbUser->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Username";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(109, 181);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(100, 20);
			this->tbPassword->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(27, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Password";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(90, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConfigDatabase::button1_Click);
			// 
			// ConfigDatabase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 355);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbUser);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbDB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbPort);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tBHost);
			this->Controls->Add(this->label1);
			this->Name = L"ConfigDatabase";
			this->Text = L"ConfigDatabase";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: Database^ GetDB()
		{
			return DB;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
