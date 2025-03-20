#pragma once

#include <fstream>
#include <string.h>
using namespace std;
#include "CArvoreAluno.h"
#include <time.h>

namespace PArvoreVisual {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    string StringTostring(String ^ s) {
        using namespace Runtime::InteropServices;
        const char* chars = (const char*) (Marshal::StringToHGlobalAnsi(s)).ToPointer();

        string os = chars;
        Marshal::FreeHGlobal(IntPtr((void*) chars));
        return os;
    }

    String^ stringToString(string str) {
        String^ str2 = gcnew String(str.c_str());
        return str2;
    }

    /// <summary>
    /// Summary for Form1
    /// </summary>
    public

    ref class Form1 : public System::Windows::Forms::Form {
    public:
        CArvoreAluno *arvore;
		CAlunoArvore *aux_pesquisa;
		CListaAluno *aux_lista;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator7;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton13;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton16;
    private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator8;
    private: System::Windows::Forms::ToolStripMenuItem^  sCUTToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  importarClientesListaToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  listaToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  ·rvoreToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  ·rvoreToolStripMenuItem1;
    private: System::Windows::Forms::ToolStripButton^  BtnEliminaLista;
    private: System::Windows::Forms::TextBox^  TBTempo;
    private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton17;
	private: System::Windows::Forms::ToolStripComboBox^  CBSimplesDupla;

	public: 
	  int aux_ordem;

        Form1(void) {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
            arvore = new CArvoreAluno();
			aux_lista = new CListaAluno();
			aux_pesquisa = NULL;
			aux_ordem = 0;
        }

    protected:
        /// <summary>
        /// Clean up any resources being used->
        /// </summary>

        ~Form1() {
            if (components) {
                delete components;
            }
        }
    private:
        System::Windows::Forms::TabControl^ tabControl1;
    protected:
    private:
        System::Windows::Forms::TabPage^ tabPage1;

    private:
        System::Windows::Forms::Button^ button3;
    private:
        System::Windows::Forms::TabPage^ tabPage2;
    private:
        System::Windows::Forms::TextBox^ TBNome;
    private:
        System::Windows::Forms::Label^ label1;
    private:
        System::Windows::Forms::ListBox^ listBox2;
    private:
        System::Windows::Forms::ToolStrip^ toolStrip1;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton1;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton2;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton3;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton4;
    private:
        System::Windows::Forms::ListBox^ listBox1;
    private:
        System::Windows::Forms::TextBox^ TBTotalFolhas;


    private:
        System::Windows::Forms::Label^ label5;
    private:
        System::Windows::Forms::TextBox^ TBTotalNos;
    private:
        System::Windows::Forms::Label^ label4;
    private:
        System::Windows::Forms::TextBox^ TBAltura;


    private:
        System::Windows::Forms::Label^ label3;
    private:
        System::Windows::Forms::TextBox^ TBLarguraMaxima;

    private:
        System::Windows::Forms::Label^ label2;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton5;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton6;
    private:
        System::Windows::Forms::GroupBox^ groupBox1;
    private:
        System::Windows::Forms::TextBox^ TBAlturaCaixa;
    private:
        System::Windows::Forms::Label^ label6;
    private:
        System::Windows::Forms::TextBox^ TBLarguraCaixa;
    private:
        System::Windows::Forms::Label^ label7;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton7;
    private:
        System::Windows::Forms::GroupBox^ groupBox2;
    private:
        System::Windows::Forms::RadioButton^ RBInformacaoVisualizacao;
    private:
        System::Windows::Forms::RadioButton^ RBInformacaoPesquisa;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton8;
    private:
        System::Windows::Forms::GroupBox^ groupBox3;
    private:
        System::Windows::Forms::TextBox^ TBCentroY;
    private:
        System::Windows::Forms::Label^ label8;
    private:
        System::Windows::Forms::TextBox^ TBCentroX;
    private:
        System::Windows::Forms::Label^ label9;
    private:
        System::Windows::Forms::GroupBox^ groupBox4;
    private:
        System::Windows::Forms::TextBox^ TBAlturaArvoreDesenho;
    private:
        System::Windows::Forms::Label^ label10;
    private:
        System::Windows::Forms::TextBox^ TBDifNivel;
    private:
        System::Windows::Forms::Label^ label11;
    private:
        System::Windows::Forms::CheckBox^ CBUtilizaAlturaDesenho;
    private:
        System::Windows::Forms::Button^ Btn1a15;
    private:
        System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton9;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton10;
    private:
        System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
    private:
        System::Windows::Forms::MenuStrip^ menuStrip1;
    private:
        System::Windows::Forms::ToolStripMenuItem^ ficheiroToolStripMenuItem;
    private:
        System::Windows::Forms::ToolStripMenuItem^ lerNomesToolStripMenuItem;
    private:
        System::Windows::Forms::ToolStripMenuItem^ desordenarNomesToolStripMenuItem;
    private:
        System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private:
        System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
    private:
        System::Windows::Forms::FontDialog^ fontDialog1;
    private:
        System::Windows::Forms::ColorDialog^ colorDialog1;
    private:
        System::Windows::Forms::CheckBox^ CBAddonClick;
    private:
        System::Windows::Forms::CheckBox^ CBOrdena;
    private:
        System::Windows::Forms::Button^ BtnAddSelected;
    private:
        System::Windows::Forms::ToolStripMenuItem^ exportarNomesDa¡rvoreHTMLToolStripMenuItem;
    private:
        System::Windows::Forms::GroupBox^ groupBox5;
    private:
        System::Windows::Forms::Button^ BtnCorFundo;
    private:
        System::Windows::Forms::Button^ BtnCorTexto;
    private:
        System::Windows::Forms::TextBox^ TBCorExemplo;
    private:
        System::Windows::Forms::CheckBox^ CBDelOnSelect;
    private:
        System::Windows::Forms::ToolStripButton^ BtnZoomMais;
    private:
        System::Windows::Forms::ToolStripButton^ BtnZoomMenos;
    private:
        System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
    private:
        System::Windows::Forms::ToolStripMenuItem^ importarDadosToolStripMenuItem;
    private:
        System::Windows::Forms::ToolStripLabel^ toolStripLabel1;
    private:
        System::Windows::Forms::ToolStripButton^ BtnInsert;
    private:
        System::Windows::Forms::ToolStripButton^ BtnDelete;
    private:
        System::Windows::Forms::ToolStripMenuItem^ importarDadosAVLToolStripMenuItem;
    private:
        System::Windows::Forms::ToolStripButton^ BtnMarcaHeight;
    private:
        System::Windows::Forms::Button^ BtnAddSelectedAVL;
    private:
        System::Windows::Forms::ToolStripButton^ BtnMarcaInOrder;
    private:
        System::Windows::Forms::ToolStripButton^ toolStripButton11;
    private:
        System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
private: System::Windows::Forms::ToolStripButton^  BtnTravessiaLarguraED1N;
private: System::Windows::Forms::ToolStripButton^  BtnTravessiaLarguraDE1N;
private: System::Windows::Forms::ToolStripButton^  BtnTravessiaLarguraEDN1;
private: System::Windows::Forms::ToolStripButton^  BtnTravessiaLarguraDEN1;
private: System::Windows::Forms::ToolStripLabel^  toolStripLabel3;
private: System::Windows::Forms::ToolStripLabel^  toolStripLabel2;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
private: System::Windows::Forms::ToolStripButton^  toolStripButton12;

private: System::Windows::Forms::ToolStripLabel^  toolStripLabel4;
private: System::Windows::Forms::ToolStripButton^  toolStripButton14;
private: System::Windows::Forms::ToolStripButton^  toolStripButton15;




    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>

        void InitializeComponent(void) {
		  System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
		  this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
		  this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
		  this->TBTempo = (gcnew System::Windows::Forms::TextBox());
		  this->label12 = (gcnew System::Windows::Forms::Label());
		  this->BtnAddSelectedAVL = (gcnew System::Windows::Forms::Button());
		  this->CBDelOnSelect = (gcnew System::Windows::Forms::CheckBox());
		  this->BtnAddSelected = (gcnew System::Windows::Forms::Button());
		  this->CBOrdena = (gcnew System::Windows::Forms::CheckBox());
		  this->CBAddonClick = (gcnew System::Windows::Forms::CheckBox());
		  this->Btn1a15 = (gcnew System::Windows::Forms::Button());
		  this->TBTotalFolhas = (gcnew System::Windows::Forms::TextBox());
		  this->label5 = (gcnew System::Windows::Forms::Label());
		  this->TBTotalNos = (gcnew System::Windows::Forms::TextBox());
		  this->label4 = (gcnew System::Windows::Forms::Label());
		  this->TBAltura = (gcnew System::Windows::Forms::TextBox());
		  this->label3 = (gcnew System::Windows::Forms::Label());
		  this->TBLarguraMaxima = (gcnew System::Windows::Forms::TextBox());
		  this->label2 = (gcnew System::Windows::Forms::Label());
		  this->listBox1 = (gcnew System::Windows::Forms::ListBox());
		  this->TBNome = (gcnew System::Windows::Forms::TextBox());
		  this->label1 = (gcnew System::Windows::Forms::Label());
		  this->listBox2 = (gcnew System::Windows::Forms::ListBox());
		  this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
		  this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
		  this->BtnCorFundo = (gcnew System::Windows::Forms::Button());
		  this->BtnCorTexto = (gcnew System::Windows::Forms::Button());
		  this->TBCorExemplo = (gcnew System::Windows::Forms::TextBox());
		  this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
		  this->CBUtilizaAlturaDesenho = (gcnew System::Windows::Forms::CheckBox());
		  this->TBAlturaArvoreDesenho = (gcnew System::Windows::Forms::TextBox());
		  this->label10 = (gcnew System::Windows::Forms::Label());
		  this->TBDifNivel = (gcnew System::Windows::Forms::TextBox());
		  this->label11 = (gcnew System::Windows::Forms::Label());
		  this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
		  this->TBCentroY = (gcnew System::Windows::Forms::TextBox());
		  this->label8 = (gcnew System::Windows::Forms::Label());
		  this->TBCentroX = (gcnew System::Windows::Forms::TextBox());
		  this->label9 = (gcnew System::Windows::Forms::Label());
		  this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
		  this->RBInformacaoVisualizacao = (gcnew System::Windows::Forms::RadioButton());
		  this->RBInformacaoPesquisa = (gcnew System::Windows::Forms::RadioButton());
		  this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
		  this->TBAlturaCaixa = (gcnew System::Windows::Forms::TextBox());
		  this->label6 = (gcnew System::Windows::Forms::Label());
		  this->TBLarguraCaixa = (gcnew System::Windows::Forms::TextBox());
		  this->label7 = (gcnew System::Windows::Forms::Label());
		  this->button3 = (gcnew System::Windows::Forms::Button());
		  this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
		  this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton17 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
		  this->toolStripLabel3 = (gcnew System::Windows::Forms::ToolStripLabel());
		  this->toolStripButton9 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton11 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->BtnMarcaInOrder = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton10 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
		  this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
		  this->BtnTravessiaLarguraED1N = (gcnew System::Windows::Forms::ToolStripButton());
		  this->BtnTravessiaLarguraDE1N = (gcnew System::Windows::Forms::ToolStripButton());
		  this->BtnTravessiaLarguraEDN1 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->BtnTravessiaLarguraDEN1 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
		  this->BtnMarcaHeight = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
		  this->BtnZoomMais = (gcnew System::Windows::Forms::ToolStripButton());
		  this->BtnZoomMenos = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
		  this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
		  this->BtnInsert = (gcnew System::Windows::Forms::ToolStripButton());
		  this->BtnDelete = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
		  this->toolStripLabel4 = (gcnew System::Windows::Forms::ToolStripLabel());
		  this->toolStripButton14 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton15 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
		  this->toolStripLabel5 = (gcnew System::Windows::Forms::ToolStripLabel());
		  this->toolStripButton12 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton13 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->toolStripButton16 = (gcnew System::Windows::Forms::ToolStripButton());
		  this->BtnEliminaLista = (gcnew System::Windows::Forms::ToolStripButton());
		  this->CBSimplesDupla = (gcnew System::Windows::Forms::ToolStripComboBox());
		  this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		  this->ficheiroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->lerNomesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->desordenarNomesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->importarDadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->importarDadosAVLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->exportarNomesDa¡rvoreHTMLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
		  this->sCUTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->importarClientesListaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->listaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->·rvoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->·rvoreToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		  this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
		  this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
		  this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
		  this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
		  this->tabControl1->SuspendLayout();
		  this->tabPage2->SuspendLayout();
		  this->tabPage1->SuspendLayout();
		  this->groupBox5->SuspendLayout();
		  this->groupBox4->SuspendLayout();
		  this->groupBox3->SuspendLayout();
		  this->groupBox2->SuspendLayout();
		  this->groupBox1->SuspendLayout();
		  this->toolStrip1->SuspendLayout();
		  this->menuStrip1->SuspendLayout();
		  this->SuspendLayout();
		  // 
		  // tabControl1
		  // 
		  this->tabControl1->Controls->Add(this->tabPage2);
		  this->tabControl1->Controls->Add(this->tabPage1);
		  this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
		  this->tabControl1->Location = System::Drawing::Point(0, 52);
		  this->tabControl1->Name = L"tabControl1";
		  this->tabControl1->SelectedIndex = 0;
		  this->tabControl1->Size = System::Drawing::Size(1070, 735);
		  this->tabControl1->TabIndex = 6;
		  // 
		  // tabPage2
		  // 
		  this->tabPage2->Controls->Add(this->TBTempo);
		  this->tabPage2->Controls->Add(this->label12);
		  this->tabPage2->Controls->Add(this->BtnAddSelectedAVL);
		  this->tabPage2->Controls->Add(this->CBDelOnSelect);
		  this->tabPage2->Controls->Add(this->BtnAddSelected);
		  this->tabPage2->Controls->Add(this->CBOrdena);
		  this->tabPage2->Controls->Add(this->CBAddonClick);
		  this->tabPage2->Controls->Add(this->Btn1a15);
		  this->tabPage2->Controls->Add(this->TBTotalFolhas);
		  this->tabPage2->Controls->Add(this->label5);
		  this->tabPage2->Controls->Add(this->TBTotalNos);
		  this->tabPage2->Controls->Add(this->label4);
		  this->tabPage2->Controls->Add(this->TBAltura);
		  this->tabPage2->Controls->Add(this->label3);
		  this->tabPage2->Controls->Add(this->TBLarguraMaxima);
		  this->tabPage2->Controls->Add(this->label2);
		  this->tabPage2->Controls->Add(this->listBox1);
		  this->tabPage2->Controls->Add(this->TBNome);
		  this->tabPage2->Controls->Add(this->label1);
		  this->tabPage2->Controls->Add(this->listBox2);
		  this->tabPage2->Location = System::Drawing::Point(4, 22);
		  this->tabPage2->Name = L"tabPage2";
		  this->tabPage2->Padding = System::Windows::Forms::Padding(3);
		  this->tabPage2->Size = System::Drawing::Size(1062, 709);
		  this->tabPage2->TabIndex = 1;
		  this->tabPage2->Text = L"Desenho";
		  this->tabPage2->UseVisualStyleBackColor = true;
		  // 
		  // TBTempo
		  // 
		  this->TBTempo->BackColor = System::Drawing::SystemColors::Info;
		  this->TBTempo->Enabled = false;
		  this->TBTempo->Location = System::Drawing::Point(722, 6);
		  this->TBTempo->Name = L"TBTempo";
		  this->TBTempo->Size = System::Drawing::Size(174, 20);
		  this->TBTempo->TabIndex = 26;
		  // 
		  // label12
		  // 
		  this->label12->AutoSize = true;
		  this->label12->Location = System::Drawing::Point(654, 9);
		  this->label12->Name = L"label12";
		  this->label12->Size = System::Drawing::Size(62, 13);
		  this->label12->TabIndex = 25;
		  this->label12->Text = L"Tempo (ms)";
		  // 
		  // BtnAddSelectedAVL
		  // 
		  this->BtnAddSelectedAVL->Location = System::Drawing::Point(10, 494);
		  this->BtnAddSelectedAVL->Name = L"BtnAddSelectedAVL";
		  this->BtnAddSelectedAVL->Size = System::Drawing::Size(75, 23);
		  this->BtnAddSelectedAVL->TabIndex = 24;
		  this->BtnAddSelectedAVL->Text = L"Add (AVL)";
		  this->BtnAddSelectedAVL->UseVisualStyleBackColor = true;
		  this->BtnAddSelectedAVL->Click += gcnew System::EventHandler(this, &Form1::BtnAddSelectedAVL_Click);
		  // 
		  // CBDelOnSelect
		  // 
		  this->CBDelOnSelect->AutoSize = true;
		  this->CBDelOnSelect->Location = System::Drawing::Point(8, 409);
		  this->CBDelOnSelect->Name = L"CBDelOnSelect";
		  this->CBDelOnSelect->Size = System::Drawing::Size(77, 17);
		  this->CBDelOnSelect->TabIndex = 23;
		  this->CBDelOnSelect->Text = L"DelonClick";
		  this->CBDelOnSelect->UseVisualStyleBackColor = true;
		  // 
		  // BtnAddSelected
		  // 
		  this->BtnAddSelected->Location = System::Drawing::Point(9, 465);
		  this->BtnAddSelected->Name = L"BtnAddSelected";
		  this->BtnAddSelected->Size = System::Drawing::Size(75, 23);
		  this->BtnAddSelected->TabIndex = 22;
		  this->BtnAddSelected->Text = L"Add (directo)";
		  this->BtnAddSelected->UseVisualStyleBackColor = true;
		  this->BtnAddSelected->Click += gcnew System::EventHandler(this, &Form1::BtnAddSelected_Click);
		  // 
		  // CBOrdena
		  // 
		  this->CBOrdena->AutoSize = true;
		  this->CBOrdena->Location = System::Drawing::Point(8, 427);
		  this->CBOrdena->Name = L"CBOrdena";
		  this->CBOrdena->Size = System::Drawing::Size(61, 17);
		  this->CBOrdena->TabIndex = 21;
		  this->CBOrdena->Text = L"Ordena";
		  this->CBOrdena->UseVisualStyleBackColor = true;
		  this->CBOrdena->CheckedChanged += gcnew System::EventHandler(this, &Form1::CBOrdena_CheckedChanged);
		  // 
		  // CBAddonClick
		  // 
		  this->CBAddonClick->AutoSize = true;
		  this->CBAddonClick->Location = System::Drawing::Point(8, 394);
		  this->CBAddonClick->Name = L"CBAddonClick";
		  this->CBAddonClick->Size = System::Drawing::Size(80, 17);
		  this->CBAddonClick->TabIndex = 20;
		  this->CBAddonClick->Text = L"AddonClick";
		  this->CBAddonClick->UseVisualStyleBackColor = true;
		  this->CBAddonClick->CheckedChanged += gcnew System::EventHandler(this, &Form1::CBAddonClick_CheckedChanged);
		  // 
		  // Btn1a15
		  // 
		  this->Btn1a15->Location = System::Drawing::Point(9, 525);
		  this->Btn1a15->Name = L"Btn1a15";
		  this->Btn1a15->Size = System::Drawing::Size(75, 23);
		  this->Btn1a15->TabIndex = 19;
		  this->Btn1a15->Text = L"1 a 15";
		  this->Btn1a15->UseVisualStyleBackColor = true;
		  this->Btn1a15->Click += gcnew System::EventHandler(this, &Form1::Btn1a15_Click);
		  // 
		  // TBTotalFolhas
		  // 
		  this->TBTotalFolhas->BackColor = System::Drawing::SystemColors::Info;
		  this->TBTotalFolhas->Enabled = false;
		  this->TBTotalFolhas->Location = System::Drawing::Point(594, 5);
		  this->TBTotalFolhas->Name = L"TBTotalFolhas";
		  this->TBTotalFolhas->Size = System::Drawing::Size(45, 20);
		  this->TBTotalFolhas->TabIndex = 18;
		  // 
		  // label5
		  // 
		  this->label5->AutoSize = true;
		  this->label5->Location = System::Drawing::Point(539, 8);
		  this->label5->Name = L"label5";
		  this->label5->Size = System::Drawing::Size(49, 13);
		  this->label5->TabIndex = 17;
		  this->label5->Text = L"N.Folhas";
		  // 
		  // TBTotalNos
		  // 
		  this->TBTotalNos->BackColor = System::Drawing::SystemColors::Info;
		  this->TBTotalNos->Enabled = false;
		  this->TBTotalNos->Location = System::Drawing::Point(475, 6);
		  this->TBTotalNos->Name = L"TBTotalNos";
		  this->TBTotalNos->Size = System::Drawing::Size(49, 20);
		  this->TBTotalNos->TabIndex = 16;
		  // 
		  // label4
		  // 
		  this->label4->AutoSize = true;
		  this->label4->Location = System::Drawing::Point(434, 9);
		  this->label4->Name = L"label4";
		  this->label4->Size = System::Drawing::Size(36, 13);
		  this->label4->TabIndex = 15;
		  this->label4->Text = L"T.NÛs";
		  // 
		  // TBAltura
		  // 
		  this->TBAltura->BackColor = System::Drawing::SystemColors::Info;
		  this->TBAltura->Enabled = false;
		  this->TBAltura->Location = System::Drawing::Point(368, 6);
		  this->TBAltura->Name = L"TBAltura";
		  this->TBAltura->Size = System::Drawing::Size(47, 20);
		  this->TBAltura->TabIndex = 14;
		  // 
		  // label3
		  // 
		  this->label3->AutoSize = true;
		  this->label3->Location = System::Drawing::Point(327, 9);
		  this->label3->Name = L"label3";
		  this->label3->Size = System::Drawing::Size(34, 13);
		  this->label3->TabIndex = 13;
		  this->label3->Text = L"Altura";
		  // 
		  // TBLarguraMaxima
		  // 
		  this->TBLarguraMaxima->BackColor = System::Drawing::SystemColors::Info;
		  this->TBLarguraMaxima->Enabled = false;
		  this->TBLarguraMaxima->Location = System::Drawing::Point(282, 5);
		  this->TBLarguraMaxima->Name = L"TBLarguraMaxima";
		  this->TBLarguraMaxima->Size = System::Drawing::Size(33, 20);
		  this->TBLarguraMaxima->TabIndex = 12;
		  // 
		  // label2
		  // 
		  this->label2->AutoSize = true;
		  this->label2->Location = System::Drawing::Point(210, 9);
		  this->label2->Name = L"label2";
		  this->label2->Size = System::Drawing::Size(66, 13);
		  this->label2->TabIndex = 11;
		  this->label2->Text = L"Largura.M·x";
		  // 
		  // listBox1
		  // 
		  this->listBox1->FormattingEnabled = true;
		  this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(27) {L"Aquiles", L"Beethoven", L"Cervantes", L"Dirac", 
			L"Elias", L"Fibonacci", L"Galileu", L"Homero", L"Isaac", L"Jules", L"Kelvin", L"Laplace", L"Moore", L"Mozart", L"Murphy", L"Nobel", 
			L"Ortega", L"Parkinson", L"Pascal", L"Pompeu", L"Quixote", L"Riemann", L"Ritchie", L"Rudolfo", L"Salazar", L"Strauss", L"Stroustup"});
		  this->listBox1->Location = System::Drawing::Point(8, 37);
		  this->listBox1->Name = L"listBox1";
		  this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
		  this->listBox1->Size = System::Drawing::Size(77, 355);
		  this->listBox1->TabIndex = 10;
		  this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
		  // 
		  // TBNome
		  // 
		  this->TBNome->Location = System::Drawing::Point(91, 6);
		  this->TBNome->Name = L"TBNome";
		  this->TBNome->Size = System::Drawing::Size(103, 20);
		  this->TBNome->TabIndex = 9;
		  this->TBNome->Enter += gcnew System::EventHandler(this, &Form1::TBNome_Enter);
		  this->TBNome->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::TBNome_KeyDown);
		  // 
		  // label1
		  // 
		  this->label1->AutoSize = true;
		  this->label1->Location = System::Drawing::Point(50, 9);
		  this->label1->Name = L"label1";
		  this->label1->Size = System::Drawing::Size(35, 13);
		  this->label1->TabIndex = 8;
		  this->label1->Text = L"Nome";
		  // 
		  // listBox2
		  // 
		  this->listBox2->FormattingEnabled = true;
		  this->listBox2->Location = System::Drawing::Point(91, 37);
		  this->listBox2->Name = L"listBox2";
		  this->listBox2->Size = System::Drawing::Size(944, 693);
		  this->listBox2->TabIndex = 7;
		  // 
		  // tabPage1
		  // 
		  this->tabPage1->Controls->Add(this->groupBox5);
		  this->tabPage1->Controls->Add(this->groupBox4);
		  this->tabPage1->Controls->Add(this->groupBox3);
		  this->tabPage1->Controls->Add(this->groupBox2);
		  this->tabPage1->Controls->Add(this->groupBox1);
		  this->tabPage1->Controls->Add(this->button3);
		  this->tabPage1->Location = System::Drawing::Point(4, 22);
		  this->tabPage1->Name = L"tabPage1";
		  this->tabPage1->Padding = System::Windows::Forms::Padding(3);
		  this->tabPage1->Size = System::Drawing::Size(1062, 709);
		  this->tabPage1->TabIndex = 0;
		  this->tabPage1->Text = L"Dados";
		  this->tabPage1->UseVisualStyleBackColor = true;
		  // 
		  // groupBox5
		  // 
		  this->groupBox5->Controls->Add(this->BtnCorFundo);
		  this->groupBox5->Controls->Add(this->BtnCorTexto);
		  this->groupBox5->Controls->Add(this->TBCorExemplo);
		  this->groupBox5->Location = System::Drawing::Point(8, 107);
		  this->groupBox5->Name = L"groupBox5";
		  this->groupBox5->Size = System::Drawing::Size(140, 82);
		  this->groupBox5->TabIndex = 28;
		  this->groupBox5->TabStop = false;
		  this->groupBox5->Text = L"Cor";
		  // 
		  // BtnCorFundo
		  // 
		  this->BtnCorFundo->Location = System::Drawing::Point(6, 53);
		  this->BtnCorFundo->Name = L"BtnCorFundo";
		  this->BtnCorFundo->Size = System::Drawing::Size(57, 23);
		  this->BtnCorFundo->TabIndex = 27;
		  this->BtnCorFundo->Text = L"Fundo";
		  this->BtnCorFundo->UseVisualStyleBackColor = true;
		  // 
		  // BtnCorTexto
		  // 
		  this->BtnCorTexto->Location = System::Drawing::Point(6, 22);
		  this->BtnCorTexto->Name = L"BtnCorTexto";
		  this->BtnCorTexto->Size = System::Drawing::Size(57, 23);
		  this->BtnCorTexto->TabIndex = 26;
		  this->BtnCorTexto->Text = L"Texto";
		  this->BtnCorTexto->UseVisualStyleBackColor = true;
		  this->BtnCorTexto->Click += gcnew System::EventHandler(this, &Form1::BtnCorTexto_Click);
		  // 
		  // TBCorExemplo
		  // 
		  this->TBCorExemplo->BackColor = System::Drawing::SystemColors::ButtonFace;
		  this->TBCorExemplo->Location = System::Drawing::Point(80, 35);
		  this->TBCorExemplo->Name = L"TBCorExemplo";
		  this->TBCorExemplo->Size = System::Drawing::Size(51, 20);
		  this->TBCorExemplo->TabIndex = 24;
		  this->TBCorExemplo->Text = L"exemplo";
		  // 
		  // groupBox4
		  // 
		  this->groupBox4->Controls->Add(this->CBUtilizaAlturaDesenho);
		  this->groupBox4->Controls->Add(this->TBAlturaArvoreDesenho);
		  this->groupBox4->Controls->Add(this->label10);
		  this->groupBox4->Controls->Add(this->TBDifNivel);
		  this->groupBox4->Controls->Add(this->label11);
		  this->groupBox4->Location = System::Drawing::Point(304, 19);
		  this->groupBox4->Name = L"groupBox4";
		  this->groupBox4->Size = System::Drawing::Size(154, 82);
		  this->groupBox4->TabIndex = 27;
		  this->groupBox4->TabStop = false;
		  this->groupBox4->Text = L"Linhas";
		  // 
		  // CBUtilizaAlturaDesenho
		  // 
		  this->CBUtilizaAlturaDesenho->AutoSize = true;
		  this->CBUtilizaAlturaDesenho->Location = System::Drawing::Point(101, 50);
		  this->CBUtilizaAlturaDesenho->Name = L"CBUtilizaAlturaDesenho";
		  this->CBUtilizaAlturaDesenho->Size = System::Drawing::Size(54, 17);
		  this->CBUtilizaAlturaDesenho->TabIndex = 27;
		  this->CBUtilizaAlturaDesenho->Text = L"Utiliza";
		  this->CBUtilizaAlturaDesenho->UseVisualStyleBackColor = true;
		  // 
		  // TBAlturaArvoreDesenho
		  // 
		  this->TBAlturaArvoreDesenho->BackColor = System::Drawing::SystemColors::ButtonFace;
		  this->TBAlturaArvoreDesenho->Location = System::Drawing::Point(61, 47);
		  this->TBAlturaArvoreDesenho->Name = L"TBAlturaArvoreDesenho";
		  this->TBAlturaArvoreDesenho->Size = System::Drawing::Size(33, 20);
		  this->TBAlturaArvoreDesenho->TabIndex = 26;
		  this->TBAlturaArvoreDesenho->Text = L"4";
		  // 
		  // label10
		  // 
		  this->label10->AutoSize = true;
		  this->label10->Location = System::Drawing::Point(6, 47);
		  this->label10->Name = L"label10";
		  this->label10->Size = System::Drawing::Size(34, 13);
		  this->label10->TabIndex = 25;
		  this->label10->Text = L"Altura";
		  // 
		  // TBDifNivel
		  // 
		  this->TBDifNivel->BackColor = System::Drawing::SystemColors::ButtonFace;
		  this->TBDifNivel->Location = System::Drawing::Point(61, 21);
		  this->TBDifNivel->Name = L"TBDifNivel";
		  this->TBDifNivel->Size = System::Drawing::Size(33, 20);
		  this->TBDifNivel->TabIndex = 24;
		  this->TBDifNivel->Text = L"2";
		  // 
		  // label11
		  // 
		  this->label11->AutoSize = true;
		  this->label11->Location = System::Drawing::Point(6, 25);
		  this->label11->Name = L"label11";
		  this->label11->Size = System::Drawing::Size(49, 13);
		  this->label11->TabIndex = 23;
		  this->label11->Text = L"Dif.NÌvel";
		  // 
		  // groupBox3
		  // 
		  this->groupBox3->Controls->Add(this->TBCentroY);
		  this->groupBox3->Controls->Add(this->label8);
		  this->groupBox3->Controls->Add(this->TBCentroX);
		  this->groupBox3->Controls->Add(this->label9);
		  this->groupBox3->Location = System::Drawing::Point(224, 19);
		  this->groupBox3->Name = L"groupBox3";
		  this->groupBox3->Size = System::Drawing::Size(74, 82);
		  this->groupBox3->TabIndex = 27;
		  this->groupBox3->TabStop = false;
		  this->groupBox3->Text = L"Centro";
		  // 
		  // TBCentroY
		  // 
		  this->TBCentroY->BackColor = System::Drawing::SystemColors::ButtonFace;
		  this->TBCentroY->Location = System::Drawing::Point(26, 49);
		  this->TBCentroY->Name = L"TBCentroY";
		  this->TBCentroY->Size = System::Drawing::Size(33, 20);
		  this->TBCentroY->TabIndex = 26;
		  this->TBCentroY->Text = L"2";
		  // 
		  // label8
		  // 
		  this->label8->AutoSize = true;
		  this->label8->Location = System::Drawing::Point(6, 47);
		  this->label8->Name = L"label8";
		  this->label8->Size = System::Drawing::Size(14, 13);
		  this->label8->TabIndex = 25;
		  this->label8->Text = L"Y";
		  // 
		  // TBCentroX
		  // 
		  this->TBCentroX->BackColor = System::Drawing::SystemColors::ButtonFace;
		  this->TBCentroX->Location = System::Drawing::Point(26, 24);
		  this->TBCentroX->Name = L"TBCentroX";
		  this->TBCentroX->Size = System::Drawing::Size(33, 20);
		  this->TBCentroX->TabIndex = 24;
		  this->TBCentroX->Text = L"472";
		  // 
		  // label9
		  // 
		  this->label9->AutoSize = true;
		  this->label9->Location = System::Drawing::Point(6, 25);
		  this->label9->Name = L"label9";
		  this->label9->Size = System::Drawing::Size(14, 13);
		  this->label9->TabIndex = 23;
		  this->label9->Text = L"X";
		  // 
		  // groupBox2
		  // 
		  this->groupBox2->Controls->Add(this->RBInformacaoVisualizacao);
		  this->groupBox2->Controls->Add(this->RBInformacaoPesquisa);
		  this->groupBox2->Location = System::Drawing::Point(110, 19);
		  this->groupBox2->Name = L"groupBox2";
		  this->groupBox2->Size = System::Drawing::Size(108, 82);
		  this->groupBox2->TabIndex = 24;
		  this->groupBox2->TabStop = false;
		  this->groupBox2->Text = L"InformaÁ„o";
		  this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
		  // 
		  // RBInformacaoVisualizacao
		  // 
		  this->RBInformacaoVisualizacao->AutoSize = true;
		  this->RBInformacaoVisualizacao->Checked = true;
		  this->RBInformacaoVisualizacao->Location = System::Drawing::Point(16, 50);
		  this->RBInformacaoVisualizacao->Name = L"RBInformacaoVisualizacao";
		  this->RBInformacaoVisualizacao->Size = System::Drawing::Size(84, 17);
		  this->RBInformacaoVisualizacao->TabIndex = 1;
		  this->RBInformacaoVisualizacao->TabStop = true;
		  this->RBInformacaoVisualizacao->Text = L"VisualizaÁ„o";
		  this->RBInformacaoVisualizacao->UseVisualStyleBackColor = true;
		  // 
		  // RBInformacaoPesquisa
		  // 
		  this->RBInformacaoPesquisa->AutoSize = true;
		  this->RBInformacaoPesquisa->Location = System::Drawing::Point(16, 24);
		  this->RBInformacaoPesquisa->Name = L"RBInformacaoPesquisa";
		  this->RBInformacaoPesquisa->Size = System::Drawing::Size(68, 17);
		  this->RBInformacaoPesquisa->TabIndex = 0;
		  this->RBInformacaoPesquisa->Text = L"Pesquisa";
		  this->RBInformacaoPesquisa->UseVisualStyleBackColor = true;
		  // 
		  // groupBox1
		  // 
		  this->groupBox1->Controls->Add(this->TBAlturaCaixa);
		  this->groupBox1->Controls->Add(this->label6);
		  this->groupBox1->Controls->Add(this->TBLarguraCaixa);
		  this->groupBox1->Controls->Add(this->label7);
		  this->groupBox1->Location = System::Drawing::Point(8, 19);
		  this->groupBox1->Name = L"groupBox1";
		  this->groupBox1->Size = System::Drawing::Size(96, 82);
		  this->groupBox1->TabIndex = 23;
		  this->groupBox1->TabStop = false;
		  this->groupBox1->Text = L"Caixa";
		  // 
		  // TBAlturaCaixa
		  // 
		  this->TBAlturaCaixa->BackColor = System::Drawing::SystemColors::ButtonFace;
		  this->TBAlturaCaixa->Location = System::Drawing::Point(55, 47);
		  this->TBAlturaCaixa->Name = L"TBAlturaCaixa";
		  this->TBAlturaCaixa->Size = System::Drawing::Size(33, 20);
		  this->TBAlturaCaixa->TabIndex = 26;
		  this->TBAlturaCaixa->Text = L"30";
		  // 
		  // label6
		  // 
		  this->label6->AutoSize = true;
		  this->label6->Location = System::Drawing::Point(6, 47);
		  this->label6->Name = L"label6";
		  this->label6->Size = System::Drawing::Size(34, 13);
		  this->label6->TabIndex = 25;
		  this->label6->Text = L"Altura";
		  // 
		  // TBLarguraCaixa
		  // 
		  this->TBLarguraCaixa->BackColor = System::Drawing::SystemColors::ButtonFace;
		  this->TBLarguraCaixa->Location = System::Drawing::Point(55, 22);
		  this->TBLarguraCaixa->Name = L"TBLarguraCaixa";
		  this->TBLarguraCaixa->Size = System::Drawing::Size(33, 20);
		  this->TBLarguraCaixa->TabIndex = 24;
		  this->TBLarguraCaixa->Text = L"54";
		  // 
		  // label7
		  // 
		  this->label7->AutoSize = true;
		  this->label7->Location = System::Drawing::Point(6, 25);
		  this->label7->Name = L"label7";
		  this->label7->Size = System::Drawing::Size(43, 13);
		  this->label7->TabIndex = 23;
		  this->label7->Text = L"Largura";
		  // 
		  // button3
		  // 
		  this->button3->Location = System::Drawing::Point(511, 6);
		  this->button3->Name = L"button3";
		  this->button3->Size = System::Drawing::Size(127, 23);
		  this->button3->TabIndex = 4;
		  this->button3->Text = L"Listar";
		  this->button3->UseVisualStyleBackColor = true;
		  this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
		  // 
		  // toolStrip1
		  // 
		  this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(41) {this->toolStripButton1, 
			this->toolStripButton2, this->toolStripButton3, this->toolStripButton8, this->toolStripButton5, this->toolStripButton4, this->toolStripButton17, 
			this->toolStripButton6, this->toolStripButton7, this->toolStripSeparator1, this->toolStripLabel3, this->toolStripButton9, this->toolStripButton11, 
			this->BtnMarcaInOrder, this->toolStripButton10, this->toolStripSeparator5, this->toolStripLabel2, this->BtnTravessiaLarguraED1N, 
			this->BtnTravessiaLarguraDE1N, this->BtnTravessiaLarguraEDN1, this->BtnTravessiaLarguraDEN1, this->toolStripSeparator4, this->BtnMarcaHeight, 
			this->toolStripSeparator2, this->BtnZoomMais, this->BtnZoomMenos, this->toolStripSeparator3, this->toolStripLabel1, this->BtnInsert, 
			this->BtnDelete, this->toolStripSeparator6, this->toolStripLabel4, this->toolStripButton14, this->toolStripButton15, this->toolStripSeparator7, 
			this->toolStripLabel5, this->toolStripButton12, this->toolStripButton13, this->toolStripButton16, this->BtnEliminaLista, this->CBSimplesDupla});
		  this->toolStrip1->Location = System::Drawing::Point(0, 24);
		  this->toolStrip1->Name = L"toolStrip1";
		  this->toolStrip1->Size = System::Drawing::Size(1070, 27);
		  this->toolStrip1->TabIndex = 7;
		  this->toolStrip1->Text = L"toolStrip1";
		  // 
		  // toolStripButton1
		  // 
		  this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
		  this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton1->Name = L"toolStripButton1";
		  this->toolStripButton1->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton1->Text = L"Importar dados";
		  this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
		  // 
		  // toolStripButton2
		  // 
		  this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
		  this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton2->Name = L"toolStripButton2";
		  this->toolStripButton2->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton2->Text = L"Inserir";
		  this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::toolStripButton2_Click);
		  // 
		  // toolStripButton3
		  // 
		  this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton3.Image")));
		  this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton3->Name = L"toolStripButton3";
		  this->toolStripButton3->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton3->Text = L"Desenhar ·rvore";
		  this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::toolStripButton3_Click);
		  // 
		  // toolStripButton8
		  // 
		  this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton8.Image")));
		  this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton8->Name = L"toolStripButton8";
		  this->toolStripButton8->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton8->Text = L"toolStripButton8";
		  this->toolStripButton8->Click += gcnew System::EventHandler(this, &Form1::toolStripButton8_Click);
		  // 
		  // toolStripButton5
		  // 
		  this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton5.Image")));
		  this->toolStripButton5->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
		  this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton5->Name = L"toolStripButton5";
		  this->toolStripButton5->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton5->Text = L"Eliminar substituiÁ„o";
		  this->toolStripButton5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
		  this->toolStripButton5->Click += gcnew System::EventHandler(this, &Form1::toolStripButton5_Click);
		  // 
		  // toolStripButton4
		  // 
		  this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton4.Image")));
		  this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton4->Name = L"toolStripButton4";
		  this->toolStripButton4->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton4->Text = L"HTML: ¡rvore";
		  this->toolStripButton4->Click += gcnew System::EventHandler(this, &Form1::toolStripButton4_Click);
		  // 
		  // toolStripButton17
		  // 
		  this->toolStripButton17->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton17.Image")));
		  this->toolStripButton17->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton17->Name = L"toolStripButton17";
		  this->toolStripButton17->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton17->Text = L"HTML: Lista";
		  this->toolStripButton17->Click += gcnew System::EventHandler(this, &Form1::toolStripButton17_Click);
		  // 
		  // toolStripButton6
		  // 
		  this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton6.Image")));
		  this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton6->MergeAction = System::Windows::Forms::MergeAction::Replace;
		  this->toolStripButton6->Name = L"toolStripButton6";
		  this->toolStripButton6->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton6->Text = L"Eliminar directo";
		  this->toolStripButton6->TextAlign = System::Drawing::ContentAlignment::BottomRight;
		  this->toolStripButton6->Click += gcnew System::EventHandler(this, &Form1::toolStripButton6_Click);
		  // 
		  // toolStripButton7
		  // 
		  this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton7.Image")));
		  this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton7->Name = L"toolStripButton7";
		  this->toolStripButton7->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton7->Text = L"Elimina ·rvore";
		  this->toolStripButton7->Click += gcnew System::EventHandler(this, &Form1::toolStripButton7_Click);
		  // 
		  // toolStripSeparator1
		  // 
		  this->toolStripSeparator1->Margin = System::Windows::Forms::Padding(5, 0, 0, 0);
		  this->toolStripSeparator1->Name = L"toolStripSeparator1";
		  this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
		  // 
		  // toolStripLabel3
		  // 
		  this->toolStripLabel3->Name = L"toolStripLabel3";
		  this->toolStripLabel3->Size = System::Drawing::Size(79, 24);
		  this->toolStripLabel3->Text = L"Profundidade";
		  // 
		  // toolStripButton9
		  // 
		  this->toolStripButton9->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton9.Image")));
		  this->toolStripButton9->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton9->Name = L"toolStripButton9";
		  this->toolStripButton9->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton9->Text = L"Marca prÈ-ordem";
		  this->toolStripButton9->Click += gcnew System::EventHandler(this, &Form1::toolStripButton9_Click);
		  // 
		  // toolStripButton11
		  // 
		  this->toolStripButton11->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton11.Image")));
		  this->toolStripButton11->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton11->Name = L"toolStripButton11";
		  this->toolStripButton11->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton11->Text = L"Marca in ordem (esq, dir)";
		  this->toolStripButton11->Click += gcnew System::EventHandler(this, &Form1::toolStripButton11_Click);
		  // 
		  // BtnMarcaInOrder
		  // 
		  this->BtnMarcaInOrder->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnMarcaInOrder->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnMarcaInOrder.Image")));
		  this->BtnMarcaInOrder->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnMarcaInOrder->Name = L"BtnMarcaInOrder";
		  this->BtnMarcaInOrder->Size = System::Drawing::Size(23, 24);
		  this->BtnMarcaInOrder->Text = L"Marca in ordem (dir, esq)";
		  this->BtnMarcaInOrder->Click += gcnew System::EventHandler(this, &Form1::BtnMarcaInOrder_Click);
		  // 
		  // toolStripButton10
		  // 
		  this->toolStripButton10->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton10.Image")));
		  this->toolStripButton10->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton10->Name = L"toolStripButton10";
		  this->toolStripButton10->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton10->Text = L"Marca pÛs-ordem";
		  this->toolStripButton10->Click += gcnew System::EventHandler(this, &Form1::toolStripButton10_Click);
		  // 
		  // toolStripSeparator5
		  // 
		  this->toolStripSeparator5->Margin = System::Windows::Forms::Padding(5, 0, 0, 0);
		  this->toolStripSeparator5->Name = L"toolStripSeparator5";
		  this->toolStripSeparator5->Size = System::Drawing::Size(6, 27);
		  // 
		  // toolStripLabel2
		  // 
		  this->toolStripLabel2->Name = L"toolStripLabel2";
		  this->toolStripLabel2->Size = System::Drawing::Size(47, 24);
		  this->toolStripLabel2->Text = L"Largura";
		  // 
		  // BtnTravessiaLarguraED1N
		  // 
		  this->BtnTravessiaLarguraED1N->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnTravessiaLarguraED1N->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnTravessiaLarguraED1N.Image")));
		  this->BtnTravessiaLarguraED1N->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnTravessiaLarguraED1N->Name = L"BtnTravessiaLarguraED1N";
		  this->BtnTravessiaLarguraED1N->Size = System::Drawing::Size(23, 24);
		  this->BtnTravessiaLarguraED1N->Text = L"Travessia em Largura (esq, dir) 1..N";
		  this->BtnTravessiaLarguraED1N->Click += gcnew System::EventHandler(this, &Form1::BtnTravessiaLarguraED1N_Click);
		  // 
		  // BtnTravessiaLarguraDE1N
		  // 
		  this->BtnTravessiaLarguraDE1N->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnTravessiaLarguraDE1N->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnTravessiaLarguraDE1N.Image")));
		  this->BtnTravessiaLarguraDE1N->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnTravessiaLarguraDE1N->Name = L"BtnTravessiaLarguraDE1N";
		  this->BtnTravessiaLarguraDE1N->Size = System::Drawing::Size(23, 24);
		  this->BtnTravessiaLarguraDE1N->Text = L"Travessia em Largura (dir, esq) 1..N";
		  this->BtnTravessiaLarguraDE1N->Click += gcnew System::EventHandler(this, &Form1::BtnTravessiaLarguraDE1N_Click);
		  // 
		  // BtnTravessiaLarguraEDN1
		  // 
		  this->BtnTravessiaLarguraEDN1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnTravessiaLarguraEDN1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnTravessiaLarguraEDN1.Image")));
		  this->BtnTravessiaLarguraEDN1->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnTravessiaLarguraEDN1->Name = L"BtnTravessiaLarguraEDN1";
		  this->BtnTravessiaLarguraEDN1->Size = System::Drawing::Size(23, 24);
		  this->BtnTravessiaLarguraEDN1->Text = L"Travessia em Largura (esq, dir) N..1";
		  this->BtnTravessiaLarguraEDN1->Click += gcnew System::EventHandler(this, &Form1::BtnTravessiaLarguraEDN1_Click);
		  // 
		  // BtnTravessiaLarguraDEN1
		  // 
		  this->BtnTravessiaLarguraDEN1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnTravessiaLarguraDEN1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnTravessiaLarguraDEN1.Image")));
		  this->BtnTravessiaLarguraDEN1->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnTravessiaLarguraDEN1->Name = L"BtnTravessiaLarguraDEN1";
		  this->BtnTravessiaLarguraDEN1->Size = System::Drawing::Size(23, 24);
		  this->BtnTravessiaLarguraDEN1->Text = L"Travessia em Largura (dir, esq) N..1";
		  this->BtnTravessiaLarguraDEN1->Click += gcnew System::EventHandler(this, &Form1::BtnTravessiaLarguraDEN1_Click);
		  // 
		  // toolStripSeparator4
		  // 
		  this->toolStripSeparator4->Margin = System::Windows::Forms::Padding(5, 0, 0, 0);
		  this->toolStripSeparator4->Name = L"toolStripSeparator4";
		  this->toolStripSeparator4->Size = System::Drawing::Size(6, 27);
		  // 
		  // BtnMarcaHeight
		  // 
		  this->BtnMarcaHeight->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnMarcaHeight->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnMarcaHeight.Image")));
		  this->BtnMarcaHeight->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnMarcaHeight->Name = L"BtnMarcaHeight";
		  this->BtnMarcaHeight->Size = System::Drawing::Size(23, 24);
		  this->BtnMarcaHeight->Text = L"Marca altura";
		  this->BtnMarcaHeight->Click += gcnew System::EventHandler(this, &Form1::BtnMarcaHeight_Click);
		  // 
		  // toolStripSeparator2
		  // 
		  this->toolStripSeparator2->Margin = System::Windows::Forms::Padding(5, 0, 0, 0);
		  this->toolStripSeparator2->Name = L"toolStripSeparator2";
		  this->toolStripSeparator2->Size = System::Drawing::Size(6, 27);
		  // 
		  // BtnZoomMais
		  // 
		  this->BtnZoomMais->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnZoomMais->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnZoomMais.Image")));
		  this->BtnZoomMais->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnZoomMais->Name = L"BtnZoomMais";
		  this->BtnZoomMais->Size = System::Drawing::Size(23, 24);
		  this->BtnZoomMais->Text = L"toolStripButton11";
		  this->BtnZoomMais->Click += gcnew System::EventHandler(this, &Form1::BtnZoomMais_Click);
		  // 
		  // BtnZoomMenos
		  // 
		  this->BtnZoomMenos->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnZoomMenos->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnZoomMenos.Image")));
		  this->BtnZoomMenos->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnZoomMenos->Name = L"BtnZoomMenos";
		  this->BtnZoomMenos->Size = System::Drawing::Size(23, 24);
		  this->BtnZoomMenos->Text = L"toolStripButton12";
		  this->BtnZoomMenos->Click += gcnew System::EventHandler(this, &Form1::BtnZoomMenos_Click);
		  // 
		  // toolStripSeparator3
		  // 
		  this->toolStripSeparator3->Margin = System::Windows::Forms::Padding(5, 0, 0, 0);
		  this->toolStripSeparator3->Name = L"toolStripSeparator3";
		  this->toolStripSeparator3->Size = System::Drawing::Size(6, 27);
		  // 
		  // toolStripLabel1
		  // 
		  this->toolStripLabel1->Name = L"toolStripLabel1";
		  this->toolStripLabel1->Size = System::Drawing::Size(28, 24);
		  this->toolStripLabel1->Text = L"AVL";
		  // 
		  // BtnInsert
		  // 
		  this->BtnInsert->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnInsert->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnInsert.Image")));
		  this->BtnInsert->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnInsert->Name = L"BtnInsert";
		  this->BtnInsert->Size = System::Drawing::Size(23, 24);
		  this->BtnInsert->Text = L"Inserir AVL";
		  this->BtnInsert->Click += gcnew System::EventHandler(this, &Form1::BtnInsert_Click);
		  // 
		  // BtnDelete
		  // 
		  this->BtnDelete->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnDelete->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnDelete.Image")));
		  this->BtnDelete->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnDelete->Name = L"BtnDelete";
		  this->BtnDelete->Size = System::Drawing::Size(23, 24);
		  this->BtnDelete->Text = L"Elimina AVL";
		  // 
		  // toolStripSeparator6
		  // 
		  this->toolStripSeparator6->Margin = System::Windows::Forms::Padding(5, 0, 0, 0);
		  this->toolStripSeparator6->Name = L"toolStripSeparator6";
		  this->toolStripSeparator6->Size = System::Drawing::Size(6, 27);
		  // 
		  // toolStripLabel4
		  // 
		  this->toolStripLabel4->Name = L"toolStripLabel4";
		  this->toolStripLabel4->Size = System::Drawing::Size(119, 24);
		  this->toolStripLabel4->Text = L"Pesquisa Incremental";
		  // 
		  // toolStripButton14
		  // 
		  this->toolStripButton14->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton14.Image")));
		  this->toolStripButton14->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton14->Name = L"toolStripButton14";
		  this->toolStripButton14->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton14->Text = L"Pesquisa: inÌcia";
		  this->toolStripButton14->Click += gcnew System::EventHandler(this, &Form1::toolStripButton14_Click);
		  // 
		  // toolStripButton15
		  // 
		  this->toolStripButton15->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton15.Image")));
		  this->toolStripButton15->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton15->Name = L"toolStripButton15";
		  this->toolStripButton15->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton15->Text = L"PrÛximo";
		  this->toolStripButton15->Click += gcnew System::EventHandler(this, &Form1::toolStripButton15_Click);
		  // 
		  // toolStripSeparator7
		  // 
		  this->toolStripSeparator7->Margin = System::Windows::Forms::Padding(5, 0, 0, 0);
		  this->toolStripSeparator7->Name = L"toolStripSeparator7";
		  this->toolStripSeparator7->Size = System::Drawing::Size(6, 27);
		  // 
		  // toolStripLabel5
		  // 
		  this->toolStripLabel5->Name = L"toolStripLabel5";
		  this->toolStripLabel5->Size = System::Drawing::Size(31, 24);
		  this->toolStripLabel5->Text = L"Lista";
		  // 
		  // toolStripButton12
		  // 
		  this->toolStripButton12->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton12.Image")));
		  this->toolStripButton12->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton12->Name = L"toolStripButton12";
		  this->toolStripButton12->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton12->Text = L"¡rvore para lista";
		  this->toolStripButton12->Click += gcnew System::EventHandler(this, &Form1::toolStripButton12_Click);
		  // 
		  // toolStripButton13
		  // 
		  this->toolStripButton13->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton13.Image")));
		  this->toolStripButton13->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton13->Name = L"toolStripButton13";
		  this->toolStripButton13->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton13->Text = L"toolStripButton13";
		  this->toolStripButton13->Click += gcnew System::EventHandler(this, &Form1::toolStripButton13_Click);
		  // 
		  // toolStripButton16
		  // 
		  this->toolStripButton16->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->toolStripButton16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton16.Image")));
		  this->toolStripButton16->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->toolStripButton16->Name = L"toolStripButton16";
		  this->toolStripButton16->Size = System::Drawing::Size(23, 24);
		  this->toolStripButton16->Text = L"Desenha lista";
		  this->toolStripButton16->Click += gcnew System::EventHandler(this, &Form1::toolStripButton16_Click);
		  // 
		  // BtnEliminaLista
		  // 
		  this->BtnEliminaLista->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
		  this->BtnEliminaLista->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BtnEliminaLista.Image")));
		  this->BtnEliminaLista->ImageTransparentColor = System::Drawing::Color::Magenta;
		  this->BtnEliminaLista->Name = L"BtnEliminaLista";
		  this->BtnEliminaLista->Size = System::Drawing::Size(23, 24);
		  this->BtnEliminaLista->Text = L"Elimina lista";
		  this->BtnEliminaLista->Click += gcnew System::EventHandler(this, &Form1::BtnEliminaLista_Click);
		  // 
		  // CBSimplesDupla
		  // 
		  this->CBSimplesDupla->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Simples", L"Dupla"});
		  this->CBSimplesDupla->Name = L"CBSimplesDupla";
		  this->CBSimplesDupla->Size = System::Drawing::Size(75, 23);
		  this->CBSimplesDupla->Text = L"Simples";
		  // 
		  // menuStrip1
		  // 
		  this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->ficheiroToolStripMenuItem});
		  this->menuStrip1->Location = System::Drawing::Point(0, 0);
		  this->menuStrip1->Name = L"menuStrip1";
		  this->menuStrip1->Size = System::Drawing::Size(1070, 24);
		  this->menuStrip1->TabIndex = 8;
		  this->menuStrip1->Text = L"menuStrip1";
		  // 
		  // ficheiroToolStripMenuItem
		  // 
		  this->ficheiroToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->lerNomesToolStripMenuItem, 
			this->desordenarNomesToolStripMenuItem, this->importarDadosToolStripMenuItem, this->importarDadosAVLToolStripMenuItem, this->exportarNomesDa¡rvoreHTMLToolStripMenuItem, 
			this->toolStripSeparator8, this->sCUTToolStripMenuItem});
		  this->ficheiroToolStripMenuItem->Name = L"ficheiroToolStripMenuItem";
		  this->ficheiroToolStripMenuItem->Size = System::Drawing::Size(61, 20);
		  this->ficheiroToolStripMenuItem->Text = L"&Ficheiro";
		  // 
		  // lerNomesToolStripMenuItem
		  // 
		  this->lerNomesToolStripMenuItem->Name = L"lerNomesToolStripMenuItem";
		  this->lerNomesToolStripMenuItem->Size = System::Drawing::Size(244, 22);
		  this->lerNomesToolStripMenuItem->Text = L"&Ler nomes";
		  this->lerNomesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::lerNomesToolStripMenuItem_Click);
		  // 
		  // desordenarNomesToolStripMenuItem
		  // 
		  this->desordenarNomesToolStripMenuItem->Name = L"desordenarNomesToolStripMenuItem";
		  this->desordenarNomesToolStripMenuItem->Size = System::Drawing::Size(244, 22);
		  this->desordenarNomesToolStripMenuItem->Text = L"&Desordenar nomes";
		  this->desordenarNomesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::desordenarNomesToolStripMenuItem_Click);
		  // 
		  // importarDadosToolStripMenuItem
		  // 
		  this->importarDadosToolStripMenuItem->Name = L"importarDadosToolStripMenuItem";
		  this->importarDadosToolStripMenuItem->Size = System::Drawing::Size(244, 22);
		  this->importarDadosToolStripMenuItem->Text = L"&Importar dados";
		  this->importarDadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::importarDadosToolStripMenuItem_Click);
		  // 
		  // importarDadosAVLToolStripMenuItem
		  // 
		  this->importarDadosAVLToolStripMenuItem->Name = L"importarDadosAVLToolStripMenuItem";
		  this->importarDadosAVLToolStripMenuItem->Size = System::Drawing::Size(244, 22);
		  this->importarDadosAVLToolStripMenuItem->Text = L"I&mportar dados AVL";
		  this->importarDadosAVLToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::importarDadosAVLToolStripMenuItem_Click);
		  // 
		  // exportarNomesDa¡rvoreHTMLToolStripMenuItem
		  // 
		  this->exportarNomesDa¡rvoreHTMLToolStripMenuItem->Name = L"exportarNomesDa¡rvoreHTMLToolStripMenuItem";
		  this->exportarNomesDa¡rvoreHTMLToolStripMenuItem->Size = System::Drawing::Size(244, 22);
		  this->exportarNomesDa¡rvoreHTMLToolStripMenuItem->Text = L"Exportar nomes da ·rvore HTML";
		  this->exportarNomesDa¡rvoreHTMLToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exportarNomesDa¡rvoreHTMLToolStripMenuItem_Click);
		  // 
		  // toolStripSeparator8
		  // 
		  this->toolStripSeparator8->Name = L"toolStripSeparator8";
		  this->toolStripSeparator8->Size = System::Drawing::Size(241, 6);
		  // 
		  // sCUTToolStripMenuItem
		  // 
		  this->sCUTToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->importarClientesListaToolStripMenuItem});
		  this->sCUTToolStripMenuItem->Name = L"sCUTToolStripMenuItem";
		  this->sCUTToolStripMenuItem->Size = System::Drawing::Size(244, 22);
		  this->sCUTToolStripMenuItem->Text = L"SCUT";
		  // 
		  // importarClientesListaToolStripMenuItem
		  // 
		  this->importarClientesListaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->listaToolStripMenuItem, 
			this->·rvoreToolStripMenuItem, this->·rvoreToolStripMenuItem1});
		  this->importarClientesListaToolStripMenuItem->Name = L"importarClientesListaToolStripMenuItem";
		  this->importarClientesListaToolStripMenuItem->Size = System::Drawing::Size(163, 22);
		  this->importarClientesListaToolStripMenuItem->Text = L"Importar clientes";
		  // 
		  // listaToolStripMenuItem
		  // 
		  this->listaToolStripMenuItem->Name = L"listaToolStripMenuItem";
		  this->listaToolStripMenuItem->Size = System::Drawing::Size(133, 22);
		  this->listaToolStripMenuItem->Text = L"&Lista";
		  this->listaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::listaToolStripMenuItem_Click);
		  // 
		  // ·rvoreToolStripMenuItem
		  // 
		  this->·rvoreToolStripMenuItem->Name = L"·rvoreToolStripMenuItem";
		  this->·rvoreToolStripMenuItem->Size = System::Drawing::Size(133, 22);
		  this->·rvoreToolStripMenuItem->Text = L"&¡rvore AVL";
		  this->·rvoreToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::·rvoreToolStripMenuItem_Click);
		  // 
		  // ·rvoreToolStripMenuItem1
		  // 
		  this->·rvoreToolStripMenuItem1->Name = L"·rvoreToolStripMenuItem1";
		  this->·rvoreToolStripMenuItem1->Size = System::Drawing::Size(133, 22);
		  this->·rvoreToolStripMenuItem1->Text = L"&¡rvore";
		  this->·rvoreToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::·rvoreToolStripMenuItem1_Click);
		  // 
		  // openFileDialog1
		  // 
		  this->openFileDialog1->FileName = L"openFileDialog1";
		  // 
		  // Form1
		  // 
		  this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		  this->ClientSize = System::Drawing::Size(1070, 787);
		  this->Controls->Add(this->toolStrip1);
		  this->Controls->Add(this->menuStrip1);
		  this->Controls->Add(this->tabControl1);
		  this->Name = L"Form1";
		  this->Text = L"¡rvores Bin·rias - VisualizaÁ„o";
		  this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
		  this->tabControl1->ResumeLayout(false);
		  this->tabPage2->ResumeLayout(false);
		  this->tabPage2->PerformLayout();
		  this->tabPage1->ResumeLayout(false);
		  this->groupBox5->ResumeLayout(false);
		  this->groupBox5->PerformLayout();
		  this->groupBox4->ResumeLayout(false);
		  this->groupBox4->PerformLayout();
		  this->groupBox3->ResumeLayout(false);
		  this->groupBox3->PerformLayout();
		  this->groupBox2->ResumeLayout(false);
		  this->groupBox2->PerformLayout();
		  this->groupBox1->ResumeLayout(false);
		  this->groupBox1->PerformLayout();
		  this->toolStrip1->ResumeLayout(false);
		  this->toolStrip1->PerformLayout();
		  this->menuStrip1->ResumeLayout(false);
		  this->menuStrip1->PerformLayout();
		  this->ResumeLayout(false);
		  this->PerformLayout();

		}
