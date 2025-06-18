//---------------------------------------------------------------------------

#ifndef TArvoreNoelH
#define TArvoreNoelH

class Arvore {
private :
  /*
  Cada nó da árvore tem um valor, um ponteiro para o nó à
  esquerda, um ponteiro para o nó à direita e ainda um
  ponteiro para o nó pai. Este último só faz sentido se
  desejarmos percorrer a árvore no sentido das folhas para a
  raiz. Vamos então definir uma classe que representa um nó
  (elemento) da árvore.
  */
  class Elemento {
  public :
    float valor;
    Elemento * esquerda;
    Elemento * direita;
    Elemento * pai;

    Elemento(float valor) {
      this->valor = valor;

      /*
      Quando criamos um nó assumimos que não
      fica nenhum nó à sua esquerda e à sua
      direita.
      */
      esquerda = direita = NULL;
    }
  };

  /*
  Vamos definir um ponteiro que indica qual o nó que está situado
  na raiz da árvore.
  */
  Elemento * raiz;

  /*
  Este método retorna o número de elementos (nós) que existem na
  árvore, começando a contar a partir de um determinado elemento
  da árvore e incluindo esse elemento. Este método serve de
  auxiliar ao método tamanho.
  */
  long numElementosDesde(Elemento * e) const {
    if (e == NULL) return 0;

    return 1 + numElementosDesde(e->esquerda) + numElementosDesde(e->direita);
  }

  /*
  Este método serve de auxiliar ao destrutor da árvore e permite
  libertar a memória ocupada pelos elementos (nós) da árvore,
  partindo de um dado nó da árvore.
  */
  void apagaElementosDesde(Elemento * e) {
    if (e == NULL) return;

    apagaElementosDesde(e->esquerda);
    apagaElementosDesde(e->direita);

    delete e;
  }

  /*
  Este método serve para adicionar um elemento à árvore. O
  elemento deve ter sido previamente criado.
  */
  void adicionaElemento(Elemento * novo) {
    /*
    Se raiz é NULL árvore ainda não tem nós
		e o novo nó ficará na raiz.
    */
    if (vazia()) {
		  raiz = novo;
      novo->pai = NULL;
      return;
		}

    /*
    Vamos calcular qual deverá ser o elemento pai do novo
    elemento.
    */
    Elemento * pai;
		Elemento * paiAuxiliar = raiz;

		/*
    Enquanto não encontramos o nó que deve ser o pai
    do novo nó, vamos procurá-lo. Quando o paiAuxiliar
    for NULL significa que já encontramos o pai.
    */
    while(paiAuxiliar != NULL) {
		  pai = paiAuxiliar;

      /*
      Se o valor do nó onde nos encontramos
      (pai) é maior que o valor do novo nó
      o novo nó deverá ficar à esquerda deste,
			senão à direita.
      */
      if (pai->valor > novo->valor) {
			  paiAuxiliar = pai->esquerda;
      } else {
			  paiAuxiliar = pai->direita;
      }
    }

    /*
    Agora que achámos o nó pai do nosso novo nó podemos
    introduzir o novo nó na árvore.
    */
    novo->pai = pai;

		/*
    Vamos colocar o novo nó à esquerda ou à direita do nó pai,
    consoante o caso, isto é consoante o seu valor seja
		respectivamente menor ou maior que o valor do nó pai.
    */
    if (novo->valor < pai->valor) {
		  pai->esquerda = novo;
    } else {
		  pai->direita  = novo;
    }
  }

  void escreve(Elemento * e) {
    if (e == NULL) return;

    escreve(e->esquerda);
    cout << e->valor << endl;
    escreve(e->direita);
  }

public:
  Arvore() {
    /*
    Inicialmente a árvore não tem elementos, logo não tem
    um nó situado na raiz.
    */
    raiz = NULL;
  }

  /*
  No destrutor, vamos apagar todos os nós da árvore começando na raiz.
  Para mais informações consultar o método apagaElementosDesde.
  */
  ~Arvore() {
    apagaElementosDesde(raiz);
  }

  /*
  Este método serve para adicionar um novo valor à árvore. Para
  tal é criado um novo nó contendo o referido valor que é depois
  adicionado à árvore. Para mais informações consultar o método
  adicionaElemento.
  */
  void adiciona(float valor) {
    adicionaElemento(new Elemento(valor));
  }

