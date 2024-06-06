#pragma once
#include "MySQLConnector.h"
#include "FormFactura.h"
namespace sistemaPuntoVenta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;


	/// <summary>
	/// Resumen de Venta
	/// </summary>
	public ref class Venta : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector;
	private: System::Windows::Forms::Label^ txtTotal;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnBorrar;


	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ txtNitCliente;
	private: System::Windows::Forms::TextBox^ txtEfectivo;
	private: System::Windows::Forms::Label^ label6;
	public:

	public:

	public:
		MySqlConnection^ connection;

		Venta(String^ nombreUsuario)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &Venta::Venta_Load);

			 usuario = nombreUsuario;
			connector = gcnew MySQLConnector();
			connection = gcnew MySqlConnection(connector->connectionString);
			txtProducto->TextChanged += gcnew System::EventHandler(this, &Venta::txtProducto_TextChanged);
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Venta::listBox1_SelectedIndexChanged);
			txtNitCliente->TextChanged += gcnew System::EventHandler(this, &Venta::txtNitCliente_TextChanged);
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Venta::listBox2_SelectedIndexChanged);

			

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Venta()
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtProducto;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtCantidad;
	private: System::Windows::Forms::DataGridView^ grdVenta;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnVender;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnRegistrar;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;
		String^ usuario;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtProducto = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->grdVenta = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtEfectivo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::Label());
			this->btnVender = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtNitCliente = (gcnew System::Windows::Forms::TextBox());
			this->btnBorrar = (gcnew System::Windows::Forms::Button());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdVenta))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
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
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Venta::panel1_Paint);
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
			this->btnRegresar->Size = System::Drawing::Size(177, 44);
			this->btnRegresar->TabIndex = 29;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = false;
			this->btnRegresar->Click += gcnew System::EventHandler(this, &Venta::btnRegresar_Click);
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
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Venta::menuStrip1_ItemClicked);
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
			this->button3->Location = System::Drawing::Point(1281, -3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 64);
			this->button3->TabIndex = 136;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Venta::button3_Click);
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
			this->button2->Location = System::Drawing::Point(1335, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 61);
			this->button2->TabIndex = 135;
			this->button2->Text = L"x";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Venta::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 23);
			this->label1->TabIndex = 138;
			this->label1->Text = L"Producto:";
			// 
			// txtProducto
			// 
			this->txtProducto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtProducto->Location = System::Drawing::Point(197, 102);
			this->txtProducto->Multiline = true;
			this->txtProducto->Name = L"txtProducto";
			this->txtProducto->Size = System::Drawing::Size(416, 39);
			this->txtProducto->TabIndex = 137;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(3, 18);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(531, 211);
			this->listBox1->TabIndex = 139;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 23);
			this->label2->TabIndex = 141;
			this->label2->Text = L"Cantidad:";
			// 
			// txtCantidad
			// 
			this->txtCantidad->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCantidad->Location = System::Drawing::Point(197, 160);
			this->txtCantidad->Multiline = true;
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(416, 39);
			this->txtCantidad->TabIndex = 140;
			// 
			// grdVenta
			// 
			this->grdVenta->BackgroundColor = System::Drawing::Color::White;
			this->grdVenta->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdVenta->Dock = System::Windows::Forms::DockStyle::Fill;
			this->grdVenta->Location = System::Drawing::Point(3, 18);
			this->grdVenta->Name = L"grdVenta";
			this->grdVenta->RowHeadersWidth = 51;
			this->grdVenta->RowTemplate->Height = 24;
			this->grdVenta->Size = System::Drawing::Size(220, 478);
			this->grdVenta->TabIndex = 142;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(910, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 23);
			this->label3->TabIndex = 144;
			this->label3->Text = L"Total:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->txtEfectivo);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txtTotal);
			this->groupBox1->Controls->Add(this->btnVender);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox1->Location = System::Drawing::Point(0, 562);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1388, 129);
			this->groupBox1->TabIndex = 145;
			this->groupBox1->TabStop = false;
			// 
			// txtEfectivo
			// 
			this->txtEfectivo->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->txtEfectivo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEfectivo->Location = System::Drawing::Point(728, 21);
			this->txtEfectivo->Multiline = true;
			this->txtEfectivo->Name = L"txtEfectivo";
			this->txtEfectivo->Size = System::Drawing::Size(176, 39);
			this->txtEfectivo->TabIndex = 149;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(624, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 147;
			this->label6->Text = L"Efectivo: ";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1092, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 52);
			this->label5->TabIndex = 146;
			this->label5->Text = L"Q. ";
			// 
			// txtTotal
			// 
			this->txtTotal->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->txtTotal->AutoSize = true;
			this->txtTotal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTotal->Location = System::Drawing::Point(1223, 14);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(0, 52);
			this->txtTotal->TabIndex = 145;
			// 
			// btnVender
			// 
			this->btnVender->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnVender->AutoSize = true;
			this->btnVender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnVender->FlatAppearance->BorderSize = 0;
			this->btnVender->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVender->ForeColor = System::Drawing::SystemColors::Control;
			this->btnVender->Location = System::Drawing::Point(1128, 67);
			this->btnVender->Name = L"btnVender";
			this->btnVender->Size = System::Drawing::Size(177, 44);
			this->btnVender->TabIndex = 30;
			this->btnVender->Text = L"Realizar venta";
			this->btnVender->UseVisualStyleBackColor = false;
			this->btnVender->Click += gcnew System::EventHandler(this, &Venta::btnVender_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->txtNitCliente);
			this->groupBox2->Controls->Add(this->btnBorrar);
			this->groupBox2->Controls->Add(this->btnRegistrar);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->txtCantidad);
			this->groupBox2->Controls->Add(this->txtProducto);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox2->Location = System::Drawing::Point(0, 63);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(625, 499);
			this->groupBox2->TabIndex = 146;
			this->groupBox2->TabStop = false;
			// 
			// txtNitCliente
			// 
			this->txtNitCliente->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNitCliente->Location = System::Drawing::Point(197, 402);
			this->txtNitCliente->Multiline = true;
			this->txtNitCliente->Name = L"txtNitCliente";
			this->txtNitCliente->Size = System::Drawing::Size(416, 39);
			this->txtNitCliente->TabIndex = 148;
			// 
			// btnBorrar
			// 
			this->btnBorrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnBorrar->AutoSize = true;
			this->btnBorrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnBorrar->FlatAppearance->BorderSize = 0;
			this->btnBorrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBorrar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBorrar->Location = System::Drawing::Point(436, 267);
			this->btnBorrar->Name = L"btnBorrar";
			this->btnBorrar->Size = System::Drawing::Size(177, 44);
			this->btnBorrar->TabIndex = 146;
			this->btnBorrar->Text = L"Borrar";
			this->btnBorrar->UseVisualStyleBackColor = false;
			this->btnBorrar->Click += gcnew System::EventHandler(this, &Venta::btnBorrar_Click);
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnRegistrar->AutoSize = true;
			this->btnRegistrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnRegistrar->FlatAppearance->BorderSize = 0;
			this->btnRegistrar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar->ForeColor = System::Drawing::SystemColors::Control;
			this->btnRegistrar->Location = System::Drawing::Point(436, 217);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(177, 44);
			this->btnRegistrar->TabIndex = 145;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = false;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &Venta::btnRegistrar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 405);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 23);
			this->label4->TabIndex = 143;
			this->label4->Text = L"Nit Cliente:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->listBox2);
			this->groupBox3->Controls->Add(this->listBox1);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox3->Location = System::Drawing::Point(625, 63);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(537, 499);
			this->groupBox3->TabIndex = 147;
			this->groupBox3->TabStop = false;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 23;
			this->listBox2->Location = System::Drawing::Point(3, 262);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(531, 234);
			this->listBox2->TabIndex = 140;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->grdVenta);
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox4->Location = System::Drawing::Point(1162, 63);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(226, 499);
			this->groupBox4->TabIndex = 148;
			this->groupBox4->TabStop = false;
			// 
			// Venta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1388, 738);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Venta";
			this->Text = L"Venta";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdVenta))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		RestaurarStockPendiente();
		this->Close();
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = System::Windows::Forms::FormWindowState::Minimized;

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		RestaurarStockPendiente();
		this->Close();
	}
	private: System::Void txtProducto_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = txtProducto->Text;

		// Limpiar la lista de sugerencias
		listBox1->Items->Clear();

		// Verificar si el texto de búsqueda no está vacío
		if (!String::IsNullOrWhiteSpace(searchText)) {
			try {
				connector->OpenConnection();

				// Consulta para obtener productos que coincidan con el texto de búsqueda y estén en estado "En Línea"
				String^ query = "SELECT producto FROM productos WHERE producto LIKE @searchText AND estado = 'En Línea'";
				MySqlCommand^ comando = gcnew MySqlCommand(query, connector->getConnection());
				comando->Parameters->AddWithValue("@searchText", "%" + searchText + "%");

				// Ejecutar la consulta y obtener los resultados
				MySqlDataReader^ reader = comando->ExecuteReader();

				// Agregar los resultados a la lista de sugerencias
				while (reader->Read()) {
					listBox1->Items->Add(reader["producto"]->ToString());
				}

				// Cerrar el lector y la conexión
				reader->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			finally {
				if (connector->getConnection()->State == ConnectionState::Open) {
					connector->CloseConnection();
				}
			}
		}
	}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedItem != nullptr) {
		txtProducto->Text = listBox1->SelectedItem->ToString();
	}
}
	   private: System::Void txtNitCliente_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		   String^ searchNit = txtNitCliente->Text;

		   // Limpiar la lista de sugerencias
		   listBox2->Items->Clear();

		   // Verificar si el texto de búsqueda no está vacío
		   if (!String::IsNullOrWhiteSpace(searchNit)) {
			   try {
				   connector->OpenConnection();

				   // Consulta para obtener los nombres de clientes cuyo NIT coincide con el texto de búsqueda y tienen estado "Activo"
				   String^ query = "SELECT nombre FROM clientes WHERE nit LIKE @searchNit AND estado = 'Activo'";
				   MySqlCommand^ comando = gcnew MySqlCommand(query, connector->getConnection());
				   comando->Parameters->AddWithValue("@searchNit", "%" + searchNit + "%");

				   // Ejecutar la consulta y obtener los resultados
				   MySqlDataReader^ reader = comando->ExecuteReader();

				   // Agregar los resultados a la lista de sugerencias
				   while (reader->Read()) {
					   listBox2->Items->Add(reader["nombre"]->ToString());
				   }

				   // Cerrar el lector y la conexión
				   reader->Close();
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error: " + ex->Message);
			   }
			   finally {
				   if (connector->getConnection()->State == ConnectionState::Open) {
					   connector->CloseConnection();
				   }
			   }
		   }
	   }
		
			  private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (listBox2->SelectedItem != nullptr) {
        txtNitCliente->Text = listBox2->SelectedItem->ToString();
    }
}






					 int ObtenerStockActual(String^ producto) {
						 int stockActual = 0;

						 try {
							 connector->OpenConnection();

							 String^ query = "SELECT stock FROM productos WHERE producto = @producto";
							 MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
							 command->Parameters->AddWithValue("@producto", producto);
							 Object^ result = command->ExecuteScalar();

							 if (result != nullptr) {
								 stockActual = Convert::ToInt32(result);
							 }
						 }
						 catch (Exception^ ex) {
							 MessageBox::Show("Error al obtener el stock actual: " + ex->Message);
						 }
						 finally {
							 if (connector->getConnection()->State == ConnectionState::Open) {
								 connector->CloseConnection();
							 }
						 }

						 return stockActual;
					 }

					 // Función para actualizar el stock de un producto específico
					 void ActualizarStock(String^ producto, int cantidad) {
						 try {
							 connector->OpenConnection();

							 String^ query = "UPDATE productos SET stock = stock - @cantidad WHERE producto = @producto";
							 MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
							 command->Parameters->AddWithValue("@cantidad", cantidad);
							 command->Parameters->AddWithValue("@producto", producto);
							 command->ExecuteNonQuery();
						 }
						 catch (Exception^ ex) {
							 MessageBox::Show("Error al actualizar el stock: " + ex->Message);
						 }
						 finally {
							 if (connector->getConnection()->State == ConnectionState::Open) {
								 connector->CloseConnection();
							 }
						 }
					 }

					 // Función para restaurar el stock de un producto específico
					 void RestaurarStock(String^ producto, int cantidad) {
						 try {
							 connector->OpenConnection();

							 String^ query = "UPDATE productos SET stock = stock + @cantidad WHERE producto = @producto";
							 MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
							 command->Parameters->AddWithValue("@cantidad", cantidad);
							 command->Parameters->AddWithValue("@producto", producto);
							 command->ExecuteNonQuery();
						 }
						 catch (Exception^ ex) {
							 MessageBox::Show("Error al restaurar el stock: " + ex->Message);
						 }
						 finally {
							 if (connector->getConnection()->State == ConnectionState::Open) {
								 connector->CloseConnection();
							 }
						 }
					 }
					 // Función para obtener el precio de venta de un producto
					 double ObtenerPrecioVenta(String^ producto) {
						 double precioVenta = 0.0;

						 try {
							 connector->OpenConnection();

							 // Consulta SQL para obtener el precio de venta del producto
							 String^ query = "SELECT precioventa FROM productos WHERE producto = @producto";
							 MySqlCommand^ comando = gcnew MySqlCommand(query, connector->getConnection());
							 comando->Parameters->AddWithValue("@producto", producto);

							 // Ejecutar la consulta y obtener el resultado
							 MySqlDataReader^ reader = comando->ExecuteReader();

							 if (reader->Read()) {
								 precioVenta = Convert::ToDouble(reader["precioventa"]);
							 }

							 // Cerrar el lector si aún está abierto
							 if (!reader->IsClosed) {
								 reader->Close();
							 }
						 }
						 catch (Exception^ ex) {
							 MessageBox::Show("Error al obtener el precio de venta: " + ex->Message);
						 }
						 finally {
							 if (connector->getConnection()->State == ConnectionState::Open) {
								 connector->CloseConnection();
							 }
						 }

						 return precioVenta;
					 }

					 // Evento btnRegistrar_Click
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ producto = txtProducto->Text;
	int cantidad = 0;

	// Verificar que la cantidad ingresada sea un número entero positivo
	if (!Int32::TryParse(txtCantidad->Text, cantidad) || cantidad <= 0) {
		MessageBox::Show("Ingrese una cantidad válida.");
		return;
	}

	try {
		connector->OpenConnection();

		// Consulta para obtener el stock del producto
		int stock = ObtenerStockActual(producto);

		if (cantidad > stock) {
			MessageBox::Show("No se cuenta con suficiente stock para este producto.");
			return;
		}

		// Actualizar el stock del producto
		ActualizarStock(producto, cantidad);

		// Restar el stock del producto en el DataGridView
		if (grdVenta->Columns->Count == 0) {
			grdVenta->Columns->Add("producto", "Producto");
			grdVenta->Columns->Add("cantidad", "Cantidad");
			grdVenta->Columns->Add("precioventa", "Precio Venta");
			grdVenta->Columns->Add("total", "Total");
		}

		double precioVenta = ObtenerPrecioVenta(producto); 
		double total = cantidad * precioVenta;

		int rowIndex = grdVenta->Rows->Add();
		grdVenta->Rows[rowIndex]->Cells["producto"]->Value = producto;
		grdVenta->Rows[rowIndex]->Cells["cantidad"]->Value = cantidad;
		grdVenta->Rows[rowIndex]->Cells["precioventa"]->Value = precioVenta;
		grdVenta->Rows[rowIndex]->Cells["total"]->Value = total;

		// Recalcular el total de la venta
		double totalVenta = 0.0;
		for each (DataGridViewRow ^ row in grdVenta->Rows) {
			if (row->Cells["total"]->Value != nullptr) {
				totalVenta += Convert::ToDouble(row->Cells["total"]->Value);
			}
		}

		txtTotal->Text = totalVenta.ToString();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		if (connector->getConnection()->State == ConnectionState::Open) {
			connector->CloseConnection();
		}
	}

	// Limpiar los campos de texto
	txtProducto->Text = "";
	txtCantidad->Text = "";
}

	   // Evento btnBorrar_Click
