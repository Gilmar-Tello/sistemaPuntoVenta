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
	/// Resumen de Usuario
	/// </summary>
	public ref class Usuario : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector;
	private: System::Windows::Forms::Button^ button3;
	public:
	private: System::Windows::Forms::Button^ button2;

	public:

	public:
	public:
		MySqlConnection^ connection;

		Usuario(void)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &Usuario::Usuario_Load);

			connector = gcnew MySQLConnector();
			connection = gcnew MySqlConnection(connector->connectionString);
			this->grdUsuarios->SelectionChanged += gcnew System::EventHandler(this, &Usuario::grdUsuarios_SelectionChanged);

		

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Usuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegresar;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ grdUsuarios;


	private: System::Windows::Forms::TextBox^ txtNombre;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtApellido;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtDireccion;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtTelefono;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtUsuario;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtContrasena;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cbxRol;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnLimpiar;

	private: System::Windows::Forms::Button^ btnMostrar;



	protected:

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
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->grdUsuarios = (gcnew System::Windows::Forms::DataGridView());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbxRol = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdUsuarios))->BeginInit();
			this->SuspendLayout();
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
			this->btnRegresar->Location = System::Drawing::Point(1199, 0);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(177, 44);
			this->btnRegresar->TabIndex = 0;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &Usuario::btnRegresar_Click);
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
			this->menuStrip1->Size = System::Drawing::Size(1388, 63);
			this->menuStrip1->TabIndex = 24;
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Usuario::menuStrip1_ItemClicked);
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
			this->panel1->TabIndex = 25;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Usuario::panel1_Paint);
			// 
			// grdUsuarios
			// 
			this->grdUsuarios->BackgroundColor = System::Drawing::SystemColors::Control;
			this->grdUsuarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdUsuarios->Dock = System::Windows::Forms::DockStyle::Right;
			this->grdUsuarios->Location = System::Drawing::Point(50, 63);
			this->grdUsuarios->Name = L"grdUsuarios";
			this->grdUsuarios->RowHeadersWidth = 51;
			this->grdUsuarios->RowTemplate->Height = 24;
			this->grdUsuarios->Size = System::Drawing::Size(1338, 628);
			this->grdUsuarios->TabIndex = 26;
			// 
			// txtNombre
			// 
			this->txtNombre->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(156, 101);
			this->txtNombre->Multiline = true;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(416, 39);
			this->txtNombre->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 23);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 23);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Apellido:";
			// 
			// txtApellido
			// 
			this->txtApellido->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtApellido->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtApellido->Location = System::Drawing::Point(156, 173);
			this->txtApellido->Multiline = true;
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(416, 39);
			this->txtApellido->TabIndex = 29;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 23);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Dirección:";
			// 
			// txtDireccion
			// 
			this->txtDireccion->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtDireccion->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDireccion->Location = System::Drawing::Point(156, 245);
			this->txtDireccion->Multiline = true;
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(416, 39);
			this->txtDireccion->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 23);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Télefono:";
			// 
			// txtTelefono
			// 
			this->txtTelefono->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtTelefono->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTelefono->Location = System::Drawing::Point(156, 317);
			this->txtTelefono->Multiline = true;
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(416, 39);
			this->txtTelefono->TabIndex = 33;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(25, 392);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 23);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Usuario:";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtUsuario->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsuario->Location = System::Drawing::Point(156, 389);
			this->txtUsuario->Multiline = true;
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(416, 39);
			this->txtUsuario->TabIndex = 35;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(25, 464);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 23);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Contraseña:";
			// 
			// txtContrasena
			// 
			this->txtContrasena->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtContrasena->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContrasena->Location = System::Drawing::Point(156, 461);
			this->txtContrasena->Multiline = true;
			this->txtContrasena->Name = L"txtContrasena";
			this->txtContrasena->Size = System::Drawing::Size(416, 39);
			this->txtContrasena->TabIndex = 37;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(25, 536);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 23);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Rol:";
			// 
			// cbxRol
			// 
			this->cbxRol->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->cbxRol->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxRol->FormattingEnabled = true;
			this->cbxRol->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ADMINISTRADOR", L"VENDEDOR" });
			this->cbxRol->Location = System::Drawing::Point(156, 533);
			this->cbxRol->Name = L"cbxRol";
			this->cbxRol->Size = System::Drawing::Size(416, 31);
			this->cbxRol->TabIndex = 41;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(25, 597);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 23);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Fecha Reg:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(156, 597);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(416, 32);
			this->dateTimePicker1->TabIndex = 44;
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
			this->btnGuardar->Location = System::Drawing::Point(29, 635);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(138, 50);
			this->btnGuardar->TabIndex = 45;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = false;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Usuario::btnGuardar_Click);
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
			this->btnEliminar->Location = System::Drawing::Point(173, 635);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(126, 50);
			this->btnEliminar->TabIndex = 46;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &Usuario::btnEliminar_Click);
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
			this->btnLimpiar->Location = System::Drawing::Point(315, 635);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(126, 50);
			this->btnLimpiar->TabIndex = 47;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = false;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &Usuario::btnLimpiar_Click);
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
			this->btnMostrar->Location = System::Drawing::Point(457, 635);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(126, 50);
			this->btnMostrar->TabIndex = 48;
			this->btnMostrar->Text = L"Mostrar";
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &Usuario::btnMostrar_Click);
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
			this->button3->TabIndex = 50;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Usuario::button3_Click);
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
			this->button2->TabIndex = 49;
			this->button2->Text = L"x";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Usuario::button2_Click);
			// 
			// Usuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1388, 738);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cbxRol);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtContrasena);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->grdUsuarios);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Usuario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Usuario";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Usuario::Usuario_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdUsuarios))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	   DataTable^ ObtenerUsuarios() {
		   DataTable^ dt = gcnew DataTable();
		   try {
			   // Filtrar los usuarios que tienen el estado "Activo"
			   dt = connector->ExecuteQuery("SELECT * FROM usuario WHERE estado = 'Activo'");
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Error: " + ex->Message);
		   }
		   return dt;
	   }


