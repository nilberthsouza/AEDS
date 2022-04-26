#ifndef LIVROS_H_INCLUDED
#define LIVROS_H_INCLUDED
#include <stdio.h>

typedef struct Livro_Est{
    char Titulo[151];
    char Autor[151];
    float Precos[6];

}Livro;


void inserir_livros(Livro *lLivros, int tam);

void imprimir_preco_medio(Livro *lLivros,int tam);


#endif // LIVROS_H_INCLUDED
