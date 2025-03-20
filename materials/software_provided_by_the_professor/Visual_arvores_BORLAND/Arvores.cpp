//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include <fstream.h>
#include "TArvores.h"
#include "Arvores.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TArvore a;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{

  a.InserirElemento(StrToInt(Edit1->Text));
  Button3Click(NULL);

  Edit1->Text = IntToStr(random(100));



}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{

  ListBox1->Items->Clear();

  ofstream f("ListaPreOrdem.txt");
  f.close();

  a.ListaPreOrdem("ListaPreOrdem.txt");

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{

  Form2->Hide();
  Form2->Show();

  a.VisualListaPreOrdem("",500,0,40,1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{

  int v[] = {8,4,2,1,3,6,5,7,12,10,9,11,14,13,15};
  for (int i=0; i< 15;i++){
    a.InserirElemento(v[i]);
      a.VisualListaPreOrdem("",500,0,40,1);
}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
  a.Eliminar(StrToInt(Edit1->Text));
  Button3Click(NULL);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
int v[] = {15,20,4,19,17};
  for (int i=0; i< 5;i++){
    a.InserirElemento(v[i]);
      a.VisualListaPreOrdem("",500,0,40,1);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
int v[] = {17,20,4,19,15};
  for (int i=0; i< 5;i++){
    a.InserirElemento(v[i]);
      a.VisualListaPreOrdem("",500,0,40,1);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
int v[] = {89,10,50,45,15,77,44,68,4,96};

  for (int i=0; i< 10;i++){
    a.InserirElemento(v[i]);
      a.VisualListaPreOrdem("",500,0,40,1);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
  a.EliminarArvore();
  Button3Click(NULL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{

  TNo *N;

  N = a.Pesquisa_No(StrToInt(Edit1->Text));

  ListBox1->Items->Clear();

  ListBox1->Items->Add(StrToInt(Edit1->Text));
  if (N)
    if (N->TiraValor() == StrToInt(Edit1->Text))
      ListBox1->Items->Add("Existe");
    else
      ListBox1->Items->Add("Não Existe");

  if (a.Existe_E(StrToInt(Edit1->Text)))
      ListBox1->Items->Add("Existe");
  else
    ListBox1->Items->Add("Não Existe");


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{

 int v[] = {8,4,2,1,3,6,5,7,12,10,9,11,14,13,15};
  for (int i=0; i< 15-3;i++){
    a.InserirElemento(v[i]);
      a.VisualListaPreOrdem("",500,0,40,1);
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
 int v[] = {8,4,2,1,3,12,10,9,11,14,13,15};
  for (int i=0; i< 15-3;i++){
    a.InserirElemento(v[i]);
      a.VisualListaPreOrdem("",500,0,40,1);
}
  
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button13Click(TObject *Sender)
{
  int v[] = {8,4,2,1,3,6,5,7,12,14,13,15};
  for (int i=0; i< 15-3;i++){
    a.InserirElemento(v[i]);
      a.VisualListaPreOrdem("",500,0,40,1);
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
 int v[] = {8,4,6,5,7,12,10,9,11,14,13,15};
  for (int i=0; i< 15-3;i++){
    a.InserirElemento(v[i]);
      a.VisualListaPreOrdem("",500,0,40,1);
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{

  int v[] = {8,4,2,1,3,6,5,7,80,70,60,75,73,90,85,95,82,87,89,88};
  for (int i=0; i< 20;i++){
    a.InserirElemento(v[i]);
      a.VisualListaPreOrdem("",500,0,40,1);
  }


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
  a.EliminaSubstituicao(StrToInt(Edit1->Text));
  Button3Click(NULL);
}
//---------------------------------------------------------------------------