  void retira(float valor) {
    /*
    Vamos começar por procurar o nó que contém o valor que
    pretendemos retirar. Começamos a procura no nó da raiz.
    */
    Elemento * actual = raiz;

    /*
    E agora vamos percorrer a árvore até acharmos um nó
    contendo o valor desejado ou até não podermos procurar
    mais (termos chegado a um extremo da árvore). Dito de
    outra forma, vamos percorrer a árvore enquanto não
    encontrarmos um nó contendo o valor desejado e ainda não
    tivermos chegado a extremo da árvore.
    */
    while (actual != NULL && actual->valor != valor) {
      /*
      Se o valor que andamos à procura é inferior ao
      valor do nó actual, vamos para a esquerda, senão
      vamos para a direita.
      */
      if (valor < actual->valor) {
        actual = actual->esquerda;
      } else {
        actual = actual->direita;
      }
    }

    /*
    Se encontramos o nó contendo o valor desejado, vamos
    retirá-lo da árvore.
    */
    if (actual != NULL) {
      Elemento * pai = actual->pai;

      /*
      Se o nó que vamos retirar se encontra na raiz da
      árvore, isto é se não tem pai.
      */
      if (pai == NULL) {
        /*
        Se à esquerda do nó que vamos apagar
        existem nós, a raiz passa a ser o nó que
        está actualmente à esquerda da raiz e
        existindo nós à direita do nó que vamos
        apagar, vamos ter que os ligar à árvore
        (Para tal utilizamos o método adicionaElemento).
        */
        if (actual->esquerda != NULL) {
          raiz = actual->esquerda;
          if (actual->direita != NULL) adicionaElemento(actual->direita);
        } else {
          /*
          Se à esquerda do nó que vamos
          apagar não existiam nós, então
          a raiz passa a ser o nó que
          está à direita do que vamos
          apagar (Pode não estar nenhum e
          nesse caso raiz ficará com o
          valor NULL.
          */
          raiz = actual->direita;
        }

        /*
        Já temos então um novo nó raiz (que pode
        ser NULL indicando que não temos raiz),
        resta-nos agora dizer que acima deste
        não à nenhum.
        */
        if (raiz != NULL) raiz->pai = NULL;
      } else {
        /*
        Sabendo que o nó que vamos eliminar não
        é o que está na raiz, vamos alterar as
        ligações entre os nós da árvore, de
        forma a que se possam percorrer todos os
        nós uma vez desaparecido o nó a eliminar.
        */

        // Se à esquerda do nó a apagar existem nós
        Elemento * esqActual = actual->esquerda;
        if (esqActual != NULL) {
          /*
          Vamos ligar o nó pai do nó a
          apagar ao nó que está à esquerda
          do nó a apagar. Para tal começamos
          por indicar que acima do nó à
          esquerda do nó a eliminar se
          encontra o pai do nó a eliminar.
          */
          esqActual->pai = pai;

          /*
          E agora vamos dizer que à esquerda
          ou à direita do nó pai, consoante o
          nó apagar se encontre à esquerda ou
          à direita do seu pai, se encontra o
          nó que está à esquerda daquele que
          vamos apagar.
          */
          if (valor < pai->valor) {
            pai->esquerda = esqActual;
          } else {
            pai->direita  = esqActual;
          }

          /*
          Se também existiam nós à direita
          do nó a apagar vamos ter que os
          ligar à árvore (Para tal utilizamos
          o método adicionaElemento).
          */
          if (actual->direita != NULL) adicionaElemento(actual->direita);
        } else {
          /*
          Não havendo nós à esquerda do nó
          a apagar, vamos ligar o nó pai
          do nó a apagar ao nó que está à
          direita do nó a apagar.
          */
          Elemento * dirActual = actual->direita;
          if (dirActual != NULL) dirActual->pai = pai;

          if (valor < pai->valor) {
            pai->esquerda = dirActual;
          } else {
            pai->direita  = dirActual;
          }
        }
      }

      /*
      Já estabelecemos todas as ligações entre os nós
      que estavam ligados ao que vamos apagar de forma
      a percorrer todos os nós da árvore, dispensando
      a presença deste, portanto podemos agora libertar
      a memória ocupada pelo mesmo.
      */
      delete actual;
    }
  }

  /*
  Este método retorna o número de elementos que existem na
  árvore. Para tal são contados todos os elementos (nós) a partir
  da raiz. Para mais informações consultar o método
  numElementosDesde.
  */
  long tamanho() const {
    return numElementosDesde(raiz);
  }

  /*
  Uma árvore está vazia quando não tem nenhum elemento, isto é
  quando a raiz não aponta para nenhum elemento.
  */
	bool vazia() const {
	  return (raiz == NULL);
  }

  void escreve() const {
    escreve(raiz);
  }
};


//---------------------------------------------------------------------------
#endif
