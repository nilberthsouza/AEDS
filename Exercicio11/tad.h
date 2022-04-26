#ifndef TAD_H_INCLUDED
#define TAD_H_INCLUDED



typedef struct Cachorro_est{
  //char nome[51];
  int idade;

}Cachorro;

typedef struct Celula_est{
  Cachorro Item;
  struct Celula_est* pprox;

}Celula;

typedef struct PetLista_est{
  Celula * primeiro;
  Celula * ultimo;
  int tam;

}PetLista;



void Flvazia(PetLista *pLista);
int Lvazia(PetLista *pLista);
int LInsere_Final(PetLista * pLista, Cachorro itemnovo);
int LInsere_inicio(PetLista * pLista, Cachorro itemnovo);
int Linsere_meio(PetLista * pLista, Cachorro itemnovo, int posicao);
void imprime(PetLista * pLista);
void troca_elementos(PetLista * pLista, int indiceUm,int indiceDois);



#endif // TAD_H_INCLUDED
