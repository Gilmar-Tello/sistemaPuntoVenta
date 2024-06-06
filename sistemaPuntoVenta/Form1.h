#pragma once
#include "Inicio.h"
#include "MySQLConnector.h"

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        MySQLConnector^ connector;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::CheckBox^ checkBox1;

    public:
        MySqlConnection^ connection;

        Form1(void)
        {
            InitializeComponent();
            connector = gcnew MySQLConnector();
            connection = gcnew MySqlConnection(connector->connectionString);
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::TextBox^ txtContrasena;
    private: System::Windows::Forms::TextBox^ txtUsuario;

    private: System::Windows::Forms::PictureBox^ pictureBox2;

    private:
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
            this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->groupBox1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::Control;
            this->button1->Location = System::Drawing::Point(11, 449);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(399, 47);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Ingresar";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\hombre.png";
            this->pictureBox1->Location = System::Drawing::Point(149, 72);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(132, 129);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 1;
            this->pictureBox1->TabStop = false;
            // 
            // groupBox1
            // 
            this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
                static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->groupBox1->Controls->Add(this->checkBox1);
            this->groupBox1->Controls->Add(this->pictureBox3);
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Controls->Add(this->label1);
            this->groupBox1->Controls->Add(this->pictureBox2);
            this->groupBox1->Controls->Add(this->txtContrasena);
            this->groupBox1->Controls->Add(this->txtUsuario);
            this->groupBox1->Location = System::Drawing::Point(11, 207);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(400, 218);
            this->groupBox1->TabIndex = 2;
            this->groupBox1->TabStop = false;
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->ForeColor = System::Drawing::SystemColors::Control;
            this->checkBox1->Location = System::Drawing::Point(91, 192);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(144, 20);
            this->checkBox1->TabIndex = 7;
            this->checkBox1->Text = L"Mostrar contraseña";
            this->checkBox1->UseVisualStyleBackColor = true;
            this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox3->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\bloquear-hashtag.png";
            this->pictureBox3->Location = System::Drawing::Point(23, 128);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(57, 56);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 6;
            this->pictureBox3->TabStop = false;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::Control;
            this->label2->Location = System::Drawing::Point(91, 116);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(109, 21);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Contraseña";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::Control;
            this->label1->Location = System::Drawing::Point(87, 36);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(70, 21);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Usuario";
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox2->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\picpersonas-llenas (1).png";
            this->pictureBox2->Location = System::Drawing::Point(23, 49);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(57, 57);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 3;
            this->pictureBox2->TabStop = false;
            // 
            // txtContrasena
            // 
            this->txtContrasena->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtContrasena->Location = System::Drawing::Point(91, 140);
            this->txtContrasena->Multiline = true;
            this->txtContrasena->Name = L"txtContrasena";
            this->txtContrasena->PasswordChar = '*';
            this->txtContrasena->Size = System::Drawing::Size(295, 46);
            this->txtContrasena->TabIndex = 1;
            // 
            // txtUsuario
            // 
            this->txtUsuario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtUsuario->Location = System::Drawing::Point(91, 60);
            this->txtUsuario->Multiline = true;
            this->txtUsuario->Name = L"txtUsuario";
            this->txtUsuario->Size = System::Drawing::Size(295, 46);
            this->txtUsuario->TabIndex = 0;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)));
            this->panel1->Controls->Add(this->button3);
            this->panel1->Controls->Add(this->button2);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(419, 42);
            this->panel1->TabIndex = 3;
            // 
            // button3
            // 
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::SystemColors::Control;
            this->button3->Location = System::Drawing::Point(333, 4);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(40, 30);
            this->button3->TabIndex = 6;
            this->button3->Text = L"-";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // button2
            // 
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::SystemColors::Control;
            this->button2->Location = System::Drawing::Point(376, 4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(40, 30);
            this->button2->TabIndex = 5;
            this->button2->Text = L"x";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)));
            this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel2->Location = System::Drawing::Point(0, 558);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(419, 18);
            this->panel2->TabIndex = 4;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
                static_cast<System::Int32>(static_cast<System::Byte>(104)));
            this->ClientSize = System::Drawing::Size(419, 576);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->button1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"Form1";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel1->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
        private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                // Obtener el usuario y la contraseña ingresados por el usuario
                String^ usuario = txtUsuario->Text;
                String^ contrasena = txtContrasena->Text;

                // Consulta SQL para verificar si el usuario y la contraseña son válidos y obtener el nombre, rol y estado
                String^ query = "SELECT nombre, rol, estado FROM usuario WHERE usuario = @usuario AND contraseña = @contrasena";

                // Abrir la conexión antes de ejecutar la consulta
                if (connection->State == ConnectionState::Closed) {
                    connection->Open();
                }

                MySqlCommand^ command = gcnew MySqlCommand(query, connection);
                command->Parameters->AddWithValue("@usuario", usuario);
                command->Parameters->AddWithValue("@contrasena", contrasena);

                MySqlDataReader^ reader = command->ExecuteReader();

                if (reader->Read()) {
                    String^ nombreUsuario = reader["nombre"]->ToString();
                    String^ rolUsuario = reader["rol"]->ToString();
                    String^ estadoUsuario = reader["estado"]->ToString();

                    // Verificar si el estado del usuario es Activo
                    if (estadoUsuario == "Activo") {
                        // Verificar si se encontró una coincidencia en la base de datos
                        sistemaPuntoVenta::Inicio^ v = gcnew sistemaPuntoVenta::Inicio(nombreUsuario, rolUsuario);
                        this->Visible = false;
                        v->ShowDialog();
                        this->Visible = true;
                        LimpiarControles();
                    }
                    else {
                        MessageBox::Show("El usuario está inactivo. Por favor, contacte al administrador.");
                        txtContrasena->Text = "";
                    }
                }
                else {
                    MessageBox::Show("Usuario o contraseña incorrectos. Por favor, inténtelo de nuevo.");
                    txtContrasena->Text = "";
                }

                reader->Close();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message);
            }
            finally {
                // Cerrar la conexión si está abierta
                if (connection->State == ConnectionState::Open) {
                    connection->Close();
                }
            }
        }

    //private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    //    try {
    //        // Obtener el usuario y la contraseña ingresados por el usuario
    //        String^ usuario = txtUsuario->Text;
    //        String^ contrasena = txtContrasena->Text;

    //        // Consulta SQL para verificar si el usuario y la contraseña son válidos y obtener el nombre y rol
    //        String^ query = "SELECT nombre, rol FROM usuario WHERE usuario = @usuario AND contraseña = @contrasena";

    //        // Abrir la conexión antes de ejecutar la consulta
    //        if (connection->State == ConnectionState::Closed) {
    //            connection->Open();
    //        }

    //        MySqlCommand^ command = gcnew MySqlCommand(query, connection);
    //        command->Parameters->AddWithValue("@usuario", usuario);
    //        command->Parameters->AddWithValue("@contrasena", contrasena);

    //        MySqlDataReader^ reader = command->ExecuteReader();

    //        if (reader->Read()) {
    //            String^ nombreUsuario = reader["nombre"]->ToString();
    //            String^ rolUsuario = reader["rol"]->ToString();

    //            // Verificar si se encontró una coincidencia en la base de datos
    //            sistemaPuntoVenta::Inicio^ v = gcnew sistemaPuntoVenta::Inicio(nombreUsuario, rolUsuario);
    //            this->Visible = false;
    //            v->ShowDialog();
    //            this->Visible = true;
    //            LimpiarControles();
    //        } else {
    //            MessageBox::Show("Usuario o contraseña incorrectos. Por favor, inténtelo de nuevo.");
    //            txtContrasena->Text = "";
    //        }

    //        reader->Close();
    //    }
    //    catch (Exception^ ex) {
    //        MessageBox::Show("Error: " + ex->Message);
    //    }
    //    finally {
    //        // Cerrar la conexión si está abierta
    //        if (connection->State == ConnectionState::Open) {
    //            connection->Close();
    //        }
    //    }
    //}
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox1->Checked) {
        txtContrasena->UseSystemPasswordChar = true;
    }
    else {
        txtContrasena->UseSystemPasswordChar = false;
    }


}
       private: System::Void LimpiarControles() {
           txtUsuario->Text = "";
           txtContrasena->Text = ""; 
       }
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

