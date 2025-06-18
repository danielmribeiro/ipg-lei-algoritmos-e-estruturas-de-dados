#pragma once

#include <fstream>
#include <string.h>
using namespace std;
#include "CArvoreAluno.h"

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
    Form1(void) {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //
      arvore = new CArvoreAluno();
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
private: System::Windows::Forms::ToolStripButton^  toolStripButton9;

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
      
      this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
      this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
      this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
      this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
      this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
      this->toolStripButton9 = (gcnew System::Windows::Forms::ToolStripButton());
      this->tabControl1->SuspendLayout();
      this->tabPage2->SuspendLayout();
      this->tabPage1->SuspendLayout();
      this->groupBox4->SuspendLayout();
      this->groupBox3->SuspendLayout();
      this->groupBox2->SuspendLayout();
      this->groupBox1->SuspendLayout();
      this->toolStrip1->SuspendLayout();
      this->SuspendLayout();
      // 
      // tabControl1
      // 
      this->tabControl1->Controls->Add(this->tabPage2);
      this->tabControl1->Controls->Add(this->tabPage1);
      this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
      this->tabControl1->Location = System::Drawing::Point(0, 28);
      this->tabControl1->Name = L"tabControl1";
      this->tabControl1->SelectedIndex = 0;
      this->tabControl1->Size = System::Drawing::Size(1043, 759);
      this->tabControl1->TabIndex = 6;
      // 
      // tabPage2
      // 
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
      this->tabPage2->Size = System::Drawing::Size(1035, 733);
      this->tabPage2->TabIndex = 1;
      this->tabPage2->Text = L"Desenho";
      this->tabPage2->UseVisualStyleBackColor = true;
      // 
      // Btn1a15
      // 
      this->Btn1a15->Location = System::Drawing::Point(9, 399);
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
      this->TBTotalFolhas->Location = System::Drawing::Point(556, 13);
      this->TBTotalFolhas->Name = L"TBTotalFolhas";
      this->TBTotalFolhas->Size = System::Drawing::Size(33, 20);
      this->TBTotalFolhas->TabIndex = 18;
      // 
      // label5
      // 
      this->label5->AutoSize = true;
      this->label5->Location = System::Drawing::Point(501, 16);
      this->label5->Name = L"label5";
      this->label5->Size = System::Drawing::Size(49, 13);
      this->label5->TabIndex = 17;
      this->label5->Text = L"N.Folhas";
      // 
      // TBTotalNos
      // 
      this->TBTotalNos->BackColor = System::Drawing::SystemColors::Info;
      this->TBTotalNos->Enabled = false;
      this->TBTotalNos->Location = System::Drawing::Point(455, 14);
      this->TBTotalNos->Name = L"TBTotalNos";
      this->TBTotalNos->Size = System::Drawing::Size(33, 20);
      this->TBTotalNos->TabIndex = 16;
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Location = System::Drawing::Point(414, 17);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(36, 13);
      this->label4->TabIndex = 15;
      this->label4->Text = L"T.Nós";
      // 
      // TBAltura
      // 
      this->TBAltura->BackColor = System::Drawing::SystemColors::Info;
      this->TBAltura->Enabled = false;
      this->TBAltura->Location = System::Drawing::Point(368, 14);
      this->TBAltura->Name = L"TBAltura";
      this->TBAltura->Size = System::Drawing::Size(33, 20);
      this->TBAltura->TabIndex = 14;
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Location = System::Drawing::Point(327, 17);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(34, 13);
      this->label3->TabIndex = 13;
      this->label3->Text = L"Altura";
      // 
      // TBLarguraMaxima
      // 
      this->TBLarguraMaxima->BackColor = System::Drawing::SystemColors::Info;
      this->TBLarguraMaxima->Enabled = false;
      this->TBLarguraMaxima->Location = System::Drawing::Point(282, 13);
      this->TBLarguraMaxima->Name = L"TBLarguraMaxima";
      this->TBLarguraMaxima->Size = System::Drawing::Size(33, 20);
      this->TBLarguraMaxima->TabIndex = 12;
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(210, 17);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(66, 13);
      this->label2->TabIndex = 11;
      this->label2->Text = L"Largura.Máx";
      // 
      // listBox1
      // 
      this->listBox1->FormattingEnabled = true;
      this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(25) {L"Pompeu", L"Cervantes", L"Mozart", L"Fibonacci", 
        L"Dirac", L"Galileu", L"Elias", L"Homero", L"Isaac", L"Rudolfo", L"Jules", L"Murphy", L"Kelvin", L"Laplace", L"Moore", L"Nobel", 
        L"Ortega", L"Parkinson", L"Beethoven", L"Aquiles", L"Pascal", L"Quixote", L"Riemann", L"Salazar", L"Strauss"});
      this->listBox1->Location = System::Drawing::Point(8, 50);
      this->listBox1->Name = L"listBox1";
      this->listBox1->Size = System::Drawing::Size(77, 342);
      this->listBox1->TabIndex = 10;
      this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
      // 
      // TBNome
      // 
      this->TBNome->Location = System::Drawing::Point(91, 14);
      this->TBNome->Name = L"TBNome";
      this->TBNome->Size = System::Drawing::Size(103, 20);
      this->TBNome->TabIndex = 9;
      this->TBNome->Enter += gcnew System::EventHandler(this, &Form1::TBNome_Enter);
      this->TBNome->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::TBNome_KeyDown);
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(50, 17);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(35, 13);
      this->label1->TabIndex = 8;
      this->label1->Text = L"Nome";
      // 
      // listBox2
      // 
      this->listBox2->FormattingEnabled = true;
      this->listBox2->Location = System::Drawing::Point(91, 50);
      this->listBox2->Name = L"listBox2";
      this->listBox2->Size = System::Drawing::Size(944, 680);
      this->listBox2->TabIndex = 7;
      // 
      // tabPage1
      // 
      this->tabPage1->Controls->Add(this->groupBox4);
      this->tabPage1->Controls->Add(this->groupBox3);
      this->tabPage1->Controls->Add(this->groupBox2);
      this->tabPage1->Controls->Add(this->groupBox1);
      this->tabPage1->Controls->Add(this->button3);
      this->tabPage1->Location = System::Drawing::Point(4, 22);
      this->tabPage1->Name = L"tabPage1";
      this->tabPage1->Padding = System::Windows::Forms::Padding(3);
      this->tabPage1->Size = System::Drawing::Size(1035, 733);
      this->tabPage1->TabIndex = 0;
      this->tabPage1->Text = L"Dados";
      this->tabPage1->UseVisualStyleBackColor = true;
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
      this->TBDifNivel->Text = L"1";
      // 
      // label11
      // 
      this->label11->AutoSize = true;
      this->label11->Location = System::Drawing::Point(6, 25);
      this->label11->Name = L"label11";
      this->label11->Size = System::Drawing::Size(49, 13);
      this->label11->TabIndex = 23;
      this->label11->Text = L"Dif.Nível";
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
      this->groupBox2->Text = L"Informação";
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
      this->RBInformacaoVisualizacao->Text = L"Visualização";
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
      this->TBAlturaCaixa->Text = L"35";
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
      this->TBLarguraCaixa->Text = L"50";
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
      this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->toolStripButton1, 
        this->toolStripButton2, this->toolStripButton8, this->toolStripButton5, this->toolStripButton4, this->toolStripButton6, 
        this->toolStripButton7, this->toolStripButton9});
      this->toolStrip1->Location = System::Drawing::Point(0, 0);
      this->toolStrip1->Name = L"toolStrip1";
      this->toolStrip1->Size = System::Drawing::Size(1043, 25);
      this->toolStrip1->TabIndex = 7;
      this->toolStrip1->Text = L"toolStrip1";
      // 
      // toolStripButton1
      // 
      this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
      this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
      this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
      this->toolStripButton1->Name = L"toolStripButton1";
      this->toolStripButton1->Size = System::Drawing::Size(23, 22);
      this->toolStripButton1->Text = L"Importar dados";
      this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
      // 
      // toolStripButton2
      // 
      this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
      this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
      this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
      this->toolStripButton2->Name = L"toolStripButton2";
      this->toolStripButton2->Size = System::Drawing::Size(23, 22);
      this->toolStripButton2->Text = L"Inserir";
      this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::toolStripButton2_Click);
      // 
      // 
      // toolStripButton8
      // 
      this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
      this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton8.Image")));
      this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
      this->toolStripButton8->Name = L"toolStripButton8";
      this->toolStripButton8->Size = System::Drawing::Size(23, 22);
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
      this->toolStripButton5->Size = System::Drawing::Size(23, 22);
      this->toolStripButton5->Text = L"Eliminar substituição";
      this->toolStripButton5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
      this->toolStripButton5->Click += gcnew System::EventHandler(this, &Form1::toolStripButton5_Click);
      // 
      // toolStripButton4
      // 
      this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
      this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton4.Image")));
      this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
      this->toolStripButton4->Name = L"toolStripButton4";
      this->toolStripButton4->Size = System::Drawing::Size(23, 22);
      this->toolStripButton4->Text = L"HTML";
      this->toolStripButton4->Click += gcnew System::EventHandler(this, &Form1::toolStripButton4_Click);
      // 
      // toolStripButton6
      // 
      this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
      this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton6.Image")));
      this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
      this->toolStripButton6->MergeAction = System::Windows::Forms::MergeAction::Replace;
      this->toolStripButton6->Name = L"toolStripButton6";
      this->toolStripButton6->Size = System::Drawing::Size(23, 22);
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
      this->toolStripButton7->Size = System::Drawing::Size(23, 22);
      this->toolStripButton7->Text = L"Elimina árvore";
      this->toolStripButton7->Click += gcnew System::EventHandler(this, &Form1::toolStripButton7_Click);
      // 
      // toolStripButton9
      // 
      this->toolStripButton9->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
      this->toolStripButton9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton9.Image")));
      this->toolStripButton9->ImageTransparentColor = System::Drawing::Color::Magenta;
      this->toolStripButton9->Name = L"toolStripButton9";
      this->toolStripButton9->Size = System::Drawing::Size(23, 22);
      this->toolStripButton9->Text = L"toolStripButton9";
      this->toolStripButton9->Click += gcnew System::EventHandler(this, &Form1::toolStripButton9_Click);
      // 
      // Form1
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(1043, 787);
      this->Controls->Add(this->toolStrip1);
      this->Controls->Add(this->tabControl1);
      this->Name = L"Form1";
      this->Text = L"Form1";
      this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
      this->tabControl1->ResumeLayout(false);
      this->tabPage2->ResumeLayout(false);
      this->tabPage2->PerformLayout();
      this->tabPage1->ResumeLayout(false);
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
      Brush^ pincel;
      System::Drawing::Font^ fonte;
      CDadosGrafico(int A, int L, int info, int _dif_nivel) {
        largura = L;
        altura = A;
        infoExtra = info;
        dif_nivel = _dif_nivel;
        caixa_proximo = 0;
        espaco = 0;
        padding = 2;
        espessura = 2;
        ix = largura + 3;
        iy = altura * 2.0;
        cor = Color::Black;
        caneta = gcnew Pen(cor, espessura);
        canetaAvo = gcnew Pen(Color::Magenta, espessura);
        canetaPai = gcnew Pen(Color::Magenta, espessura);
        canetaPesquisa = gcnew Pen(Color::Blue, espessura);
        canetaInserir = gcnew Pen(Color::Green, espessura);
        canetaEliminar = gcnew Pen(Color::Red, espessura);
        pincel = Brushes::Black;
        fonte = gcnew System::Drawing::Font("Arial", 8);
      }
    };
    void Desenhar_(Graphics^ g, CAlunoArvore *no, CDadosGrafico^ d,
            int x, int y, int xa, int ya, int h, int nivel) {
      if (no) {

        int b, c;
        char xx[50];
        d->ordem++;
        no->getNumero();
        if (no->getDesc() == "pai")
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

        int h2 = h;
        if (CBUtilizaAlturaDesenho->Checked)
          h2 = Convert::ToInt32(TBAlturaArvoreDesenho->Text);
        int delta = d->ix * (pow(2.0, (double) ((h2 - nivel) + d->dif_nivel)));

        String^ s = gcnew String(no->getNome().c_str());
        g->DrawString(s, d->fonte, d->pincel, x + d->padding, y + d->padding);
        s = gcnew String((no->getDesc() + ": ").c_str());
        if (d->infoExtra == 1) // ordem de pesquisa
          s += gcnew String(itoa(no->getMarca(), xx, 10));
        else
          s += gcnew String(itoa(d->ordem, xx, 10));
        g->DrawString(s, d->fonte, d->pincel, x + d->padding, y + 20);

        Desenhar_(g, no->getEsquerda(), d, x - delta, y + d->iy, x, y, h, nivel + 1);
        Desenhar_(g, no->getDireita(), d, x + delta, y + d->iy, x, y, h, nivel + 1);
      }
    }
    void Desenhar(Graphics^ g, CArvoreAluno *a, int x, int y) {
      g->Clear(Color::Snow);
      int L = Int32::Parse(TBLarguraCaixa->Text);
      int A = Int32::Parse(TBAlturaCaixa->Text);
      int dif_nivel = Convert::ToInt32(TBDifNivel->Text);
      //tmTelefone->Text = Convert::ToString(n + 1);

      int infoExtra;
      if (RBInformacaoPesquisa->Checked)
        infoExtra = 1; // ordem de pesquisa
      else
        infoExtra = 2; // ordem de visualização
      CDadosGrafico^ d = gcnew CDadosGrafico(A, L, infoExtra, dif_nivel);

      int h = arvore->Altura();
      Desenhar_(g, a->getRaiz(), d, x, y, x, y, h, 1);
    }

  private:
    System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
  private:
    System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
      arvore->ImportarNomes("../nomes_siglas_pessoas_lugares_r20.txt");
    }
  private:
    System::Void toolStripButton9_Click(System::Object^ sender, System::EventArgs^ e) {
     
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

              toolStripButton9_Click(sender, e);

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
    }
  private:
    System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {

      string nome = StringTostring(TBNome->Text);

      if (arvore->EliminaSubstituicao(nome))
              TBNome->ForeColor = Color::Green;
      else
        TBNome->ForeColor = Color::Red;
              toolStripButton9_Click(sender, e);

      }
  private:
    System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {

      string nome = StringTostring(TBNome->Text);

      if (arvore->EliminaElemento(nome))
              TBNome->ForeColor = Color::Green;
      else
        TBNome->ForeColor = Color::Red;
              toolStripButton9_Click(sender, e);
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
              toolStripButton9_Click(sender, e);
    }
  private:
    System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
      arvore->Desmarca();
              toolStripButton9_Click(sender, e);
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
        sprintf_s(s, "%3", v[i]);
                a.setNome(s);
                a.setNumero(v[i]);
                arvore->Inserir(a);
      }
      toolStripButton9_Click(sender, e);



    }
  private: System::Void toolStripButton9_Click(System::Object^  sender, System::EventArgs^  e) {


              int x = Convert::ToInt32(TBCentroX->Text);
      int y = Convert::ToInt32(TBCentroY->Text);

      char s[10];
      TBAltura->Text = gcnew String(Convert::ToString(arvore->Altura());
              TBLarguraMaxima->Text = gcnew String(itoa(0, s, 10));
              TBTotalNos->Text = gcnew String(itoa(arvore->NumeroNos(), s, 10));
              TBTotalFolhas->Text = gcnew String(itoa(arvore->NumeroFolhas(), s, 10));

              Desenhar(listBox2->CreateGraphics(), arvore, x, y);

           }
};

}

