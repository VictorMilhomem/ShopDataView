#pragma once
#include <stdlib.h>
#include <vector>
#include <iostream>


using namespace MySql::Data::MySqlClient;
using namespace System::Data;

ref class Database
{
public:

	Database(System::String^ host, System::String^ port, System::String^ database, System::String^ user, System::String^ pass)
	{
		this->m_host = host;
		this->m_port = port;
		this->m_database = database;
		this->m_user = user;
		this->m_password = pass;
		this->m_connectionString = "datasource=" + host + "; port=" + port +
			"; username=" + user + "; password=" + pass + "; database =" + database + "; ";
	}

	~Database()
	{

	}

	DataTable^ ConnectDB(MySqlConnection^ sqlCon, MySqlCommand^ cmd, MySqlDataAdapter^ sqlDataAdapter, MySqlDataReader^ sqlReader, DataTable^ sqlDt);
	DataTable^ RefreshDB(MySqlConnection^ sqlCon, MySqlCommand^ cmd);
	System::Void UpdateDB(MySqlConnection^ sqlCon, MySqlCommand^ cmd, MySqlDataReader^ sqlReader, array<System::Windows::Forms::TextBox^>^ values, System::Windows::Forms::ComboBox^ cb);
	System::Void DeleteDB(MySqlConnection^ sqlCon, MySqlCommand^ cmd, MySqlDataReader^ sqlReader, System::String^ id);
	System::Void InsertDB(MySqlConnection^ sqlCon, MySqlCommand^ cmd, array<System::Windows::Forms::TextBox^>^ values, System::Windows::Forms::ComboBox^ cb);

private:
	System::String^ m_host;
	System::String^ m_port;
	System::String^ m_database;
	System::String^ m_user;
	System::String^ m_password;
	System::String^ m_connectionString;
};
