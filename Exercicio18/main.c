#include <stdio.h>
#include <stdlib.h>
#include "inverteletras.h"


int main(){

    Item texto,inventendo;


    Pilha Tpilha;
    char textoin[51];

    FPVazia(&Tpilha);


    printf("Insira um texto: ");
    fflush(stdin);
    fgets(textoin,49,stdin);

    for(int i = 0;i < 49;i++){
    texto.letra = textoin[i];
    Empilha(&Tpilha,&texto.letra);


    }

    printf("\n");
    for(int i =0;i<49;i++){
    Desempilha(&Tpilha,&inventendo);


    printf("%c",inventendo.letra);


    }




}



