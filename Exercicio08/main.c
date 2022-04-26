#include <stdio.h>
#include <stdlib.h>
#include "procuravetor.h"

int main()
{
    int valores[] = {1,3,5,6,4,7};
    int element = 4;
    printf("O indice do elemento %d ocupa posição %d",element,retorna_elemento_vetor(valores,8,element));

}
