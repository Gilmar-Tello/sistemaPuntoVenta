#pragma once
#include "MySQLConnector.h"

namespace sistemaPuntoVenta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;


	/// <summary>
	/// Resumen de Producto
	/// </summary>
	public ref class Producto : public System::Windows::Forms::Form
	{
		MySQLConnector^ connector;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtllenarstock;


	public:
		MySqlConnection^ connection;
		Producto(String^ rolUsuario)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &Producto::Producto_Load);

			connector = gcnew MySQLConnector();
			connection = gcnew MySqlConnection(connector->connectionString);
			this->grdProducto->SelectionChanged += gcnew System::EventHandler(this, &Producto::grdProducto_SelectionChanged);
			if (rolUsuario == "VENDEDOR") {
				btnEliminar->Visible = false;
			}
			
		}

		Producto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Producto()
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


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtStock;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtCompra;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtVenta;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtCodigo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::DataGridView^ grdProducto;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cbxProveedor;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtCompra = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtVenta = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->grdProducto = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbxProveedor = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtllenarstock = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdProducto))->BeginInit();
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
			this->btnRegresar->Location = System::Drawing::Point(1199, 5);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(177, 39);
			this->btnRegresar->TabIndex = 29;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &Producto::btnRegresar_Click);
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
			this->button3->Location = System::Drawing::Point(1275, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 64);
			this->button3->TabIndex = 134;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Producto::button3_Click);
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
			this->button2->Location = System::Drawing::Point(1329, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 61);
			this->button2->TabIndex = 133;
			this->button2->Text = L"x";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Producto::button2_Click);
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
			this->btnMostrar->Location = System::Drawing::Point(173, 575);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(126, 50);
			this->btnMostrar->TabIndex = 132;
			this->btnMostrar->Text = L"Mostrar";
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &Producto::btnMostrar_Click);
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
			this->btnLimpiar->Location = System::Drawing::Point(311, 575);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(126, 50);
			this->btnLimpiar->TabIndex = 131;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = false;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &Producto::btnLimpiar_Click);
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
			this->btnEliminar->Location = System::Drawing::Point(447, 575);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(126, 50);
			this->btnEliminar->TabIndex = 130;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &Producto::btnEliminar_Click);
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
			this->btnGuardar->Location = System::Drawing::Point(24, 575);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(138, 50);
			this->btnGuardar->TabIndex = 129;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = false;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Producto::btnGuardar_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 566);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 23);
			this->label5->TabIndex = 126;
			this->label5->Text = L"Stock:";
			// 
			// txtStock
			// 
			this->txtStock->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtStock->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtStock->Location = System::Drawing::Point(173, 563);
			this->txtStock->Multiline = true;
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(416, 39);
			this->txtStock->TabIndex = 125;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 494);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 23);
			this->label4->TabIndex = 124;
			this->label4->Text = L"Precio Compra:";
			// 
			// txtCompra
			// 
			this->txtCompra->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtCompra->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCompra->Location = System::Drawing::Point(173, 491);
			this->txtCompra->Multiline = true;
			this->txtCompra->Name = L"txtCompra";
			this->txtCompra->Size = System::Drawing::Size(416, 39);
			this->txtCompra->TabIndex = 123;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 422);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 23);
			this->label3->TabIndex = 122;
			this->label3->Text = L"Precio Venta:";
			// 
			// txtVenta
			// 
			this->txtVenta->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtVenta->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtVenta->Location = System::Drawing::Point(173, 419);
			this->txtVenta->Multiline = true;
			this->txtVenta->Name = L"txtVenta";
			this->txtVenta->Size = System::Drawing::Size(416, 39);
			this->txtVenta->TabIndex = 121;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 23);
			this->label2->TabIndex = 120;
			this->label2->Text = L"Código:";
			// 
			// txtCodigo
			// 
			this->txtCodigo->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtCodigo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCodigo->Location = System::Drawing::Point(173, 269);
			this->txtCodigo->Multiline = true;
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(416, 39);
			this->txtCodigo->TabIndex = 119;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 200);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 118;
			this->label1->Text = L"Producto";
			// 
			// txtNombre
			// 
			this->txtNombre->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->Location = System::Drawing::Point(173, 197);
			this->txtNombre->Multiline = true;
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(416, 39);
			this->txtNombre->TabIndex = 117;
			// 
			// grdProducto
			// 
			this->grdProducto->BackgroundColor = System::Drawing::SystemColors::Control;
			this->grdProducto->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdProducto->Dock = System::Windows::Forms::DockStyle::Right;
			this->grdProducto->Location = System::Drawing::Point(50, 63);
			this->grdProducto->Name = L"grdProducto";
			this->grdProducto->RowHeadersWidth = 51;
			this->grdProducto->RowTemplate->Height = 24;
			this->grdProducto->Size = System::Drawing::Size(1338, 628);
			this->grdProducto->TabIndex = 116;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 348);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 23);
			this->label7->TabIndex = 137;
			this->label7->Text = L"Proveedor";
			// 
			// cbxProveedor
			// 
			this->cbxProveedor->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->cbxProveedor->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxProveedor->FormattingEnabled = true;
			this->cbxProveedor->Location = System::Drawing::Point(173, 348);
			this->cbxProveedor->Name = L"cbxProveedor";
			this->cbxProveedor->Size = System::Drawing::Size(416, 31);
			this->cbxProveedor->TabIndex = 138;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 621);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 23);
			this->label6->TabIndex = 140;
			this->label6->Text = L"LLenarStock";
			// 
			// txtllenarstock
			// 
			this->txtllenarstock->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtllenarstock->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtllenarstock->Location = System::Drawing::Point(173, 618);
			this->txtllenarstock->Multiline = true;
			this->txtllenarstock->Name = L"txtllenarstock";
			this->txtllenarstock->Size = System::Drawing::Size(416, 39);
			this->txtllenarstock->TabIndex = 139;
			// 
			// Producto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1388, 738);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtllenarstock);
			this->Controls->Add(this->cbxProveedor);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtCompra);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtVenta);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->grdProducto);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Producto";
			this->Text = L"Producto";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Producto::Producto_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdProducto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Minimized;

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   DataTable^ ObtenerProductos() {
			   DataTable^ dt = gcnew DataTable();
			   try {
				   dt = connector->ExecuteQuery("SELECT * FROM productos WHERE Estado = 'En Línea'");
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error: " + ex->Message);
			   }
			   return dt;
		   }

			
	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		grdProducto->DataSource = ObtenerProductos();
		

		// Aplicar el color de fondo a las filas que cumplan la condición
		for (int i = 0; i < grdProducto->Rows->Count; i++) {
			// Verificar si la fila no es una fila nueva o vacía
			if (grdProducto->Rows[i]->IsNewRow || grdProducto->Rows[i]->Cells["stock"]->Value == nullptr) {
				continue; // Saltar filas nuevas o vacías
			}

			// Obtener la cantidad del producto en la fila actual
			int cantidad = Convert::ToInt32(grdProducto->Rows[i]->Cells["stock"]->Value);

			// Verificar si la cantidad es 0 o menos
			if (cantidad <= 0) {
				// Cambiar el color de fondo de la fila a un rojo menos intenso
				grdProducto->Rows[i]->DefaultCellStyle->BackColor = Color::LightCoral;
			}
		}

	}
	private: System::Void LimpiarCampos() {
		txtNombre->Clear();
		txtCodigo->Clear();
		cbxProveedor->SelectedIndex = -1;
		txtVenta->Clear();
		txtCompra->Clear();
		txtStock->Clear();
		txtllenarstock->Clear();
		txtllenarstock->Visible = false; // Ocultar el campo txtllenarstock nuevamente
		txtStock->Visible = true;
		isEditMode = false;
		selectedUserId = -1;
		btnGuardar->Text = "Guardar"; // Resetear el texto del botón
	}
		   // Función para obtener los nombres de los proveedores desde la base de datos
		   System::Collections::Generic::List<String^>^ ObtenerNombresProveedores() {
			   auto nombresProveedores = gcnew System::Collections::Generic::List<String^>();

			   try {
				   connector->OpenConnection();

				   String^ query = "SELECT empresa FROM proveedores";
				   MySqlCommand^ comando = gcnew MySqlCommand(query, connector->getConnection());
				   MySqlDataReader^ dataReader = comando->ExecuteReader();

				   while (dataReader->Read()) {
					   nombresProveedores->Add(dataReader["empresa"]->ToString());
				   }

				   dataReader->Close();
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error: " + ex->Message);
			   }
			   finally {
				   if (connector->getConnection()->State == ConnectionState::Open) {
					   connector->CloseConnection();
				   }
			   }

			   return nombresProveedores;
		   }

		   // Función para llenar el ComboBox con los nombres de los proveedores
		   System::Void LlenarComboBoxProveedores() {
			   auto nombresProveedores = ObtenerNombresProveedores();

			   cbxProveedor->Items->Clear();
			   for each (String ^ nombre in nombresProveedores) {
				   cbxProveedor->Items->Add(nombre);
			   }
		   }


	private: System::Void Producto_Load(System::Object^ sender, System::EventArgs^ e) {
		// Llamar a la función LlenarComboBoxProveedores cuando sea necesario, por ejemplo, al cargar el formulario
		LlenarComboBoxProveedores();
		txtllenarstock->Visible = false;
		this->grdProducto->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &Producto::grdProducto_CellFormatting);


	}

		   // ...


		   // ...

	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = txtNombre->Text;
		String^ codigo = txtCodigo->Text;
		String^ proveedor = cbxProveedor->Text;
		String^ venta = txtVenta->Text;
		String^ compra = txtCompra->Text;
		String^ stock = txtStock->Text;
		String^ llenarstock = txtllenarstock->Text;

		// Validación de campos vacíos
		if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(codigo) ||
			String::IsNullOrWhiteSpace(proveedor) || String::IsNullOrWhiteSpace(venta) ||
			String::IsNullOrWhiteSpace(compra) || (!isEditMode && String::IsNullOrWhiteSpace(stock))) {
			MessageBox::Show("Ningún campo puede estar vacío, excepto llenar stock en modo de edición.");
			return;
		}

		// Validación de proveedor
		if (!cbxProveedor->Items->Contains(proveedor)) {
			MessageBox::Show("Por favor, selecciona un proveedor válido del ComboBox.");
			return;
		}

		// Validación de campos numéricos
		double precioventa, preciocompra;
		int stockInicial = 0, stockToAdd = 0;

		// Usar la cultura invariante para asegurarse de que el punto decimal sea interpretado correctamente
		CultureInfo^ culture = CultureInfo::InvariantCulture;

		if (!Double::TryParse(venta, NumberStyles::Number, culture, precioventa) || precioventa <= 0) {
			MessageBox::Show("El campo precio de venta debe ser un número válido igual o mayor a 0.");
			return;
		}

		if (!Double::TryParse(compra, NumberStyles::Number, culture, preciocompra) || preciocompra <= 0) {
			MessageBox::Show("El campo precio de compra debe ser un número válido igual o mayor a 0.");
			return;
		}

		if (!isEditMode && (!Int32::TryParse(stock, NumberStyles::Number, culture, stockInicial) || stockInicial < 0)) {
			MessageBox::Show("El campo stock debe ser un número válido igual o mayor a 0.");
			return;
		}

		if (isEditMode && !String::IsNullOrWhiteSpace(llenarstock)) {
			if (!Int32::TryParse(llenarstock, NumberStyles::Number, culture, stockToAdd) || stockToAdd < 0) {
				MessageBox::Show("El campo para llenar stock debe ser un número válido igual o mayor a 0.");
				return;
			}
		}

		try {
			connector->OpenConnection();

			// Verificar si el producto y el código ya existen, excluyendo el producto que se está editando en modo de edición
			String^ checkQuery = "SELECT COUNT(*) FROM productos WHERE (producto = @producto OR codigo = @codigo) AND Idproducto != @Idproducto";
			MySqlCommand^ checkComando = gcnew MySqlCommand(checkQuery, connector->getConnection());
			checkComando->Parameters->AddWithValue("@producto", nombre);
			checkComando->Parameters->AddWithValue("@codigo", codigo);
			checkComando->Parameters->AddWithValue("@Idproducto", selectedUserId); // Este es el Id del producto en modo de edición

			int count = Convert::ToInt32(checkComando->ExecuteScalar());
			if (count > 0) {
				MessageBox::Show("Producto y/o código ya existentes.");
				return;
			}

			MySqlCommand^ comando;
			if (isEditMode) {
				// Obtener el stock actual
				String^ queryGetStock = "SELECT stock FROM productos WHERE Idproducto = @Idproducto";
				comando = gcnew MySqlCommand(queryGetStock, connector->getConnection());
				comando->Parameters->AddWithValue("@Idproducto", selectedUserId);
				int stockActual = Convert::ToInt32(comando->ExecuteScalar());

				// Sumar el nuevo stock al existente solo si se ingresó un valor en llenarstock
				int nuevoStock = stockActual;
				if (!String::IsNullOrWhiteSpace(llenarstock)) {
					nuevoStock += stockToAdd;
				}

				// Actualizar producto existente con el nuevo stock y estado En Línea
				String^ query = "UPDATE productos SET precioventa = @precioventa, preciocompra = @preciocompra, stock = @stock, estado = @estado WHERE Idproducto = @Idproducto";
				comando = gcnew MySqlCommand(query, connector->getConnection());

				comando->Parameters->AddWithValue("@Idproducto", selectedUserId);
				comando->Parameters->AddWithValue("@stock", nuevoStock);
				comando->Parameters->AddWithValue("@estado", "En Línea");
			}
			else {
				// Insertar nuevo producto con estado En Línea
				String^ query = "INSERT INTO productos (producto, codigo, proveedor, precioventa, preciocompra, stock, estado) VALUES (@producto, @codigo, @proveedor, @precioventa, @preciocompra, @stock, @estado)";
				comando = gcnew MySqlCommand(query, connector->getConnection());

				// Añadir parámetros comunes
				comando->Parameters->AddWithValue("@stock", stockInicial);
				comando->Parameters->AddWithValue("@estado", "En Línea");
			}

			// Añadir parámetros comunes
			comando->Parameters->AddWithValue("@producto", nombre);
			comando->Parameters->AddWithValue("@codigo", codigo);
			comando->Parameters->AddWithValue("@proveedor", proveedor);
			comando->Parameters->AddWithValue("@precioventa", precioventa);
			comando->Parameters->AddWithValue("@preciocompra", preciocompra);

			int resultado = comando->ExecuteNonQuery();

			if (resultado > 0) {
				if (isEditMode) {
					MessageBox::Show("Producto actualizado correctamente.");
				}
				else {
					MessageBox::Show("Producto registrado correctamente.");
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
			grdProducto->DataSource = ObtenerProductos(); // Asegúrate de tener una función ObtenerProductos
			LimpiarCampos();
		}
	}






	private: System::Void grdProducto_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		if (grdProducto->SelectedRows->Count > 0) {
			// Obtener la fila seleccionada
			DataGridViewRow^ selectedRow = grdProducto->SelectedRows[0];

			// Verificar si la fila seleccionada no está vacía y contiene valores válidos
			if (selectedRow->Cells["Idproducto"]->Value != nullptr && !String::IsNullOrEmpty(selectedRow->Cells["Idproducto"]->Value->ToString())) {
				try {
					// Activar el modo de edición y almacenar el ID del producto seleccionado
					isEditMode = true;
					selectedUserId = Convert::ToInt32(selectedRow->Cells["Idproducto"]->Value);

					// Asignar valores a los TextBox solo si las celdas no están vacías
					txtNombre->Text = selectedRow->Cells["producto"]->Value != nullptr ? selectedRow->Cells["producto"]->Value->ToString() : "";
					txtCodigo->Text = selectedRow->Cells["codigo"]->Value != nullptr ? selectedRow->Cells["codigo"]->Value->ToString() : "";
					cbxProveedor->Text = selectedRow->Cells["proveedor"]->Value != nullptr ? selectedRow->Cells["proveedor"]->Value->ToString() : "";
					txtVenta->Text = selectedRow->Cells["precioventa"]->Value != nullptr ? selectedRow->Cells["precioventa"]->Value->ToString() : "";
					txtCompra->Text = selectedRow->Cells["preciocompra"]->Value != nullptr ? selectedRow->Cells["preciocompra"]->Value->ToString() : "";
					txtStock->Text = selectedRow->Cells["stock"]->Value != nullptr ? selectedRow->Cells["stock"]->Value->ToString() : "";

					// Mostrar el campo txtllenarstock para añadir stock
					txtllenarstock->Visible = true;
					txtStock->Visible = false;


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
	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		LimpiarCampos();
	}
	private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Verifica si hay una fila seleccionada
			if (grdProducto->SelectedRows->Count > 0) {
				// Obtiene la fila seleccionada
				DataGridViewRow^ filaSeleccionada = grdProducto->SelectedRows[0];

				// Verifica si la fila seleccionada no está vacía
				if (filaSeleccionada->Cells[0]->Value != nullptr) {
					// Obtén el ID del producto de la fila seleccionada (asumiendo que el ID está en la primera columna)
					int idProducto = Convert::ToInt32(filaSeleccionada->Cells[0]->Value);

					// Confirmar el cambio de estado
					System::Windows::Forms::DialogResult result = MessageBox::Show("¿Estás seguro de que deseas eliminar este producto?", "Confirmar cambio de estado", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

					if (result == System::Windows::Forms::DialogResult::Yes) {
						// Cambia el estado del producto en la base de datos
						connector->OpenConnection();
						String^ query = "UPDATE productos SET estado = @estado WHERE Idproducto = @Idproducto";
						MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
						command->Parameters->AddWithValue("@estado", "Fuera de línea");
						command->Parameters->AddWithValue("@Idproducto", idProducto);

						int updateResult = command->ExecuteNonQuery();
						if (updateResult > 0) {
							MessageBox::Show("El producto fue eliminado correctamente.");
							LimpiarCampos();
							// Actualiza la fila del DataGridView
							grdProducto->Rows->Remove(filaSeleccionada);
						}
						else {
							MessageBox::Show("No se pudo cambiar el estado del producto.");
						}
					}
				}
				else {
					MessageBox::Show("La fila seleccionada está vacía. Por favor, selecciona una fila válida para cambiar el estado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Por favor, selecciona una fila para cambiar el estado.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			connector->CloseConnection();
		}
	}
		   

private: System::Void grdProducto_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {
	// Verifica si el índice de fila es par o impar
	if (e->RowIndex % 2 == 0) {
		// Fila par: gris claro
		e->CellStyle->BackColor = System::Drawing::Color::LightGray;
	}
	else {
		// Fila impar: beige
		e->CellStyle->BackColor = System::Drawing::Color::Beige;
	}
}


	};
}