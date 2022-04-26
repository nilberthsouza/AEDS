#ifndef CALLCENTER_H_INCLUDED
#define CALLCENTER_H_INCLUDED

typedef struct Contatos_est{
    char nome[51];
    int ddd;
    int telefone;

}Contato;


typedef struct Celula_est{
    Contato contato;
    struct Celula_est *pprox;

}Celula;

typedef struct Fila_est{
    Celula * cabeca;
    Celula * fim;
    int tamanho;


}Fila;

int fvazia(Fila * pFila);

int enfileira(Fila * pFila,Contato * itemnovo);

int desenfilera(Fila * pFila, Contato * itemnovo);

void imprimefila(Fila * pFila);

#endif // CALLCENTER_H_INCLUDED
