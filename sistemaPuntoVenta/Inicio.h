#pragma once
#include "Inicio.h"
#include "Usuario.h"
#include "Venta.h"
#include "Producto.h"
#include "Proveedores.h"
#include "Clientes.h"
#include "Acercade.h"
#include "FormFactura.h"
//#include "Form1.h"
//#include "MySQLConnector.h"

namespace sistemaPuntoVenta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	
	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(String^ nombreUsuario, String^ rolUsuario)
		{
			InitializeComponent();
			this->nombreUsuario = nombreUsuario;
			this->rolUsuario = rolUsuario;
			// Mostrar el nombre del usuario en un control, por ejemplo, un Label
			this->lblUsuario->Text = "Usuario: " + nombreUsuario;
			// Ocultar groupBox1 si el rol es vendedor
			if (rolUsuario == "VENDEDOR") {
				this->btnUsuario->Visible = false;
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnAcercade;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox6;

	private: System::Windows::Forms::Button^ btnProveedores;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ btnClientes;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Button^ btnProducto;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Button^ btnVenta;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ btnUsuario;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ lblUsuario;
		   String^ nombreUsuario;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

		   String^ rolUsuario;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAcercade = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->btnProveedores = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnClientes = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->btnProducto = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnVenta = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->btnUsuario = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAcercade
			// 
			this->btnAcercade->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnAcercade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAcercade->Location = System::Drawing::Point(690, 119);
			this->btnAcercade->Name = L"btnAcercade";
			this->btnAcercade->Size = System::Drawing::Size(140, 40);
			this->btnAcercade->TabIndex = 14;
			this->btnAcercade->Text = L"Acerca de";
			this->btnAcercade->UseVisualStyleBackColor = true;
			this->btnAcercade->Click += gcnew System::EventHandler(this, &Inicio::btnAcercade_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox6->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\informacion.png";
			this->pictureBox6->Location = System::Drawing::Point(705, 11);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(104, 102);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// btnProveedores
			// 
			this->btnProveedores->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnProveedores->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProveedores->Location = System::Drawing::Point(543, 119);
			this->btnProveedores->Name = L"btnProveedores";
			this->btnProveedores->Size = System::Drawing::Size(140, 40);
			this->btnProveedores->TabIndex = 14;
			this->btnProveedores->Text = L"Proveedores";
			this->btnProveedores->UseVisualStyleBackColor = true;
			this->btnProveedores->Click += gcnew System::EventHandler(this, &Inicio::btnProveedores_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\proveedor.png";
			this->pictureBox1->Location = System::Drawing::Point(557, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(104, 102);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// btnClientes
			// 
			this->btnClientes->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnClientes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClientes->Location = System::Drawing::Point(425, 119);
			this->btnClientes->Name = L"btnClientes";
			this->btnClientes->Size = System::Drawing::Size(104, 40);
			this->btnClientes->TabIndex = 14;
			this->btnClientes->Text = L"Clientes";
			this->btnClientes->UseVisualStyleBackColor = true;
			this->btnClientes->Click += gcnew System::EventHandler(this, &Inicio::btnClientes_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\usuarios-alt.png";
			this->pictureBox4->Location = System::Drawing::Point(425, 11);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(104, 102);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// btnProducto
			// 
			this->btnProducto->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnProducto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProducto->Location = System::Drawing::Point(289, 119);
			this->btnProducto->Name = L"btnProducto";
			this->btnProducto->Size = System::Drawing::Size(116, 40);
			this->btnProducto->TabIndex = 14;
			this->btnProducto->Text = L"Producto";
			this->btnProducto->UseVisualStyleBackColor = true;
			this->btnProducto->Click += gcnew System::EventHandler(this, &Inicio::btnProducto_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\cajas.png";
			this->pictureBox3->Location = System::Drawing::Point(293, 11);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(104, 102);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// btnVenta
			// 
			this->btnVenta->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnVenta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVenta->Location = System::Drawing::Point(165, 119);
			this->btnVenta->Name = L"btnVenta";
			this->btnVenta->Size = System::Drawing::Size(104, 40);
			this->btnVenta->TabIndex = 14;
			this->btnVenta->Text = L"Venta";
			this->btnVenta->UseVisualStyleBackColor = true;
			this->btnVenta->Click += gcnew System::EventHandler(this, &Inicio::btnVenta_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\carrito-de-compra-anadir.png";
			this->pictureBox2->Location = System::Drawing::Point(165, 11);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(104, 102);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->btnAcercade);
			this->groupBox1->Controls->Add(this->btnProveedores);
			this->groupBox1->Controls->Add(this->pictureBox6);
			this->groupBox1->Controls->Add(this->btnClientes);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->btnProducto);
			this->groupBox1->Controls->Add(this->pictureBox4);
			this->groupBox1->Controls->Add(this->btnVenta);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox5);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->btnUsuario);
			this->groupBox1->Location = System::Drawing::Point(204, 116);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(844, 171);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\lapiz-de-usuario.png";
			this->pictureBox5->Location = System::Drawing::Point(38, 11);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(104, 102);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			// 
			// btnUsuario
			// 
			this->btnUsuario->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnUsuario->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnUsuario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUsuario->Location = System::Drawing::Point(38, 119);
			this->btnUsuario->Name = L"btnUsuario";
			this->btnUsuario->Size = System::Drawing::Size(104, 40);
			this->btnUsuario->TabIndex = 14;
			this->btnUsuario->Text = L"Usuario";
			this->btnUsuario->UseVisualStyleBackColor = true;
			this->btnUsuario->Click += gcnew System::EventHandler(this, &Inicio::btnUsuario_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(64, 230);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 19);
			this->label2->TabIndex = 20;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(1233, 63);
			this->menuStrip1->TabIndex = 23;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(1044, 439);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 64);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Inicio::button1_Click);
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->lblUsuario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsuario->ForeColor = System::Drawing::Color::Yellow;
			this->lblUsuario->Location = System::Drawing::Point(12, 25);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(101, 27);
			this->lblUsuario->TabIndex = 29;
			this->lblUsuario->Text = L"Usuario:";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(439, 9);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(413, 50);
			this->label1->TabIndex = 30;
			this->label1->Text = L"SISTEMA DE VENTAS";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 509);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1233, 30);
			this->panel1->TabIndex = 31;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox7->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\conexion-global.gif";
			this->pictureBox7->Location = System::Drawing::Point(441, 348);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(347, 309);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 58;
			this->pictureBox7->TabStop = false;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(1126, -5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 64);
			this->button3->TabIndex = 136;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Inicio::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(1180, -2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 61);
			this->button2->TabIndex = 135;
			this->button2->Text = L"x";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Inicio::button2_Click);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1233, 539);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lblUsuario);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void btnUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
	sistemaPuntoVenta::Usuario^ v = gcnew sistemaPuntoVenta::Usuario();
	this->Visible = false;
	v->ShowDialog();
	this->Visible = true;
}
	private: System::Void btnVenta_Click(System::Object^ sender, System::EventArgs^ e) {
		sistemaPuntoVenta::Venta^ v = gcnew sistemaPuntoVenta::Venta(nombreUsuario);
		this->Visible = false;
		v->ShowDialog();
		this->Visible = true;
	}

	private: System::Void btnProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		sistemaPuntoVenta::Producto^ v = gcnew sistemaPuntoVenta::Producto(rolUsuario);
		this->Visible = false;
		v->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btnClientes_Click(System::Object^ sender, System::EventArgs^ e) {
		sistemaPuntoVenta::Clientes^ v = gcnew sistemaPuntoVenta::Clientes(rolUsuario);
		this->Visible = false;
		v->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btnProveedores_Click(System::Object^ sender, System::EventArgs^ e) {
		sistemaPuntoVenta::Proveedores^ v = gcnew sistemaPuntoVenta::Proveedores(rolUsuario);
		this->Visible = false;
		v->ShowDialog();
		this->Visible = true;
	}

	private: System::Void btnAcercade_Click(System::Object^ sender, System::EventArgs^ e) {
		sistemaPuntoVenta::Acercade^ v = gcnew sistemaPuntoVenta::Acercade();
		this->Visible = false;
		v->ShowDialog();
		this->Visible = true;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Close();
}
private: System::Void Inicio_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;

}
};
}
