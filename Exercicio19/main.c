#include <stdio.h>
#include <stdlib.h>
#include "inverpilha.h"
#include <stdlib.h>

int main()
{
    Item a,b,c;
    a.codigo = 1;
    b.codigo =2;
    c.codigo = 3;

    Pilha Numeros;

    FPVazia(&Numeros);

    Empilha(&Numeros,&a);
    Empilha(&Numeros,&b);
    Empilha(&Numeros,&c);

    printf("\n");
    Imprime(&Numeros);

    Inverte((&Numeros));
    printf("\n");

    Imprime(&Numeros);

    return 0;

}
