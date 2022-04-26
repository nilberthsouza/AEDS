#include <stdio.h>
#include "inverpilha.h"




void FPVazia(Pilha * pPilha){
    pPilha->topo = (Celula *)malloc(sizeof(Celula));
    pPilha->fundo= pPilha->topo;
    pPilha->topo->pprox = NULL;
    pPilha->tamanho = 0;


}

int PVazia (Pilha* pPilha){
    return (pPilha->topo == pPilha->fundo);

}


int Empilha(Pilha * pPilha, Item* itemnovo){
    Celula *pAux;
    pAux = (Celula*)malloc(sizeof(Celula));
    pPilha->topo->pItem = *itemnovo;
    pAux->pprox = pPilha->topo;
    pPilha->topo = pAux;
    pPilha->tamanho++;

}

int Desempilha (Pilha* pPilha, Item* pItem) {
    Celula* pAux; /* celula a ser removida */
    if (PVazia(pPilha))
        return 0;

    pAux = pPilha->topo;
    pPilha->topo = pAux->pprox;
    *pItem = pAux->pprox->pItem;
    free(pAux);
    pPilha->tamanho--;
    return 1;
}

void Imprime(Pilha * pPilha){
    Celula * pAux;
    pAux = pPilha->topo;
    for(int i = 0;i< pPilha->tamanho;i++){
            pAux = pAux->pprox;
            printf("%s",pAux->pItem);



    }

}
