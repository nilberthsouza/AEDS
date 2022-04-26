#include <stdio.h>
#include "tad.h"
#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100



void Flvazia(PetLista *pLista){
  pLista->primeiro = (Celula*)malloc(sizeof(Celula));
  pLista->ultimo =pLista->primeiro;
  pLista->primeiro->pprox = NULL;
  pLista->tam = 0;

}

int Lvazia(PetLista *pLista){
  if(pLista->primeiro == pLista->ultimo)
    return 1;
  else
    return 0;

}

int LInsere_Final(PetLista * pLista, Cachorro itemnovo){
  pLista->ultimo->pprox = (Celula *)malloc(sizeof(Celula));
  pLista->ultimo->pprox->Item = itemnovo;
  pLista->ultimo = pLista->ultimo->pprox;
  pLista->ultimo->pprox= NULL;
  pLista->tam++;
  return 1;

}

int LInsere_inicio(PetLista * pLista, Cachorro itemnovo){
  Celula * pAux;
  pAux->Item = itemnovo;
  pAux->pprox = pLista->primeiro->pprox;  //essa lista tem cabeça
  pLista->primeiro->pprox = pAux;
  pLista->tam++;

}

int Linsere_meio(PetLista * pLista, Cachorro itemnovo, int posicao){

  Celula* pAux,pAux1;
  pAux = pLista->primeiro;
  pAux1.Item = itemnovo;

  if(pLista->tam == 0){
    pLista->primeiro->Item = itemnovo;
    pLista->tam++;}

  for(int i = 0;i<posicao;i++){

    pAux = pAux->pprox;

  }
  pAux1.pprox = pAux->pprox;
  pAux->pprox = &pAux1;
  return 1;
}

void imprime(PetLista * pLista){
  Celula * Aux;
  Aux = pLista->primeiro->pprox;
  while(Aux!=NULL){
    printf("%d",Aux->Item.idade);
    Aux = Aux->pprox;

  }
}


void troca_elementos(PetLista * pLista, int indiceUm,int indiceDois){
    Celula * pAux, * pAux1, *pAux2;
    pAux = pLista->primeiro;
    pAux1 = pLista->primeiro;

    /* se indiceUm for igual a 1, o for vai exercutar apenas uma vez e como é uma lista com cabeça, pAux-pprox é o primeiro
    elemento apos a cabeça*/
    for(int i =0;i<indiceUm;i++){
        pAux = pAux->pprox;

    }
    for(int j=0;j<indiceDois;j++){
        pAux1 = pAux->pprox;

    }

    pAux2 = pAux;
    pAux = pAux1;
    pAux1 = pAux2;

}
