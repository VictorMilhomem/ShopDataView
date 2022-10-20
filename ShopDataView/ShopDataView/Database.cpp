#include "Database.h"

DataTable^ Database::ConnectDB(MySqlConnection^ sqlCon, MySqlCommand^ cmd, MySqlDataAdapter^ sqlDataAdapter, MySqlDataReader^ sqlReader, DataTable^ sqlDt)
{
	sqlCon->ConnectionString = m_connectionString;
	sqlCon->Open();
	cmd->Connection = sqlCon;
	cmd->CommandText = "select * from MyShop";
	sqlReader = cmd->ExecuteReader();
	sqlDt->Load(sqlReader);
	sqlReader->Close();
	sqlCon->Close();
	//dataGridView1->DataSource = sqlDt;
	return sqlDt;
}

DataTable^ Database::RefreshDB(MySqlConnection^ sqlCon, MySqlCommand^ cmd)
{
	using namespace System::Windows::Forms;
	DataTable^ sqlDt;
	try {
		sqlCon->ConnectionString = m_connectionString;
		cmd->Connection = sqlCon;
		MySqlDataAdapter^ sqlDataAdapter = gcnew MySqlDataAdapter("select * from MyShop", sqlCon);
		sqlDt = gcnew DataTable();
		sqlDataAdapter->Fill(sqlDt);
		//dataGridView1->DataSource = sqlDt;
	}
	catch (System::Exception^ e) {
		MessageBox::Show(e->Message, "Exception", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	}

	return sqlDt;
}

System::Void Database::InsertDB(MySqlConnection^ sqlCon, MySqlCommand^ cmd, array<System::Windows::Forms::TextBox^>^ values, System::Windows::Forms::ComboBox^ cb)
{
	using namespace System::Windows::Forms;
	/// summary: This functions insert into the DB in the following order
	/// (ID, firstname, surname, phone, cpf, zipcode, address, productID, shipping, dateReg, dateBirth)
	/// //
	try {

		sqlCon->ConnectionString = m_connectionString;
		sqlCon->Open();
		cmd->Connection = sqlCon;
		cmd->CommandText = "insert into MyShop (ID, firstname, surname, phone, cpf, zipcode, address, productID, shipping, dateReg, dateBirth)" +
			" values ('" + values[0]->Text + "','" + values[1]->Text + "'" +
			",'" + values[2]->Text + "'" +
			",'" + values[3]->Text + "'" +
			",'" + values[4]->Text + "'" +
			",'" + values[5]->Text + "'" +
			",'" + values[6]->Text + "'" +
			",'" + values[7]->Text +
			"','" + cb->Text + "'" +
			",'" + values[8]->Text + "'" +
			",'" + values[9]->Text + "');";

		cmd->ExecuteNonQuery();

		sqlCon->Close();
	}
	catch (System::Exception^ e) {
		MessageBox::Show(e->Message, "Exception", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	}
}

System::Void Database::UpdateDB(MySqlConnection^ sqlCon, MySqlCommand^ cmd, MySqlDataReader^ sqlReader, array<System::Windows::Forms::TextBox^>^ values, System::Windows::Forms::ComboBox^ cb)
{
	using namespace System::Windows::Forms;
	try {
		sqlCon->ConnectionString = m_connectionString;
		cmd->Connection = sqlCon;

		cmd->CommandText = "update MyShop set " +
			"firstname='" + values[1]->Text + "' ," + "surname='" + values[2]->Text + "', " +
			"phone='" + values[3]->Text + "' ," + "cpf='" + values[4]->Text + "', " +
			"zipcode='" + values[5]->Text + "' ," + "address='" + values[6]->Text + "', " +
			"productID='" + values[7]->Text + "' ," + "shipping='" + cb->Text + "', " +
			"dateReg='" + values[8]->Text + "' ," + "dateBirth='" + values[9]->Text + "'" + "WHERE ID = " + values[0]->Text + "; ";

		sqlCon->Open();
		sqlReader = cmd->ExecuteReader();
		sqlCon->Close();
		sqlReader->Close();
	}
	catch (System::Exception^ e) {
		MessageBox::Show(e->Message, "Exception", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	}
}


System::Void Database::DeleteDB(MySqlConnection^ sqlCon, MySqlCommand^ cmd, MySqlDataReader^ sqlReader, System::String^ id)
{
	using namespace System::Windows::Forms;
	try {
		sqlCon->ConnectionString = m_connectionString;
		cmd->Connection = sqlCon;

		cmd->CommandText = "delete from MyShop WHERE ID ='" + id + "';";

		sqlCon->Open();
		sqlReader = cmd->ExecuteReader();
		sqlCon->Close();
		sqlReader->Close();

	}
	catch (System::Exception^ e) {
		MessageBox::Show(e->Message, "Exception", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	}
}