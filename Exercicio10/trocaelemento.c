#include <stdio.h>
#include "trocaelemento.h"



void troca_elemento(int vetor[],int tam,int elementoUm, int elementoDois){
    int i,j,k,aux,ind;
    for(i=0;i<tam;i++){
        if(vetor[i]==elementoUm){
            aux = vetor[i];
            ind = i;

        }
    }
    for(k=0;k<tam;k++){
        if(vetor[k]==elementoDois){
            vetor[ind]=vetor[k];
            vetor[k]= aux;

        }


    }

    for(j=0;j<tam;j++){
    printf("%d -",vetor[j]);


    }


}