#pragma endregion
    private:

        System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

        }
    private:

        System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

        }
    private:

        System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

        }

        ref class CDadosGrafico {
        public:
            int altura;
            int ix;
            int iy;
            int largura;
            int caixa_proximo;
            int espaco;
            float espessura;
            int padding;
            int ordem;
            int infoExtra;
            int dif_nivel;
            Color cor;
            Pen^ caneta;
            Pen^ canetaAvo;
            Pen^ canetaPai;
            Pen^ canetaPesquisa;
            Pen^ canetaInserir;
            Pen^ canetaEliminar;
            Pen^ canetaExiste;
			Pen^ canetaNaoExiste;
            Brush^ pincel;
            System::Drawing::Font^ fonte;

            CDadosGrafico(int A, int L, int info, int _dif_nivel,
                    Color _cor, System::Drawing::Font^ f, int cp, int espaco, int espessura) {
                largura = L * f->Size / 8.0;
                altura = A * f->Size / 8.0;
                infoExtra = info;
                dif_nivel = _dif_nivel;
                caixa_proximo = cp;
                this->espaco = espaco;
                padding = 1;
                this->espessura = espessura;
                ix = largura + 3;
                iy = altura * 2.0;
                cor = _cor;
                caneta = gcnew Pen(cor, espessura);
                canetaAvo = gcnew Pen(Color::Magenta, espessura);
                canetaPai = gcnew Pen(Color::Magenta, espessura);
                canetaPesquisa = gcnew Pen(Color::Blue, espessura);
                canetaInserir = gcnew Pen(Color::Green, espessura);
                canetaEliminar = gcnew Pen(Color::Red, espessura);
                canetaExiste = gcnew Pen(Color::Green, espessura);
				canetaNaoExiste = gcnew Pen(Color::Red, espessura);
                pincel = Brushes::Black;
                fonte = f;
            }
        };

        void DesenharAux(Graphics^ g, CAlunoArvore *no, CDadosGrafico^ d,
                int x, int y, int xa, int ya, int h, int nivel) {
            if (no) {

                int b, c;
                char xx[50];
                d->ordem++;
                no->getNumero();
                if (no->getDesc() == "!existe")
                    g->DrawRectangle(d->canetaNaoExiste, Rectangle(x, y, d->largura, d->altura));
                else if (no->getDesc() == "existe")
                    g->DrawRectangle(d->canetaExiste, Rectangle(x, y, d->largura, d->altura));
                else if (no->getDesc() == "pai")
                    g->DrawRectangle(d->canetaPai, Rectangle(x, y, d->largura, d->altura));
                else if (no->getDesc() == "novo")
                    g->DrawRectangle(d->canetaInserir, Rectangle(x, y, d->largura, d->altura));
                else if (no->getDesc() == "PI")
                    g->DrawRectangle(d->canetaPesquisa, Rectangle(x, y, d->largura, d->altura));
                else
                    g->DrawRectangle(d->caneta, Rectangle(x, y, d->largura, d->altura));

                if (nivel > 1) {
                    g->DrawLine(d->caneta, xa + d->largura / 2, ya + d->altura, x + d->largura / 2, y);
                }

                if (h > 5) h = 5;
                int h2 = h;
                if (CBUtilizaAlturaDesenho->Checked)
                    h2 = Convert::ToInt32(TBAlturaArvoreDesenho->Text);

                int delta = 1 + ((h2 - nivel) - d->dif_nivel) + d->ix * (pow(2.0, (double) ((h2 - nivel) - d->dif_nivel)));

                String^ s = gcnew String(no->getNome().c_str());
                g->DrawString(s, d->fonte, d->pincel, x + d->padding, y + d->padding);
                s = gcnew String((no->getDesc() + ": ").c_str());

                if (d->infoExtra == 1) // ordem de pesquisa
                    s += gcnew String(itoa(no->getMarca(), xx, 10));
                else
                    s += gcnew String(itoa(no->getMarca(), xx, 10));

                g->DrawString(s, d->fonte, d->pincel, x + d->padding, y + 15 * d->fonte->Size / 8.0); //+ 15

                DesenharAux(g, no->getEsquerda(), d, x - delta, y + d->iy, x, y, h, nivel + 1);
                DesenharAux(g, no->getDireita(), d, x + delta, y + d->iy, x, y, h, nivel + 1);
            }
        }

        void Desenhar(Graphics^ g, CArvoreAluno *a, int x, int y) {
            g->Clear(Color::White);
            int L = Int32::Parse(TBLarguraCaixa->Text);
            int A = Int32::Parse(TBAlturaCaixa->Text);
            int dif_nivel = Convert::ToInt32(TBDifNivel->Text);
            //tmTelefone->Text = Convert::ToString(n + 1);

            int infoExtra;
            if (RBInformacaoPesquisa->Checked)
                infoExtra = 1; // ordem de pesquisa
            else {
                infoExtra = 2; // ordem de visualizaÁ„o
                //arvore->MarcaPreOrdem();
            }
            System::Drawing::Font^ fonte = gcnew System::Drawing::Font(
                    fontDialog1->Font->Name, fontDialog1->Font->Size);
            Color cor = fontDialog1->Color;

            CDadosGrafico^ d = gcnew CDadosGrafico(A, L, infoExtra, dif_nivel, cor, fonte, 0, 0, 2);
            int h = arvore->Altura();
            DesenharAux(g, a->getRaiz(), d, x, y, x, y, h, 1);
        }


		void DesenharLista(Graphics^ g, CListaAluno *lista, int xa, int ya, bool dupla) {
            g->Clear(Color::White);
            int L = Int32::Parse(TBLarguraCaixa->Text);
            int A = Int32::Parse(TBAlturaCaixa->Text);

            int infoExtra;
            if (RBInformacaoPesquisa->Checked)
                infoExtra = 1; // ordem de pesquisa
            else {
                infoExtra = 2; // ordem de visualizaÁ„o
                //arvore->MarcaPreOrdem();
            }
            System::Drawing::Font^ fonte = gcnew System::Drawing::Font(
                    fontDialog1->Font->Name, fontDialog1->Font->Size);
            Color cor = fontDialog1->Color;

            CDadosGrafico^ d = gcnew CDadosGrafico(A, L, infoExtra, 0, cor, fonte, 8, 12, 1);
            CAlunoLista *aux = lista->getInicio();
			int x = xa;
			int y = ya;

			// seta inicial
			
			if (dupla) { 
			  x += d->caixa_proximo;
			  g->DrawLine(d->caneta, x-d->caixa_proximo-d->espaco, y+d->altura/4, x-5, y+d->altura/4);
			  int c = x;
			  int b = y+d->altura/4;
			  g->DrawLine(d->caneta, c, b, c-5, b-5);
			  g->DrawLine(d->caneta, c, b, c-5, b+5);
			  g->DrawLine(d->caneta, c-5, b+5, c-5, b-5);
			 
			  while (aux) {
				g->DrawRectangle(d->caneta, Rectangle(x, y, d->caixa_proximo, d->altura));
				g->DrawRectangle(d->caneta, Rectangle(x+d->caixa_proximo, y, d->largura, d->altura));
				g->DrawRectangle(d->caneta, Rectangle(x+d->largura+d->caixa_proximo, y, d->caixa_proximo, d->altura));

				// proximo
				int a = x+d->largura+d->caixa_proximo*3.0/2.0;
				b = y+d->altura/4;
				g->DrawLine(d->caneta, a, b, a+d->espaco+d->caixa_proximo/2-5, b);

				c = a+d->espaco+d->caixa_proximo/2;
				g->DrawLine(d->caneta, c, b, c-5, b-5);
				g->DrawLine(d->caneta, c, b, c-5, b+5);
				g->DrawLine(d->caneta, c-5, b+5, c-5, b-5);

				// anterior
				a = x-d->caixa_proximo*3.0/2.0;
				b = y+(d->altura/4) * 3.0;
				g->DrawLine(d->caneta, a+5, b, a+d->espaco+d->caixa_proximo/2, b);

				c = a + 5;
				g->DrawLine(d->caneta, c, b-5, c, b+5);
				g->DrawLine(d->caneta, c, b-5, c-5, b);
				g->DrawLine(d->caneta, c, b+5, c-5, b);

			                
				String^ s = gcnew String(aux->getNome().c_str());
				g->DrawString(s, d->fonte, d->pincel, x + d->caixa_proximo + d->padding, y + d->padding);
				s = Convert::ToString(aux->getNumero());
				g->DrawString(s, d->fonte, d->pincel, x + d->caixa_proximo + d->padding, y + 15 * d->fonte->Size / 8.0); //+ 15

				x += d->largura + 2 * d->caixa_proximo + d->espaco;
				if (x > 850) {
					x = xa;
					y += d->altura + d->espaco;
				}
				if (y > 500) break;
				aux = aux->getProximo();
			  } 
			} else {
			  g->DrawLine(d->caneta, x-d->caixa_proximo-d->espaco, y+d->altura/2, x-5, y+d->altura/2);
			  int c = x;
			  int b = y+d->altura/2;
			  g->DrawLine(d->caneta, c, b, c-5, b-5);
			  g->DrawLine(d->caneta, c, b, c-5, b+5);
			  g->DrawLine(d->caneta, c-5, b+5, c-5, b-5);
			  while (aux) {
				g->DrawRectangle(d->caneta, Rectangle(x, y, d->largura, d->altura));
				g->DrawRectangle(d->caneta, Rectangle(x+d->largura, y, d->caixa_proximo, d->altura));


				int a = x+d->largura+d->caixa_proximo/2;
				b = y+d->altura/2;
				g->DrawLine(d->caneta, a, b, a+d->espaco+d->caixa_proximo/2-5, b);

				c = a+d->espaco+d->caixa_proximo/2;
				g->DrawLine(d->caneta, c, b, c-5, b-5);
				g->DrawLine(d->caneta, c, b, c-5, b+5);
				g->DrawLine(d->caneta, c-5, b+5, c-5, b-5);
			                
				String^ s = gcnew String(aux->getNome().c_str());
				g->DrawString(s, d->fonte, d->pincel, x + d->padding, y + d->padding);
				s = Convert::ToString(aux->getNumero());
				g->DrawString(s, d->fonte, d->pincel, x + d->padding, y + 15 * d->fonte->Size / 8.0); //+ 15

				x += d->largura + d->caixa_proximo + d->espaco;
				if (x > 850) {
					x = xa;
					y += d->altura + d->espaco;
				}
				if (y > 500) break;
				aux = aux->getProximo();
			  } 
			}

        }

    private:

        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        }
    private:

        System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
            arvore->ImportarNomes("../nomes_siglas_pessoas_lugares_r20.txt", "AB");
        }
    private:

        System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
            int x = Convert::ToInt32(TBCentroX->Text);
            int y = Convert::ToInt32(TBCentroY->Text);

            char s[10];

            TBAltura->Text = gcnew String(Convert::ToString(arvore->Altura()));
            TBLarguraMaxima->Text = gcnew String(itoa(0, s, 10));
            TBTotalNos->Text = gcnew String(itoa(arvore->NumeroNos(), s, 10));
            TBTotalFolhas->Text = gcnew String(itoa(arvore->NumeroFolhas(), s, 10));

            Desenhar(listBox2->CreateGraphics(), arvore, x, y);
        }
    private:

        System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {

            CAluno a;
            a.setNome(StringTostring(TBNome->Text));
            a.setNumero(0);
            if (arvore->Inserir(a))
                TBNome->ForeColor = Color::Green;
            else
                TBNome->ForeColor = Color::Red;

            toolStripButton3_Click(sender, e);

        }
    private:

        System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
            vector<string> *v = arvore->PreOrdemToCStringVector();
            for (unsigned int i = 0; i < v->size(); i++) {
                //String ^s = gcnew String(
                //string s = v[i];
                //listBox1->Items->Add(s);
            }
        }
    private:

        System::Void TBNome_Enter(System::Object^ sender, System::EventArgs^ e) {


        }
    private:

        System::Void TBNome_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
            if ((e->KeyValue == Convert::ToInt32(Keys::Delete))
                    || (e->KeyValue == Convert::ToInt32(Keys::Back)))
                TBNome->ForeColor = Color::Black;

        }
    private:

        System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
            arvore->ExportarNumeroNomeTabelaHTML("r20.html", 'C');

        }
    private:

        System::Void listBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {


        }
    private:
        System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            String^ curItem = listBox1->SelectedItem->ToString();
            TBNome->Text = curItem;
            TBNome->ForeColor = Color::Black;

            if (CBAddonClick->Checked)
                toolStripButton2_Click(sender, e);

            if (CBDelOnSelect->Checked)
                toolStripButton6_Click(sender, e);
        }
    private:
        System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
            string nome = StringTostring(TBNome->Text);
            if (arvore->EliminaSubstituicao(nome))
                TBNome->ForeColor = Color::Green;
            else
                TBNome->ForeColor = Color::Red;
            toolStripButton3_Click(sender, e);
        }
    private:
        System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
            string nome = StringTostring(TBNome->Text);
            if (arvore->EliminaElemento(nome))
                TBNome->ForeColor = Color::Green;
            else
                TBNome->ForeColor = Color::Red;

            toolStripButton3_Click(sender, e);
        }
    private:
        System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
            ifstream f("../nomes_siglas_pessoas_lugares.txt");
            string nome;
            if (!f) {
                return;
            }
            while (getline(f, nome)) {
                listBox1->Items->Add(stringToString(nome));
            }
            f.close();
        }
    private:
        System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
            arvore->EliminarArvore();
            toolStripButton3_Click(sender, e);
        }
    private:
        System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
            arvore->Desmarca();
            toolStripButton3_Click(sender, e);
        }
    private:

        System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
        }
    private:
        System::Void Btn1a15_Click(System::Object^ sender, System::EventArgs^ e) {
            int v[] = {8, 4, 2, 1, 3, 6, 5, 7, 12, 10, 9, 11, 14, 13, 15};
            CAluno a;
            char s[10];
            for (int i = 0; i < 15; i++) {
                sprintf_s(s, "%3i", v[i]);
                a.setNome(s);
                a.setNumero(v[i]);
                arvore->Inserir(a);
            }
            toolStripButton3_Click(sender, e);
        }
    private:
        System::Void toolStripButton9_Click(System::Object^ sender, System::EventArgs^ e) {
            arvore->MarcaPreOrdem();
            toolStripButton3_Click(sender, e);
        }
    private:
        System::Void toolStripButton10_Click(System::Object^ sender, System::EventArgs^ e) {
            arvore->MarcaPosOrdem();
            toolStripButton3_Click(sender, e);
        }
    private:
        System::Void lerNomesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                //System::IO::StreamReader ^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
                //MessageBox::Show(sr->ReadToEnd());
                //sr->Close();

                string nome = StringTostring(openFileDialog1->FileName);
                //arvore->RandomNomes(nome, nome);

                arvore->EliminarArvore();
                ifstream f(nome.c_str());
                if (!f) {
                    return;
                }
                listBox1->Items->Clear();
                while (getline(f, nome)) {
                    listBox1->Items->Add(stringToString(nome));
                }
                f.close();
            }
        }
    private:
        System::Void desordenarNomesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                string nome = StringTostring(openFileDialog1->FileName);
                arvore->RandomNomes(nome, nome + "_r.txt");
            }
        }
    private:
        System::Void CBOrdena_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
            listBox1->Sorted = CBOrdena->Checked;
        }
    private:
        System::Void BtnAddSelected_Click(System::Object^ sender, System::EventArgs^ e) {
            int n = listBox1->SelectedIndices->Count;
            //listBox1->Items->Add(listBox1->SelectedIndices[i].ToString());
            CAluno a;
            for (int i = 0; i < n; i++) {
                int p = listBox1->SelectedIndices[i];
                string nome = StringTostring(listBox1->Items[p]->ToString());
                a.setNome(nome);
                a.setNumero(p);
                arvore->Inserir(a);
            }
            arvore->MarcaPreOrdem();
            toolStripButton3_Click(sender, e);
            //   listBox1.Items.Remove(listBox1.SelectedItems);
            /*      for (int i = 0; i < listBox1.Items.Count; i++)
            {
               if (listBox1.Items[i].Selected)
                 listBox1.Items.Remove(listBox1.Items[i]);
            }*/
        }
    private:

        System::Void exportarNomesDa¡rvoreHTMLToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
            if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                string nome = StringTostring(saveFileDialog1->FileName);
                arvore->ExportarNumeroNomeTabelaHTML(nome, 'C');
            }

        }
    private:

        System::Void BtnCorTexto_Click(System::Object^ sender, System::EventArgs^ e) {


            //fontDialog1->Color = Color::Red;
            fontDialog1->ShowColor = true;
            fontDialog1->ShowDialog();


            TBCorExemplo->ForeColor = fontDialog1->Color;
            TBCorExemplo->Font = fontDialog1->Font;


            arvore->MarcaPreOrdem();
            toolStripButton3_Click(sender, e);


        }
    private:

        System::Void CBAddonClick_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        }
    private:
        System::Void BtnZoomMenos_Click(System::Object^ sender, System::EventArgs^ e) {
            if (fontDialog1->Font->Size - 2 < 0)
                return;
            fontDialog1->Font = gcnew System::Drawing::Font(
                    fontDialog1->Font->Name, fontDialog1->Font->Size - 2);
            arvore->MarcaPreOrdem();
            toolStripButton3_Click(sender, e);
        }
    private:
        System::Void BtnZoomMais_Click(System::Object^ sender, System::EventArgs^ e) {
            fontDialog1->Font = gcnew System::Drawing::Font(
                    fontDialog1->Font->Name, fontDialog1->Font->Size + 2);
            arvore->MarcaPreOrdem();
            toolStripButton3_Click(sender, e);
        }
    private:
       System::Void importarDadosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                string nome = StringTostring(openFileDialog1->FileName);
                //arvore->EliminarArvore();
                arvore->ImportarNomes(nome, "AB");
                toolStripButton3_Click(sender, e);

            }
        }
    private:
        System::Void BtnInsert_Click(System::Object^ sender, System::EventArgs^ e) {
            CAluno a;
            a.setNome(StringTostring(TBNome->Text));
            a.setNumero(0);
            if (arvore->insert(a))
                TBNome->ForeColor = Color::Green;
            else
                TBNome->ForeColor = Color::Red;

            toolStripButton3_Click(sender, e);
        }
    private:
        System::Void importarDadosAVLToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                string nome = StringTostring(openFileDialog1->FileName);
                //arvore->EliminarArvore();
                arvore->ImportarNomes(nome, "AVL");
                toolStripButton3_Click(sender, e);

            }
        }
    private:
        System::Void BtnMarcaHeight_Click(System::Object^ sender, System::EventArgs^ e) {
            arvore->MarcaHeight();
            toolStripButton3_Click(sender, e);
        }
    private:

        System::Void BtnAddSelectedAVL_Click(System::Object^ sender, System::EventArgs^ e) {
            int n = listBox1->SelectedIndices->Count;
            //listBox1->Items->Add(listBox1->SelectedIndices[i].ToString());
            CAluno a;
            for (int i = 0; i < n; i++) {
                int p = listBox1->SelectedIndices[i];
                string nome = StringTostring(listBox1->Items[p]->ToString());
                a.setNome(nome);
                a.setNumero(p);
                arvore->insert(a);
            }
            arvore->MarcaPreOrdem();
            toolStripButton3_Click(sender, e);
        }
    private:
        System::Void BtnMarcaInOrder_Click(System::Object^ sender, System::EventArgs^ e) {
            arvore->MarcaInOrdem2();
            toolStripButton3_Click(sender, e);
        }
    private:
        System::Void toolStripButton11_Click(System::Object^ sender, System::EventArgs^ e) {
            arvore->MarcaInOrdem();
            toolStripButton3_Click(sender, e);
        }
	private: System::Void BtnTravessiaLarguraED1N_Click(System::Object^  sender, System::EventArgs^  e) {
			   arvore->TravessiaLarguraED1N();
			   toolStripButton3_Click(sender, e);
			 }
