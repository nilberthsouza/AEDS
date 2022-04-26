#include <stdio.h>
#include "livros.h"
#include <stdlib.h>



void inserir_livros(Livro *lLivros, int tam){
    int i,k;
    for(i=0;i<tam;i++){
        printf("Insira o Nome do Livro: ");
        fflush(stdin);
        fgets(lLivros[i].Titulo,150,stdin);

        printf("Insira o Nome do Autor: \n");
        fflush(stdin);
        fgets(lLivros[i].Autor,150,stdin);

        for(k=0;k<6;k++){
        printf("\nInsira o preço do livro a %d meses atrás: ",6-k);
        scanf("%f",lLivros[i].Precos[k]);

        }

    }
    }

void imprimir_preco_medio(Livro *lLivros,int tam){
    int i,k;
    float somaLivro = 0;
    for(i=0;i<tam;i++){

        for(k=0;k<6;k++){
        somaLivro = (somaLivro + lLivros[i].Precos[k]);
        }

        printf("O preço medio do Livro: %s é %.2f",lLivros[i].Titulo, somaLivro/6.0);


    }


}









