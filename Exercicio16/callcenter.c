#include <stdio.h>
#include "callcenter.h"
int fvazia(Fila * pFila){
  if(pFila->cabeca == pFila->fim)
    return 1;
  else
    return 0;
}


int enfileira(Fila * pFila,Contato * itemnovo){
  Celula * Paux;
  Paux = (Celula*) malloc(sizeof(Celula));
  pFila->fim->pprox = Paux;
  pFila->fim = Paux;
  Paux->contato = *itemnovo;
  Paux->pprox = NULL;
  pFila->tamanho++;

  return 1;
}



int desenfilera(Fila * pFila, Contato * itemnovo){
  if(fvazia(pFila))
    return 0;
  Celula * Paux;
  Paux = pFila->cabeca;


  *itemnovo = pFila->cabeca->pprox->contato;
  pFila->cabeca =pFila->cabeca->pprox;

  pFila->tamanho--;
  free(Paux);

  return 1;

}


void imprimefila(Fila * pFila){
  Celula * pAux;
  pAux = pFila->cabeca->pprox;

  for(int i=0;i<pFila->tamanho;i++){
    pAux = pAux->pprox;
    printf("\n%d", pAux->contato.nome);
    printf("\n%d", pAux->contato.ddd);
    printf("\n%d\n", pAux->contato.telefone);

  }
  free(pAux);
}
