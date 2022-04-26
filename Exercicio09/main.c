#include <stdio.h>
#include <stdlib.h>
#include "somavetor.h"

int main()
{
    int valores[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int tamanho = sizeof(valores)/sizeof(int);
    //int tamanho = 10;


    printf("A soma dos elementos do vetor é %d ",soma_vetor(valores,tamanho));



    return 0;
}