private: System::Void BtnTravessiaLarguraDE1N_Click(System::Object^  sender, System::EventArgs^  e) {
	      arvore->TravessiaLarguraDE1N();
		   toolStripButton3_Click(sender, e);
		 }
private: System::Void BtnTravessiaLarguraEDN1_Click(System::Object^  sender, System::EventArgs^  e) {
		   	   arvore->TravessiaLarguraEDN1();
			   toolStripButton3_Click(sender, e);
		 }
private: System::Void BtnTravessiaLarguraDEN1_Click(System::Object^  sender, System::EventArgs^  e) {
		   	   arvore->TravessiaLarguraDEN1();
			   toolStripButton3_Click(sender, e);
		 }
private: System::Void toolStripButton14_Click(System::Object^  sender, System::EventArgs^  e) {

		   aux_pesquisa = arvore->getRaiz();
		   aux_ordem = 0;
		   arvore->Desmarca();
		   if (aux_pesquisa) {
			 aux_pesquisa->setMarca(++aux_ordem);
			 aux_pesquisa->setDesc("PI");
		   }
		   toolStripButton3_Click(sender, e);
		 }
private: System::Void toolStripButton15_Click(System::Object^  sender, System::EventArgs^  e) {

		   
		   if (aux_pesquisa) {
			string nome = aux_pesquisa->getNome();
			string nomep = StringTostring(TBNome->Text);

			CAlunoArvore *ant = aux_pesquisa;
		    if (nome == nomep) { /* existe! */
			  aux_pesquisa->setDesc("existe");
			} else if (nomep < nome)
			  aux_pesquisa = aux_pesquisa->getEsquerda();
			else
			  aux_pesquisa = aux_pesquisa->getDireita();
			
			if (aux_pesquisa) { 
			  if (aux_pesquisa->getDesc() != "existe") {
				aux_pesquisa->setMarca(++aux_ordem);
				aux_pesquisa->setDesc("PI");
		      }
			} else {
			  if (ant)
				ant->setDesc("!existe");
			}
			toolStripButton3_Click(sender, e);
		   }
		 }

