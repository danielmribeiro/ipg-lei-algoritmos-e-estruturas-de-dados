//---------------------------------------------------------------------------

#include <fstream.h>
#include <iostream.h>
#include <iomanip.h>

#include "Arvores.h"
#include "Unit2.h"

#ifndef TArvoresH
#define TArvoresH

#include <math.h>

class TNo {
private:
    int valor;

public:
  TNo *esq;
  TNo *dir;
  TNo() {
     esq = dir = 0;
  }
  TNo(int v) {
     esq = dir = 0;
     valor = v;
  }
  void ColocaValor(int v) {
     valor = v;
  }
  int TiraValor() {
     return valor;
  }
};

class TArvore {
 private:
    TNo *raiz;

 public:
    TArvore(int v){
       raiz = new TNo(v);
    }
    TArvore(){
       raiz = 0;
    }

  	bool vazia() const {
	    return (raiz == 0);
    }
    TNo *ObtemRaiz() {
      return raiz;
    }
    void PoeRaiz(TNo *r) {
      raiz = r;
    }

/****************
**************************
*/

 bool EliminaSubstituicao(int e) {

    TNo *pai=raiz, *filho = raiz, *no_sub = raiz, *avo;

    while (no_sub != 0){   /* procura nó onde inserir dado */
      pai = no_sub;
      int x =no_sub->TiraValor();
      if (x == e) {
        /*
        Efectivamente o nó imediatamente anterior em ordem simétrica,
        é o nó que se encontra na subárvore esquerda do nó a eliminar
        (todas chaves são menores), o mais à direita possível
        (dos menores é o maior)
        */
        avo = no_sub->esq;
        pai = no_sub->esq;
        filho = no_sub->esq;
        while (filho){
          avo = pai;
          pai = filho;
          filho = filho->dir;
        }
        no_sub->ColocaValor(pai->TiraValor());
        if (pai->esq){
          avo->dir = pai->esq;
          delete pai;
        } else {
           avo->dir = pai->dir;
          delete pai;           
        }
        return 1;
      }
      if (x > e)
          no_sub = no_sub->esq;
      else
        no_sub = no_sub->dir;
    }



    return 1;
  }


/*
Dividida em duas partes, conforme situação da árvore:
– vazia: insere directamente novo dado
– não vazia: procura primeiro nó onde inserir novo dado
*/
  bool InserirElemento(int e) {

    TNo *pai=raiz, *filho = raiz;

    // – vazia: insere directamente novo dado
    if (vazia()) {
		  raiz = new TNo(e);
      return 1;
		}
    // - não vazia: procura primeiro nó onde inserir novo dado

    while (filho != 0){   /* procura nó onde inserir dado */
      pai = filho;
      int x =filho->TiraValor();
      if (x == e)
        return 0;    /* já existe! */
      if (x > e)
          filho = filho->esq;
      else
        filho = filho->dir;
    }
    /* pai passa a nó intermédio e aponta para nova folha */
  	  TNo *folha = new TNo(e);
    if (pai->TiraValor() > e)
      pai->esq = folha;
    else
      pai->dir = folha;
    return 1;
  }
/* ******************************************************************
   ******************************************************************
   ******************************************************************
*/
/* Vamos agora à remoção usando a search acima. A função abaixo
remove um nó cujo ponteiro é apontado por *pp. */
bool Eliminar(int e)
{
  TNo *aux = ObtemRaiz();  //inicia aux com a raiz
  TNo *pai = 0;

  while (aux != 0)
    {
    if (aux->TiraValor() == e) break;
    pai = aux;

    // esquerda ou direita
    if (e < aux->TiraValor())
      aux = aux->esq;
    else
      aux = aux->dir;
  }
  // se chegou aqui é porque não encontrou o x e q aponta
  // para um ponteiro que é NULL ou ainda para um ponteiro
  // aonde será inserido um elemento
  if (!aux )return 0;

  // verifica qual o caso - sem filho esquerdo ou direito
  int x;
  x = aux->TiraValor();

  if ( pai == 0){
    //delete aux;
    EliminarArvore();
    //PoeRaiz(0);
    return 1;
  }
  // esq ou dir do pai ?
  if (aux == pai->esq) {
    if (aux->dir == 0) {
      pai->esq = aux->esq;
      delete aux;
    }
    else if (aux->esq == 0)
    {// muda pai e libera
      pai->esq = aux->dir;
      delete aux;
    }
    else {// um para esquerda e tudo à direita
      TNo *mdir;
      mdir = aux->esq;

      // procura primeiro dprox NULL
      while (mdir->dir != 0)
        mdir = mdir->dir;

      mdir->dir = aux->dir;
      pai->esq = aux->esq;
      delete aux;
      return 1;
    }
  } else {
    if (aux->dir == 0) {
      pai->dir = aux->esq;
      delete aux;
    }
    else if (aux->esq == 0)
    {// muda pai e libera
      pai->dir = aux->dir;
      delete aux;
    }
    else {// um para esquerda e tudo à direita
      TNo *mdir;
      mdir = aux->esq;

      // procura primeiro dprox NULL
      while (mdir->dir != 0)
        mdir = mdir->dir;

      mdir->dir = aux->dir;
      pai->dir = aux->esq;
      delete aux;
      return 1;
    }

  }
}

bool Existe_E (int e)
{
  TNo *N;
  N = Pesquisa_No_aux(ObtemRaiz(), e);
  if ((N !=0) && (N->TiraValor() == e))
    return 1;
  else
    return 0;
}
/*O primeiro passo é procurar o nó a remover. Em seguida
verificar os dois casos:
A função abaixo procura nó com info x, devolvendo ponteiro
para o ponteiro deste nó, isto é, devolvendo o ponteiro para
o ponteiro que será alterado para eliminar este elemento:
*/
TNo *Pesquisa_No(int e)
{
   return Pesquisa_No_aux(ObtemRaiz(), e);
}


TNo *Pesquisa_No_aux(TNo *r, int e)
{
  TNo *aux = r;  //inicia aux com a raiz
  TNo *pai = r;
  // procura na ABB
  while (aux != 0)
    {
    if (aux->TiraValor() == e) return pai;
    pai = aux;
    // esquerda ou direita
    if (e < aux->TiraValor())
      aux = aux->esq;
    else
      aux = aux->dir;
  }
  // se chegou aqui é porque não encontrou o x e q aponta
  // para um ponteiro que é NULL ou ainda para um ponteiro
  // aonde será inserido um elemento
  return pai;
}



