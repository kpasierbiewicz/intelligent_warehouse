#pragma once

using namespace MySql::Data::MySqlClient;
using namespace System;
class IntelligentWarehouseDatabase
{
	private:
		
		
	public:
		IntelligentWarehouseDatabase();
		~IntelligentWarehouseDatabase();
};

IntelligentWarehouseDatabase::IntelligentWarehouseDatabase()
{
	String^ configurationConnect;
	configurationConnect = L"datasource=localhost;port=3306;username=root;password=cloudek93;database=InteligentnyMagazyn";
	MySqlConnection^ connectToDatabase = gcnew MySqlConnection(configurationConnect);
	MySqlCommand^ query = gcnew MySqlCommand("SELECT * FROM Dostawcy", connectToDatabase);
	MySqlDataReader^ readData;
	try 
	{
		connectToDatabase->Open();
		readData = query->ExecuteReader();

		if (readData->Read())
		{
			readData->GetInt32(0); //pobranie danych z kolumny 0 czyli id
		}
		else
		{

		}
	} 
	catch (Exception^ ex) 
	{
		 // zwraca komunikat o b³edzie
	}
	connectToDatabase->Close();
}

IntelligentWarehouseDatabase::~IntelligentWarehouseDatabase()
{
}
