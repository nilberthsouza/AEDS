#include <stdio.h>
#include <stdlib.h>
#include "livros.h"

int main()
{



    Livro *LivrosUm = (Livro *)malloc(5*sizeof(Livro));


    inserir_livros(&LivrosUm, 4);


    imprimir_preco_medio(&LivrosUm, 4);

    //escrever função maior preço

    //escrever função menor preço


return 0;

}