  void EliminarArvore()
  {
    EliminarArvoreAux(raiz);
    raiz = 0;
  }
  void EliminarArvoreAux(TNo *p)
  {
    if (p != 0) {
      EliminarArvoreAux(p->dir);
      EliminarArvoreAux(p->esq);
      delete p;
    }
   }

  void ListaPreOrdem(char *nome) {
    ListaPreOrdemAux(raiz, nome);
  }
  void VisualListaPreOrdem(char *nome, int x, int y, int largura_no, int nivel) {
    VisualListaPreOrdemAux(raiz, nome, x, y,x,y,largura_no,nivel);
  }

private:
  void VisualListaPreOrdemAux(TNo *no, char *nome,int x, int y, int xa, int ya, int largura_no,int nivel) {
    if (no == 0) return;
    Form2->Canvas->Pen->Width = 4;
    Form2->Canvas->Pen->Color = clBlue;
    Form2->Canvas->Ellipse(x,y,x+largura_no,y+largura_no);
    Form2->Canvas->Pen->Color = clRed;
    Form2->Canvas->Font->Height = 25;

    if (no->TiraValor() < 10)
      Form2->Canvas->TextOutA(x+15, y+10, no->TiraValor());
    else
      Form2->Canvas->TextOutA(x+10, y+10, no->TiraValor());

    if (nivel !=1) {
      Form2->Canvas->Pen->Color = clGreen;
      Form2->Canvas->MoveTo(xa+largura_no/2,ya+largura_no);
      Form2->Canvas->LineTo(x+largura_no/2, y);
    }
    ya = y;
    xa = x;

    VisualListaPreOrdemAux(no->esq,nome, x-largura_no*4/nivel, y +largura_no*2, xa,ya,largura_no,nivel+1);
    VisualListaPreOrdemAux(no->dir,nome,x+largura_no*4/nivel, y +largura_no*2, xa,ya,largura_no,nivel+1);
  }


// -------------------------------------------------

// -------------------------------------------------





  void ListaPreOrdemAux(TNo *no, char *nome) {

    if (no == 0) return;
   	ofstream f(nome, ios::app);

    f << no->TiraValor() << endl;
    Form1->ListBox1->Items->Add(no->TiraValor());

    ListaPreOrdemAux(no->esq,nome);

    f << endl;
    Form1->ListBox1->Items->Add("");

    ListaPreOrdemAux(no->dir,nome);

    f << endl;
    Form1->ListBox1->Items->Add("");

    static y = 0;


  }
};

//---------------------------------------------------------------------------
#endif