private: System::Void btnBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verificar si hay una fila seleccionada en el DataGridView
	if (grdVenta->SelectedRows->Count > 0) {
		String^ producto = Convert::ToString(grdVenta->SelectedRows[0]->Cells["producto"]->Value);
		int cantidad = Convert::ToInt32(grdVenta->SelectedRows[0]->Cells["cantidad"]->Value);

		// Obtener el total actual antes de borrar la fila
		double totalAnterior = Convert::ToDouble(txtTotal->Text);
		double totalEliminado = Convert::ToDouble(grdVenta->SelectedRows[0]->Cells["total"]->Value);
		double totalActualizado = totalAnterior - totalEliminado;

		// Actualizar el txtTotal con el nuevo total
		txtTotal->Text = totalActualizado.ToString();

		// Restaurar el stock del producto
		RestaurarStock(producto, cantidad);

		// Eliminar la fila seleccionada
		grdVenta->Rows->Remove(grdVenta->SelectedRows[0]);
	}
	else {
		MessageBox::Show("Seleccione una fila para borrar.");
	}
}
	   // Evento btnVender_Click
private: System::Void btnVender_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double totalFinal = Double::Parse(txtTotal->Text, CultureInfo::InvariantCulture);
		double efectivo = Double::Parse(txtEfectivo->Text, CultureInfo::InvariantCulture);
		String^ cliente = txtNitCliente->Text;

		
		// Validar que el efectivo sea suficiente
		if (efectivo < totalFinal) {
			MessageBox::Show("El efectivo ingresado no es suficiente para cubrir el total de la venta.");
			return;
		}
		if (String::IsNullOrEmpty(txtNitCliente->Text)) {
			MessageBox::Show("Ingrese el NIT del cliente antes de realizar la venta o 1 para C/F.");
			return;
		}

		double cambio = efectivo - totalFinal;

		connector->OpenConnection();
		String^ numeroFactura = GenerarNumeroFactura();
		String^ query = "INSERT INTO Ventas (NitCliente, FechaHora, TotalFactura, Usuario, NumeroFactura) VALUES (@nitCliente, @fechaHora, @totalFactura, @usuario, @numeroFactura)";
		MySqlCommand^ comando = gcnew MySqlCommand(query, connector->getConnection());
		comando->Parameters->AddWithValue("@nitCliente", cliente);
		comando->Parameters->AddWithValue("@fechaHora", DateTime::Now);
		comando->Parameters->AddWithValue("@totalFactura", totalFinal);
		comando->Parameters->AddWithValue("@usuario", usuario);
		comando->Parameters->AddWithValue("@numeroFactura", numeroFactura);
		comando->ExecuteNonQuery();

		int idVenta = Convert::ToInt32(comando->LastInsertedId);

		// Iterar sobre cada fila en el DataGridView para registrar la venta
		for each (DataGridViewRow ^ row in grdVenta->Rows) {
			// Verificar si la fila no es nueva
			if (!row->IsNewRow) {
				String^ producto = Convert::ToString(row->Cells["producto"]->Value);
				int cantidadVendida = Convert::ToInt32(row->Cells["cantidad"]->Value);
				double precioVenta = Convert::ToDouble(row->Cells["precioventa"]->Value);
				double total = Convert::ToDouble(row->Cells["total"]->Value);

				// Aquí puedes agregar la lógica para registrar la venta en la base de datos si es necesario
				String^ detalleQuery = "INSERT INTO DetalleVenta (IdVenta, Producto, Cantidad, Precio) VALUES (@idVenta, @Producto, @cantidad, @precio)";
				MySqlCommand^ detalleComando = gcnew MySqlCommand(detalleQuery, connector->getConnection());
				detalleComando->Parameters->AddWithValue("@idVenta", idVenta);
				detalleComando->Parameters->AddWithValue("@Producto", producto);
				detalleComando->Parameters->AddWithValue("@cantidad", cantidadVendida);
				detalleComando->Parameters->AddWithValue("@precio", precioVenta);
				detalleComando->ExecuteNonQuery();
			}
		}

		
		// Crear una instancia del formulario de la factura
		FormFactura^ formFactura = gcnew FormFactura();

		// Pasar los datos de la venta al formulario de la factura
		for each (DataGridViewRow ^ row in grdVenta->Rows) {
			// Verificar si la fila no es nueva
			if (!row->IsNewRow) {
				String^ producto = Convert::ToString(row->Cells["producto"]->Value);
				int cantidad = Convert::ToInt32(row->Cells["cantidad"]->Value);
				double precioUnitario = Convert::ToDouble(row->Cells["precioventa"]->Value);
				double total = Convert::ToDouble(row->Cells["total"]->Value);

				// Agregar los datos al formulario de la factura
				formFactura->AgregarDetalleFactura(producto, cantidad, precioUnitario, total);
			}
		}

		// Pasar el total final, efectivo y cambio al formulario de la factura
		formFactura->SetTotalFinal(totalFinal);
		formFactura->SetEfectivo(efectivo);
		formFactura->SetCambio(cambio);
		formFactura->SetCliente(cliente);
		formFactura->SetUsuario(usuario);
		formFactura->SetNumFactura(numeroFactura);

		// Mostrar el formulario de la factura
		formFactura->Show();

		// Limpiar el DataGridView y los campos de texto después de realizar la venta
		grdVenta->Rows->Clear();
		txtProducto->Text = "";
		txtCantidad->Text = "";
		txtTotal->Text = "";
		txtEfectivo->Text = "";
		txtNitCliente->Text="";
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		if (connector->getConnection()->State == ConnectionState::Open) {
			connector->CloseConnection();
		}
	}
}
	   void RestaurarStockPendiente() {
		   try {
			   // Iterar sobre cada fila en el DataGridView para restaurar el stock
			   for each (DataGridViewRow ^ row in grdVenta->Rows) {
				   // Verificar si la fila no es nueva
				   if (!row->IsNewRow) {
					   String^ producto = Convert::ToString(row->Cells["producto"]->Value);
					   int cantidad = Convert::ToInt32(row->Cells["cantidad"]->Value);

					   // Restaurar el stock del producto en la base de datos
					   RestaurarStock(producto, cantidad);
				   }
			   }
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Error al restaurar el stock pendiente: " + ex->Message);
		   }
	   }

	   private: System::Void LimpiarCampos() {
		   // Limpiar el DataGridView
		   grdVenta->Rows->Clear();

		   // Limpiar el TextBox txtTotal
		   

		   // Limpiar el TextBox txtProducto
		   txtProducto->Clear();

		   // Limpiar el TextBox txtCantidad
		   txtCantidad->Clear();

	   }
			  String^ GenerarNumeroFactura() {
				  static int numeroFactura = 1; // Inicializamos el contador en 1

				  // Generamos el número de factura concatenando el contador con un prefijo
				  String^ numero = "FACT-" + numeroFactura.ToString("D6"); // D6 asegura que el número tenga 6 dígitos

				  // Incrementamos el contador para la próxima factura
				  numeroFactura++;

				  return numero;
			  }

private: System::Void cbxNit_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
	   
private: System::Void Venta_Load(System::Object^ sender, System::EventArgs^ e) {
	// Suscribe el evento CellFormatting del DataGridView
	this->grdVenta->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &Venta::grdVenta_CellFormatting);
}

private: System::Void grdVenta_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {
	// Verifica si el índice de fila es par o impar
	if (e->RowIndex % 2 == 0) {
		// Fila par: amarillo pálido
		e->CellStyle->BackColor = System::Drawing::Color::LightGreen;
	}
	else {
		// Fila impar: azul cielo
		e->CellStyle->BackColor = System::Drawing::Color::MediumSeaGreen;
	}
}

};
}