private: System::Void toolStripButton12_Click(System::Object^  sender, System::EventArgs^  e) {

		  aux_lista = arvore->ToLista();
		  bool x;
		  if (CBSimplesDupla->Text == "Simples")
			x = false;
		  else 
			x = true;
    	  DesenharLista(listBox2->CreateGraphics(), aux_lista, 10, 10, x);

		 }
private: System::Void toolStripButton13_Click(System::Object^  sender, System::EventArgs^  e) {


		   CAluno a;
            a.setNome(StringTostring(TBNome->Text));
            a.setNumero(0);
            if (aux_lista->InserirOrdenado(a))
                TBNome->ForeColor = Color::Green;
            else
                TBNome->ForeColor = Color::Red;
		   toolStripButton16_Click(sender, e);


		 }
private: System::Void toolStripButton16_Click(System::Object^  sender, System::EventArgs^  e) {

		   		  bool x;
		  if (CBSimplesDupla->Text == "Simples")
			x = false;
		  else 
			x = true;

		    DesenharLista(listBox2->CreateGraphics(), aux_lista, 10, 20, x);

		 }
private: System::Void listaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
           
            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                string nome = StringTostring(openFileDialog1->FileName);
                clock_t fim, inicio; 
                float tempo=0.0, tempo2=0.0;
                inicio = clock();
                aux_lista->ImportarCilentesSCUT(nome);
                fim = clock();
                tempo = (fim - inicio) / (float) CLOCKS_PER_SEC;
                TBTempo->Text = Convert::ToString(tempo);
                // toolStripButton16_Click(sender, e);
            }
         }
