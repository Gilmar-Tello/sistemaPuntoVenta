#pragma once
#include "MySQLConnector.h"

namespace sistemaPuntoVenta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Proveedores
	/// </summary>
	public ref class Proveedores : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector;
	private: System::Windows::Forms::ComboBox^ cbxBanco;
	public:
	public:
		MySqlConnection^ connection;
		Proveedores(String^ rolUsuario)
		{
			InitializeComponent();
			connector = gcnew MySQLConnector();
			connection = gcnew MySqlConnection(connector->connectionString);
			this->grdProveedores->SelectionChanged += gcnew System::EventHandler(this, &Proveedores::grdProveedores_SelectionChanged);
			if (rolUsuario == "VENDEDOR") {
				btnEliminar->Visible = false;
			}
			this->Load += gcnew System::EventHandler(this, &Proveedores::Proveedores_Load);
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Proveedores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Button^ btnRegresar;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtEmpresa;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtCorreo;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtTelefono;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtDireccion;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::DataGridView^ grdProveedores;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtCuenta;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private:
		bool isEditMode = false;
		int selectedUserId = -1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtEmpresa = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->grdProveedores = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCuenta = (gcnew System::Windows::Forms::TextBox());
			this->cbxBanco = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdProveedores))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panel1->Controls->Add(this->btnRegresar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 691);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1388, 47);
			this->panel1->TabIndex = 31;
			// 
			// btnRegresar
			// 
			this->btnRegresar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnRegresar->AutoSize = true;
			this->btnRegresar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnRegresar->FlatAppearance->BorderSize = 0;
			this->btnRegresar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegresar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnRegresar->Location = System::Drawing::Point(1199, 3);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(177, 39);
			this->btnRegresar->TabIndex = 29;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &Proveedores::btnRegresar_Click);
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
			this->menuStrip1->ShowItemToolTips = true;
			this->menuStrip1->Size = System::Drawing::Size(1388, 63);
			this->menuStrip1->TabIndex = 30;
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
			this->button3->Location = System::Drawing::Point(1281, -1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 64);
			this->button3->TabIndex = 92;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Proveedores::button3_Click);
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
			this->button2->Location = System::Drawing::Point(1335, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 61);
			this->button2->TabIndex = 91;
			this->button2->Text = L"x";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Proveedores::button2_Click);
			// 
			// btnMostrar
			// 
			this->btnMostrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnMostrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnMostrar->FlatAppearance->BorderSize = 0;
			this->btnMostrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMostrar->Location = System::Drawing::Point(166, 635);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(126, 50);
			this->btnMostrar->TabIndex = 90;
			this->btnMostrar->Text = L"Mostrar";
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &Proveedores::btnMostrar_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnLimpiar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnLimpiar->FlatAppearance->BorderSize = 0;
			this->btnLimpiar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnLimpiar->Location = System::Drawing::Point(304, 635);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(126, 50);
			this->btnLimpiar->TabIndex = 89;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = false;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnEliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnEliminar->FlatAppearance->BorderSize = 0;
			this->btnEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnEliminar->Location = System::Drawing::Point(441, 635);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(126, 50);
			this->btnEliminar->TabIndex = 88;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &Proveedores::btnEliminar_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnGuardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnGuardar->FlatAppearance->BorderSize = 0;
			this->btnGuardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnGuardar->Location = System::Drawing::Point(18, 635);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(138, 50);
			this->btnGuardar->TabIndex = 87;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = false;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Proveedores::btnGuardar_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(5, 465);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 86;
			this->label6->Text = L"Empresa:";
			// 
			// txtEmpresa
			// 
			this->txtEmpresa->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtEmpresa->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmpresa->Location = System::Drawing::Point(136, 462);
			this->txtEmpresa->Multiline = true;
			this->txtEmpresa->Name = L"txtEmpresa";
			this->txtEmpresa->Size = System::Drawing::Size(416, 39);
			this->txtEmpresa->TabIndex = 85;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(5, 393);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 23);
			this->label5->TabIndex = 84;
			this->label5->Text = L"Correo:";
			// 
			// txtCorreo
			// 
			this->txtCorreo->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtCorreo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCorreo->Location = System::Drawing::Point(136, 390);
			this->txtCorreo->Multiline = true;
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(416, 39);
			this->txtCorreo->TabIndex = 83;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(5, 321);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 23);
			this->label4->TabIndex = 82;
			this->label4->Text = L"Télefono:";
			// 
			// txtTelefono
			// 
			this->txtTelefono->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtTelefono->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTelefono->Location = System::Drawing::Point(136, 318);
			this->txtTelefono->Multiline = true;
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(416, 39);
			this->txtTelefono->TabIndex = 81;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 249);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 23);
			this->label3->TabIndex = 80;
			this->label3->Text = L"Dirección:";
			// 
			// txtDireccion
			// 
			this->txtDireccion->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtDireccion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDireccion->Location = System::Drawing::Point(136, 246);
			this->txtDireccion->Multiline = true;
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(416, 39);
			this->txtDireccion->TabIndex = 79;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 23);
			this->label2->TabIndex = 78;
			this->label2->Text = L"Apellido:";
			// 
			// txtApellido
			// 
			this->txtApellido->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtApellido->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtApellido->Location = System::Drawing::Point(136, 174);
			this->txtApellido->Multiline = true;
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(416, 39);
			this->txtApellido->TabIndex = 77;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 23);
			this->label1->TabIndex = 76;
			this->label1->Text = L"Nombre:";
			// 
			// txtNombre
			// 
			this->txtNombre->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(136, 102);
			this->txtNombre->Multiline = true;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(416, 39);
			this->txtNombre->TabIndex = 75;
			// 
			// grdProveedores
			// 
			this->grdProveedores->BackgroundColor = System::Drawing::SystemColors::Control;
			this->grdProveedores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdProveedores->Dock = System::Windows::Forms::DockStyle::Right;
			this->grdProveedores->Location = System::Drawing::Point(50, 63);
			this->grdProveedores->Name = L"grdProveedores";
			this->grdProveedores->RowHeadersWidth = 51;
			this->grdProveedores->RowTemplate->Height = 24;
			this->grdProveedores->Size = System::Drawing::Size(1338, 628);
			this->grdProveedores->TabIndex = 74;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(5, 533);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 23);
			this->label7->TabIndex = 94;
			this->label7->Text = L"Banco:";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(5, 593);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 23);
			this->label8->TabIndex = 96;
			this->label8->Text = L"No. Cuenta:";
			// 
			// txtCuenta
			// 
			this->txtCuenta->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtCuenta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCuenta->Location = System::Drawing::Point(136, 590);
			this->txtCuenta->Multiline = true;
			this->txtCuenta->Name = L"txtCuenta";
			this->txtCuenta->Size = System::Drawing::Size(416, 39);
			this->txtCuenta->TabIndex = 95;
			// 
			// cbxBanco
			// 
			this->cbxBanco->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->cbxBanco->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxBanco->FormattingEnabled = true;
			this->cbxBanco->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"BANRURAL", L"BANTRAB", L"INDUSTRIAL", L"AGROMERCANTIL" });
			this->cbxBanco->Location = System::Drawing::Point(136, 533);
			this->cbxBanco->Name = L"cbxBanco";
			this->cbxBanco->Size = System::Drawing::Size(416, 31);
			this->cbxBanco->TabIndex = 97;
			// 
			// Proveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1388, 738);
			this->Controls->Add(this->cbxBanco);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtCuenta);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtEmpresa);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtCorreo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->grdProveedores);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Proveedores";
			this->Text = L"Proveedores";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdProveedores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
	  private: DataTable^ ObtenerProveedores() {
		  DataTable^ dt = gcnew DataTable();
		  try {
			  String^ query = "SELECT * FROM proveedores WHERE estado = 'Activo'";
			  dt = connector->ExecuteQuery(query);
		  }
		  catch (Exception^ ex) {
			  MessageBox::Show("Error: " + ex->Message);
		  }
		  return dt;
	  }

