#include <stdio.h>
#include <stdlib.h>
#include "callcenter.h"

int main()
{
    Fila Ligacoes;
    Contato pessoa;
    int choice;
    int a = 1;
while(1){
    printf("\n1-Inserir Contato");
    printf("\n2-Proximo Contato\n");
    scanf("%d",&choice);

    if(choice == 1){
        while(a==1){
        printf("Insira o nome do Contato que deseja adcionar a fila: ");
        scanf("%50[0-9a-zA-Z]",pessoa.nome);

        printf("Insira o ddd do Contato que deseja adcionar a fila: ");
        scanf("%d",&pessoa.ddd);

        printf("Insira o telefone do contato que deseja adcionar a fila");
        scanf("%d",&pessoa.telefone);

        enfileira(&Ligacoes,&pessoa);

        printf("deseja continuar inserir? 1-sim \t 2-nao : ");
        scanf("%d",&a);
        }



    }else{
        printf("Desenfilerando...\n");

        Contato desenfilado;

        desenfilera(&Ligacoes,&desenfilado);
        printf("NOME: %s\n",desenfilado.nome);
        printf("DDD: %d",desenfilado.ddd);
        printf("TELEFONE: ",desenfilado.telefone);



    }

}


}
