#include <stdio.h>
#include "somavetor.h"




int soma_vetor(int  * vetor, int tam){

   if(tam == 0)
       return 0;
   else{
       return vetor[tam-1] + soma_vetor(vetor,tam-1);
       }
    }



