#include <stdio.h>
#include <stdlib.h>
#include  "tad.h"



int main(void) {

  Cachorro dog,tio,doguinho;

  dog.idade = 1;
  tio.idade = 3;
  doguinho.idade = 4;

  PetLista Janeiro;

  Flvazia(&Janeiro);

  LInsere_Final(&Janeiro,dog);
  LInsere_Final(&Janeiro,tio);
  LInsere_Final(&Janeiro,doguinho);

  imprime(&Janeiro);

  troca_elementos(&Janeiro, 1,2);
  printf("\n");

  imprime(&Janeiro);


  return 0;
}