private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	grdUsuarios->DataSource = ObtenerUsuarios();

	

}



private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = txtNombre->Text;
	String^ apellido = txtApellido->Text;
	String^ direccion = txtDireccion->Text;
	String^ telefono = txtTelefono->Text;
	String^ usuario = txtUsuario->Text;
	String^ clave = txtContrasena->Text;
	String^ rol = cbxRol->Text;
	String^ fecha = dateTimePicker1->Text;

	// Validación de campos vacíos
	if (String::IsNullOrWhiteSpace(usuario) || String::IsNullOrWhiteSpace(clave) ||
		String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(apellido) ||
		String::IsNullOrWhiteSpace(direccion) || String::IsNullOrWhiteSpace(telefono) ||
		String::IsNullOrWhiteSpace(rol) || String::IsNullOrWhiteSpace(fecha)) {
		MessageBox::Show("Ningún campo puede estar vacío");
		return;
	}
	if (rol != "VENDEDOR" && rol != "ADMINISTRADOR") {
		MessageBox::Show("El rol debe ser 'VENDEDOR' o 'ADMINISTRADOR'");
		return;
	}

	// Validación de fecha
	DateTime fechaCreacion;
	if (!DateTime::TryParse(fecha, fechaCreacion)) {
		MessageBox::Show("La fecha no es válida");
		return;
	}

	try {
		connector->OpenConnection();

		MySqlCommand^ comando;
		if (isEditMode) {
			// Actualizar usuario existente
			String^ query = "UPDATE usuario SET nombre = @nombre, apellido = @apellido, direccion = @direccion, telefono = @telefono, usuario = @usuario, contraseña = @contraseña, rol = @rol, fechacreacion = @fechacreacion, estado = 'Activo' WHERE Id = @Id";
			comando = gcnew MySqlCommand(query, connector->getConnection());

			comando->Parameters->AddWithValue("@Id", selectedUserId);
		}
		else {
			// Insertar nuevo usuario
			// Verificar duplicados solo al insertar un nuevo usuario
			String^ checkQuery = "SELECT COUNT(*) FROM usuario WHERE nombre = @nombre OR usuario = @usuario";
			MySqlCommand^ checkComando = gcnew MySqlCommand(checkQuery, connector->getConnection());
			checkComando->Parameters->AddWithValue("@nombre", nombre);
			checkComando->Parameters->AddWithValue("@usuario", usuario);

			int count = Convert::ToInt32(checkComando->ExecuteScalar());
			if (count > 0) {
				MessageBox::Show("Nombre y usuario ya existen en la base de datos.");
				return;
			}

			String^ query = "INSERT INTO usuario (nombre, apellido, direccion, telefono, usuario, contraseña, rol, fechacreacion, estado) VALUES (@nombre, @apellido, @direccion, @telefono, @usuario, @contraseña, @rol, @fechacreacion, 'Activo')";
			comando = gcnew MySqlCommand(query, connector->getConnection());
		}

		// Añadir parámetros comunes
		comando->Parameters->AddWithValue("@nombre", nombre);
		comando->Parameters->AddWithValue("@apellido", apellido);
		comando->Parameters->AddWithValue("@direccion", direccion);
		comando->Parameters->AddWithValue("@telefono", telefono);
		comando->Parameters->AddWithValue("@usuario", usuario);
		comando->Parameters->AddWithValue("@contraseña", clave);
		comando->Parameters->AddWithValue("@rol", rol);
		comando->Parameters->AddWithValue("@fechacreacion", fechaCreacion);

		int resultado = comando->ExecuteNonQuery();

		if (resultado > 0) {
			if (isEditMode) {
				MessageBox::Show("Usuario actualizado correctamente.");
			}
			else {
				MessageBox::Show("Usuario registrado correctamente.");
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
		grdUsuarios->DataSource = ObtenerUsuarios();
		LimpiarCampos();
	}
}



	

private: System::Void LimpiarCampos() {
	txtNombre->Clear();
	txtApellido->Clear();
	txtDireccion->Clear();
	txtTelefono->Clear();
	txtUsuario->Clear();
	txtContrasena->Clear();
	cbxRol->SelectedIndex = -1;
	dateTimePicker1->Value = DateTime::Now;
	isEditMode = false;
	selectedUserId = -1;
	btnGuardar->Text = "Guardar"; // Resetear el texto del botón
}
	   private: System::Void grdUsuarios_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		   if (grdUsuarios->SelectedRows->Count > 0) {
			   // Obtener la fila seleccionada
			   DataGridViewRow^ selectedRow = grdUsuarios->SelectedRows[0];

			   // Verificar si la fila seleccionada no está vacía y contiene valores válidos
			   if (selectedRow->Cells["Id"]->Value != nullptr && !String::IsNullOrEmpty(selectedRow->Cells["Id"]->Value->ToString())) {
				   try {
					   // Activar el modo de edición y almacenar el ID del usuario seleccionado
					   isEditMode = true;
					   selectedUserId = Convert::ToInt32(selectedRow->Cells["Id"]->Value);

					   // Asignar valores a los TextBox solo si las celdas no están vacías
					   txtNombre->Text = selectedRow->Cells["nombre"]->Value != nullptr ? selectedRow->Cells["nombre"]->Value->ToString() : "";
					   txtApellido->Text = selectedRow->Cells["apellido"]->Value != nullptr ? selectedRow->Cells["apellido"]->Value->ToString() : "";
					   txtDireccion->Text = selectedRow->Cells["direccion"]->Value != nullptr ? selectedRow->Cells["direccion"]->Value->ToString() : "";
					   txtTelefono->Text = selectedRow->Cells["telefono"]->Value != nullptr ? selectedRow->Cells["telefono"]->Value->ToString() : "";
					   txtUsuario->Text = selectedRow->Cells["usuario"]->Value != nullptr ? selectedRow->Cells["usuario"]->Value->ToString() : "";
					   txtContrasena->Text = selectedRow->Cells["contraseña"]->Value != nullptr ? selectedRow->Cells["contraseña"]->Value->ToString() : "";
					   cbxRol->Text = selectedRow->Cells["rol"]->Value != nullptr ? selectedRow->Cells["rol"]->Value->ToString() : "";
					   dateTimePicker1->Text = selectedRow->Cells["fechacreacion"]->Value != nullptr ? selectedRow->Cells["fechacreacion"]->Value->ToString() : "";

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
		if (grdUsuarios->SelectedRows->Count > 0) {
			// Obtiene la fila seleccionada
			DataGridViewRow^ filaSeleccionada = grdUsuarios->SelectedRows[0];

			// Verifica si la fila seleccionada no está vacía
			if (filaSeleccionada->Cells[0]->Value != nullptr) {
				// Obtén el ID del usuario de la fila seleccionada (asumiendo que el ID está en la primera columna)
				int idUsuario = Convert::ToInt32(filaSeleccionada->Cells[0]->Value);

				// Confirmar la eliminación
				System::Windows::Forms::DialogResult result = MessageBox::Show("¿Estás seguro de que deseas  eliminar este usuario?", "Confirmar acción", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

				if (result == System::Windows::Forms::DialogResult::Yes) {
					// Cambiar el estado del usuario a 'Inactivo' en la base de datos
					connector->OpenConnection();
					String^ query = "UPDATE usuario SET estado = 'Inactivo' WHERE Id = @Id";
					MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
					command->Parameters->AddWithValue("@Id", idUsuario);

					int updateResult = command->ExecuteNonQuery();
					if (updateResult > 0) {
						MessageBox::Show("El usuario se a eliminado correctamente.");
						LimpiarCampos();
						// Actualiza la fuente de datos del DataGridView
						grdUsuarios->DataSource = ObtenerUsuarios();
					}
					else {
						MessageBox::Show("No se pudo cambiar el estado del usuario.");
					}
				}
			}
			else {
				MessageBox::Show("La fila seleccionada está vacía. Por favor, selecciona una fila válida para cambiar su estado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Por favor, selecciona una fila para cambiar su estado.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		connector->CloseConnection();
	}
}


private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	LimpiarCampos();
}

private: System::Void Usuario_Load(System::Object^ sender, System::EventArgs^ e) {
	// Suscribe el evento CellFormatting del DataGridView
	this->grdUsuarios->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &Usuario::grdUsuarios_CellFormatting);
}

private: System::Void grdUsuarios_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {
	// Verifica si el índice de fila es par o impar
	if (e->RowIndex % 2 == 0) {
		// Fila par: verde menta
		e->CellStyle->BackColor = System::Drawing::Color::MintCream;
	}
	else {
		// Fila impar: azul claro
		e->CellStyle->BackColor = System::Drawing::Color::LightCyan;
	}
}





private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