private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	grdProveedores->DataSource = ObtenerProveedores();

}
	   private: System::Void LimpiarCampos() {
		   txtNombre->Clear();
		   txtApellido->Clear();
		   txtDireccion->Clear();
		   txtTelefono->Clear();
		   txtCorreo->Clear();
		   txtEmpresa->Clear();
		   txtCuenta->Clear();
		   cbxBanco->SelectedIndex = -1;
		   isEditMode = false;
		   selectedUserId = -1;
		   btnGuardar->Text = "Guardar"; // Resetear el texto del botón
	   }
private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = txtNombre->Text;
	String^ apellido = txtApellido->Text;
	String^ direccion = txtDireccion->Text;
	String^ telefono = txtTelefono->Text;
	String^ correo = txtCorreo->Text;
	String^ empresa = txtEmpresa->Text;
	String^ cuenta = txtCuenta->Text;
	String^ banco = cbxBanco->Text;

	// Validación de campos vacíos
	if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(apellido) ||
		String::IsNullOrWhiteSpace(direccion) || String::IsNullOrWhiteSpace(telefono) ||
		String::IsNullOrWhiteSpace(correo) || String::IsNullOrWhiteSpace(empresa) ||
		String::IsNullOrWhiteSpace(cuenta) || String::IsNullOrWhiteSpace(banco)) {
		MessageBox::Show("Ningún campo puede estar vacío");
		return;
	}
	if (banco != "BANRURAL" && banco != "BANTRAB" && banco != "AGROMERCANTIL" && banco != "INDUSTRIAL") {
		MessageBox::Show("El banco debe ser 'BANRURAL', 'BANTRAB', 'AGROMERCANTIL' o 'INDUSTRIAL'");
		return;
	}

	try {
		connector->OpenConnection();

		MySqlCommand^ comando;
		if (isEditMode) {
			// Actualizar proveedor existente
			String^ query = "UPDATE proveedores SET nombre = @nombre, apellido = @apellido, direccion = @direccion, telefono = @telefono, correo = @correo, empresa = @empresa, numcuenta = @numcuenta, banco = @banco, estado = @estado WHERE Idproveedores = @Idproveedores";
			comando = gcnew MySqlCommand(query, connector->getConnection());
			comando->Parameters->AddWithValue("@Idproveedores", selectedUserId);
		}
		else {
			// Insertar nuevo proveedor
			// Verificar duplicados solo al insertar un nuevo proveedor
			String^ checkQuery = "SELECT COUNT(*) FROM proveedores WHERE telefono = @telefono OR correo = @correo OR numcuenta = @numcuenta";
			MySqlCommand^ checkComando = gcnew MySqlCommand(checkQuery, connector->getConnection());
			checkComando->Parameters->AddWithValue("@telefono", telefono);
			checkComando->Parameters->AddWithValue("@correo", correo);
			checkComando->Parameters->AddWithValue("@numcuenta", cuenta);

			int count = Convert::ToInt32(checkComando->ExecuteScalar());
			if (count > 0) {
				MessageBox::Show("El teléfono, correo o número de cuenta ya existe en la base de datos.");
				return;
			}

			String^ query = "INSERT INTO proveedores (nombre, apellido, direccion, telefono, correo, empresa, numcuenta, banco, estado) VALUES (@nombre, @apellido, @direccion, @telefono, @correo, @empresa, @numcuenta, @banco, @estado)";
			comando = gcnew MySqlCommand(query, connector->getConnection());
		}

		// Añadir parámetros comunes
		comando->Parameters->AddWithValue("@nombre", nombre);
		comando->Parameters->AddWithValue("@apellido", apellido);
		comando->Parameters->AddWithValue("@direccion", direccion);
		comando->Parameters->AddWithValue("@telefono", telefono);
		comando->Parameters->AddWithValue("@correo", correo);
		comando->Parameters->AddWithValue("@empresa", empresa);
		comando->Parameters->AddWithValue("@numcuenta", cuenta);
		comando->Parameters->AddWithValue("@banco", banco);
		comando->Parameters->AddWithValue("@estado", "Activo"); // Establecer estado como "Activo"

		int resultado = comando->ExecuteNonQuery();

		if (resultado > 0) {
			if (isEditMode) {
				MessageBox::Show("Proveedor actualizado correctamente.");
			}
			else {
				MessageBox::Show("Proveedor registrado correctamente.");
			}
		}
		else {
			MessageBox::Show("Error en la operación.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		if (connector->getConnection()->State == ConnectionState::Open) {
			connector->CloseConnection();
		}
		grdProveedores->DataSource = ObtenerProveedores();
		LimpiarCampos();
	}
}

	   private: System::Void grdProveedores_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		   if (grdProveedores->SelectedRows->Count > 0) {
			   // Obtener la fila seleccionada
			   DataGridViewRow^ selectedRow = grdProveedores->SelectedRows[0];

			   // Verificar si la fila seleccionada no está vacía y contiene valores válidos
			   if (selectedRow->Cells["Idproveedores"]->Value != nullptr && !String::IsNullOrEmpty(selectedRow->Cells["Idproveedores"]->Value->ToString())) {
				   try {
					   // Activar el modo de edición y almacenar el ID del cliente seleccionado
					   isEditMode = true;
					   selectedUserId = Convert::ToInt32(selectedRow->Cells["Idproveedores"]->Value);

					   // Asignar valores a los TextBox solo si las celdas no están vacías
					   txtNombre->Text = selectedRow->Cells["nombre"]->Value != nullptr ? selectedRow->Cells["nombre"]->Value->ToString() : "";
					   txtApellido->Text = selectedRow->Cells["apellido"]->Value != nullptr ? selectedRow->Cells["apellido"]->Value->ToString() : "";
					   txtDireccion->Text = selectedRow->Cells["direccion"]->Value != nullptr ? selectedRow->Cells["direccion"]->Value->ToString() : "";
					   txtTelefono->Text = selectedRow->Cells["telefono"]->Value != nullptr ? selectedRow->Cells["telefono"]->Value->ToString() : "";
					   txtCorreo->Text = selectedRow->Cells["correo"]->Value != nullptr ? selectedRow->Cells["correo"]->Value->ToString() : "";
					   txtEmpresa->Text = selectedRow->Cells["empresa"]->Value != nullptr ? selectedRow->Cells["empresa"]->Value->ToString() : "";
					   txtCuenta->Text = selectedRow->Cells["numcuenta"]->Value != nullptr ? selectedRow->Cells["numcuenta"]->Value->ToString() : "";
					   cbxBanco->Text = selectedRow->Cells["banco"]->Value != nullptr ? selectedRow->Cells["banco"]->Value->ToString() : "";

					   // Cambiar el texto del botón a "Actualizar"
					   btnGuardar->Text = "Actualizar";
				   }
				   catch (Exception^ ex) {
					   MessageBox::Show("Error: " + ex->Message);
				   }
			   }
			   else {
				   // Limpiar los campos si la fila seleccionada está vacía o no válida
				   LimpiarCampos();
			   }
		   }
	   }

