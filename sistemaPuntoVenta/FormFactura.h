#pragma once
#include "Venta.h"
#include "MySQLConnector.h"
namespace sistemaPuntoVenta {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Globalization;

    
    public ref class FormFactura : public System::Windows::Forms::Form
    {
    public:
        MySQLConnector^ connector;
    public:
        MySqlConnection^ connection;

        FormFactura(void)
        {
            InitializeComponent();
            connector = gcnew MySQLConnector();
            connection = gcnew MySqlConnection(connector->connectionString);
            // Inicializar el control de texto para mostrar los detalles de la factura
            lblDetallesFactura = gcnew Label();
            lblDetallesFactura->AutoSize = true;
            lblDetallesFactura->Location = System::Drawing::Point(10, 10);
            this->Controls->Add(lblDetallesFactura);

            // Inicializar el control de texto para mostrar el total final
            txtTotalFinal = gcnew TextBox();
            txtTotalFinal->Location = System::Drawing::Point(10, 100);
            txtTotalFinal->ReadOnly = true;
            this->Controls->Add(txtTotalFinal);
            bool encabezadosAgregados = false;

        }

    protected:
        ~FormFactura()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ lbldatos;
           bool encabezadosAgregados;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::Label^ lblTotal;
    private: System::Windows::Forms::Label^ lblCliente;
    private: System::Windows::Forms::Label^ lblCambio;
    private: System::Windows::Forms::Label^ lblEfectivo;
    private: System::Windows::Forms::Label^ lblUsuario;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ lblnumfac;
    private: System::Windows::Forms::Button^ button1;


    protected:

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->lbldatos = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->lblnumfac = (gcnew System::Windows::Forms::Label());
            this->lblCliente = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->lblUsuario = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->lblTotal = (gcnew System::Windows::Forms::Label());
            this->lblCambio = (gcnew System::Windows::Forms::Label());
            this->lblEfectivo = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(80, 4);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(184, 48);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Grupo de Tiendas Asociadas\r\nS.A\r\nChicacao";
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // lbldatos
            // 
            this->lbldatos->AutoSize = true;
            this->lbldatos->Location = System::Drawing::Point(12, 177);
            this->lbldatos->Name = L"lbldatos";
            this->lbldatos->Size = System::Drawing::Size(0, 16);
            this->lbldatos->TabIndex = 1;
            this->lbldatos->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->lblnumfac);
            this->panel1->Controls->Add(this->lblCliente);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->dateTimePicker1);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(364, 142);
            this->panel1->TabIndex = 2;
            // 
            // lblnumfac
            // 
            this->lblnumfac->AutoSize = true;
            this->lblnumfac->Location = System::Drawing::Point(171, 104);
            this->lblnumfac->Name = L"lblnumfac";
            this->lblnumfac->Size = System::Drawing::Size(44, 16);
            this->lblnumfac->TabIndex = 6;
            this->lblnumfac->Text = L"label4";
            // 
            // lblCliente
            // 
            this->lblCliente->AutoSize = true;
            this->lblCliente->Location = System::Drawing::Point(171, 88);
            this->lblCliente->Name = L"lblCliente";
            this->lblCliente->Size = System::Drawing::Size(44, 16);
            this->lblCliente->TabIndex = 5;
            this->lblCliente->Text = L"label4";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(80, 88);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(55, 32);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Cliente:\r\nFactura:";
            this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->Location = System::Drawing::Point(62, 55);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(244, 22);
            this->dateTimePicker1->TabIndex = 1;
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->button1);
            this->panel2->Controls->Add(this->label4);
            this->panel2->Controls->Add(this->lblUsuario);
            this->panel2->Controls->Add(this->pictureBox5);
            this->panel2->Controls->Add(this->label3);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->panel2->Location = System::Drawing::Point(0, 486);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(364, 182);
            this->panel2->TabIndex = 3;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormFactura::panel2_Paint);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)));
            this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Location = System::Drawing::Point(0, 150);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(364, 32);
            this->button1->TabIndex = 9;
            this->button1->Text = L"Imprimir";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &FormFactura::button1_Click);
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(3, 30);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(73, 16);
            this->label4->TabIndex = 8;
            this->label4->Text = L"Le atendio:";
            this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // lblUsuario
            // 
            this->lblUsuario->AutoSize = true;
            this->lblUsuario->Location = System::Drawing::Point(91, 32);
            this->lblUsuario->Name = L"lblUsuario";
            this->lblUsuario->Size = System::Drawing::Size(44, 16);
            this->lblUsuario->TabIndex = 7;
            this->lblUsuario->Text = L"label4";
            // 
            // pictureBox5
            // 
            this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox5->BackColor = System::Drawing::Color::White;
            this->pictureBox5->ImageLocation = L"C:\\Users\\tello\\Desktop\\sistemaPuntoVenta\\Imagen para proyecto\\codigo-qr.jpg";
            this->pictureBox5->Location = System::Drawing::Point(127, 66);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(88, 78);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox5->TabIndex = 6;
            this->pictureBox5->TabStop = false;
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(59, 2);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(249, 16);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Un gusto servirte siempre, vuelve pronto.";
            this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // lblTotal
            // 
            this->lblTotal->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->lblTotal->AutoSize = true;
            this->lblTotal->Location = System::Drawing::Point(236, 409);
            this->lblTotal->Name = L"lblTotal";
            this->lblTotal->Size = System::Drawing::Size(44, 16);
            this->lblTotal->TabIndex = 4;
            this->lblTotal->Text = L"label4";
            // 
            // lblCambio
            // 
            this->lblCambio->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->lblCambio->AutoSize = true;
            this->lblCambio->Location = System::Drawing::Point(236, 455);
            this->lblCambio->Name = L"lblCambio";
            this->lblCambio->Size = System::Drawing::Size(44, 16);
            this->lblCambio->TabIndex = 5;
            this->lblCambio->Text = L"label4";
            // 
            // lblEfectivo
            // 
            this->lblEfectivo->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->lblEfectivo->AutoSize = true;
            this->lblEfectivo->Location = System::Drawing::Point(236, 434);
            this->lblEfectivo->Name = L"lblEfectivo";
            this->lblEfectivo->Size = System::Drawing::Size(44, 16);
            this->lblEfectivo->TabIndex = 6;
            this->lblEfectivo->Text = L"label4";
            // 
            // FormFactura
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->ClientSize = System::Drawing::Size(364, 668);
            this->Controls->Add(this->lblEfectivo);
            this->Controls->Add(this->lblCambio);
            this->Controls->Add(this->lblTotal);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->lbldatos);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"FormFactura";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Factura";
            this->Load += gcnew System::EventHandler(this, &FormFactura::Factura_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

   public: System::Void Factura_Load(System::Object^ sender, System::EventArgs^ e) {
       dateTimePicker1->Value = DateTime::Now;

       // Bloquear la edición del DateTimePicker
       dateTimePicker1->Enabled = false;

       // Configurar el formato de visualización (opcional)
       dateTimePicker1->Format = DateTimePickerFormat::Short;

       // Asignar el número de factura al Label
       //lblnumfac->Text = numeroFactura;
       
      
   }

         void AgregarDetalleFactura(String^ producto, int cantidad, double precioUnitario, double total) {
             // Agregar los encabezados solo una vez
             if (!encabezadosAgregados) {
                 lbldatos->Text += String::Format("{0,-20} {1,10} {2,15} {3,15}\n", "Producto", "Cantidad", "Precio U.", "Total");
                 encabezadosAgregados = true;
             }

             // Agregar el detalle del producto
             String^ detalle = String::Format("{0,-20} {1,10} {2,15:Q.} {3,15:Q.}\n", producto, cantidad, precioUnitario, total);
             lbldatos->Text += detalle;
         }


          void SetTotalFinal(double totalFinal) {
              lblTotal->Text = "Total Final: Q." + totalFinal.ToString("F2");
          }
          public: void SetEfectivo(double efectivo) {
              lblEfectivo->Text ="Efectivo: Q."+ efectivo.ToString("F2");
          }

    public: void SetCambio(double cambio) {
    lblCambio->Text ="Cambio: Q."+ cambio.ToString("F2");
    }
          public: void SetCliente(String^ cliente) {
              lblCliente->Text = cliente;
          }
                public: void SetUsuario(String^ usuario) {
                    lblUsuario->Text = usuario;
                }
                      public: void SetNumFactura(String^ numeroFactura) {
                          lblnumfac->Text = numeroFactura;
                      }





                      //String^ GenerarNumeroFactura() {
                      //    static int numeroFactura = 1; // Inicializamos el contador en 1

                      //    // Generamos el número de factura concatenando el contador con un prefijo
                      //    String^ numero = "FACT-" + numeroFactura.ToString("D6"); // D6 asegura que el número tenga 6 dígitos

                      //    // Incrementamos el contador para la próxima factura
                      //    numeroFactura++;

                      //    return numero;
                      //}


          // Declara los controles aquí
          Label^ lblDetallesFactura;
          TextBox^ txtTotalFinal;
         
   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}