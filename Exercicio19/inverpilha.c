#include <stdio.h>
#include "inverpilha.h"
#include <stdlib.h>




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
    return 1;

}

int Desempilha (Pilha* pPilha, Item* pItem) {
    Celula* pAux;
    pAux = (Celula *)malloc(sizeof(Celula));
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
    pAux = (Celula *)malloc(sizeof(Celula));
    pAux = pPilha->topo;
    for(int i = 0;i < pPilha->tamanho;i++){
            pAux = pAux->pprox;
            printf("%d",pAux->pItem.codigo);



    }

    free(pAux);
}

int Inverte(Pilha * pPilha){
    Pilha pAuxUm,pAuxDois;

    FPVazia(&pAuxUm);
    FPVazia(&pAuxDois);

    Item iAux;


    while(!PVazia(pPilha)){
        Desempilha(pPilha,&iAux);
        Empilha(&pAuxUm,&iAux);

    }
    while(!PVazia(&pAuxUm)){
        Desempilha(&pAuxUm,&iAux);
        Empilha(&pAuxDois,&iAux);

    }
    while(!PVazia(&pAuxDois)){
        Desempilha(&pAuxDois,&iAux);
        Empilha(pPilha,&iAux);

    }
    return 1;
}