private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Verifica si hay una fila seleccionada
		if (grdProveedores->SelectedRows->Count > 0) {
			// Obtiene la fila seleccionada
			DataGridViewRow^ filaSeleccionada = grdProveedores->SelectedRows[0];

			// Verifica si la fila seleccionada no está vacía
			if (filaSeleccionada->Cells[0]->Value != nullptr) {
				// Obtén el ID del proveedor de la fila seleccionada (asumiendo que el ID está en la primera columna)
				int idProveedor = Convert::ToInt32(filaSeleccionada->Cells[0]->Value);

				// Confirmar la eliminación
				System::Windows::Forms::DialogResult result = MessageBox::Show("¿Estás seguro de que deseas eliminar este proveedor?", "Confirmar eliminación", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

				if (result == System::Windows::Forms::DialogResult::Yes) {
					// Cambia el estado del proveedor a Inactivo en la base de datos
					connector->OpenConnection();
					String^ query = "UPDATE proveedores SET estado = @estado WHERE Idproveedores = @Idproveedores";
					MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
					command->Parameters->AddWithValue("@Idproveedores", idProveedor);
					command->Parameters->AddWithValue("@estado", "Inactivo");

					int updateResult = command->ExecuteNonQuery();
					if (updateResult > 0) {
						MessageBox::Show("Proveedor eliminado correctamente.");
						// Actualiza el DataGridView para reflejar los cambios
						LimpiarCampos();
						grdProveedores->DataSource = ObtenerProveedores();
					}
					else {
						MessageBox::Show("No se pudo cambiar el estado del proveedor.");
					}
				}
			}
			else {
				MessageBox::Show("La fila seleccionada está vacía. Por favor, selecciona una fila válida para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Por favor, selecciona una fila para eliminar.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		connector->CloseConnection();
	}
}
private: System::Void Proveedores_Load(System::Object^ sender, System::EventArgs^ e) {
	// Suscribe el evento CellFormatting del DataGridView
	this->grdProveedores->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &Proveedores::grdProveedores_CellFormatting);
}

	private: System::Void grdProveedores_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {
		// Verifica si el índice de fila es par o impar
		if (e->RowIndex % 2 == 0) {
			if (e->RowIndex % 2 == 0) {
				// Fila par: amarillo claro
				e->CellStyle->BackColor = System::Drawing::Color::LightYellow;
			}
			else {
				// Fila impar: verde claro
				e->CellStyle->BackColor = System::Drawing::Color::LightGreen;
			}
		}
	}
};
}
