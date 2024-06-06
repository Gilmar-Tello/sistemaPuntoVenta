#pragma once

// Incluye las bibliotecas necesarias
#include <iostream>
using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace std;
using namespace System::Data;

public ref class MySQLConnector {
private:
    MySqlConnection^ connection;

public:
    String^ connectionString;
    String^ host = "localhost";
    String^ user = "root";
    String^ password = "";
    String^ database = "sistema_punto_venta";

    MySQLConnector() {
        connectionString = "Server=" + host + ";Uid=" + user + ";Pwd=" + password + ";Database=" + database + ";";
        connection = gcnew MySqlConnection(connectionString);
    }

    bool OpenConnection() {
        try {
            connection->Open();
            return true;
        }
        catch (Exception^ ex) {
            Console::WriteLine("Error: " + ex->Message);
            return false;
        }
    }

    void CloseConnection() {
        if (connection != nullptr && connection->State == ConnectionState::Open) {
            connection->Close();
        }
    }

    MySqlConnection^ getConnection() {
        return connection;
    }

    ~MySQLConnector() {
        CloseConnection();
    }

    DataTable^ ExecuteQuery(String^ query) {
        DataTable^ dataTable = gcnew DataTable();

        try {
            if (OpenConnection()) {
                MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
                MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter(cmd);
                dataAdapter->Fill(dataTable);
                CloseConnection();
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("Error: " + ex->Message);
        }

        return dataTable;
    }
};