private: System::Void ·rvoreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                string nome = StringTostring(openFileDialog1->FileName);
                clock_t fim, inicio; 
                float tempo=0.0, tempo2=0.0;
                inicio = clock();
                arvore->ImportarCilentesSCUT(nome, "AVL");
                fim = clock();
                tempo = (fim - inicio) / (float) CLOCKS_PER_SEC;
                TBTempo->Text = Convert::ToString(tempo);
                //toolStripButton3_Click(sender, e);
            }
         }
private: System::Void ·rvoreToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
            if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                string nome = StringTostring(openFileDialog1->FileName);
                clock_t fim, inicio; 
                float tempo=0.0, tempo2=0.0;
                inicio = clock();
                 arvore->ImportarCilentesSCUT(nome, "D");
                fim = clock();
                tempo = (fim - inicio) / (float) CLOCKS_PER_SEC;
                TBTempo->Text = Convert::ToString(tempo);
                //toolStripButton3_Click(sender, e);
            }
         }
private: System::Void BtnEliminaLista_Click(System::Object^  sender, System::EventArgs^  e) {
           aux_lista->EliminaLista();
         }
private: System::Void toolStripButton17_Click(System::Object^  sender, System::EventArgs^  e) {

		     aux_lista->ExportarNumeroNomeTabelaHTML("r20.html");


		 }
};

}

