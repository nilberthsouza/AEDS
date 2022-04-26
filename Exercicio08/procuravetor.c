#include "procuravetor.h"
#include <stdio.h>


int retorna_elemento_vetor(int *vetor,int tam,int elemento){

    if(vetor[tam-1] == elemento)
        return tam;
    else
        return retorna_elemento_vetor(vetor,tam-1,elemento);


}
