#ifndef INVERTELETRAS_H_INCLUDED
#define INVERTELETRAS_H_INCLUDED

typedef struct Item_est{

    char letra;
}Item;


typedef struct Celula_est{
    Item pItem;
    struct Celula_est * pprox;
}Celula;


typedef struct Pilha_est{
    Celula * topo;
    Celula * fundo;
    int tamanho;
}Pilha;

void FPVazia(Pilha * pPilha);

int Empilha(Pilha * pPilha, Item* itemnovo);

int Desempilha (Pilha* pPilha, Item* pItem);

void Imprime(Pilha * pPilha);





#endif // INVERTELETRAS_H_INCLUDED
