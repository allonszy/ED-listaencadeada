#ifndef LISTA
#define LISTA

typedef struct {
    int codigo;
    char nome[20];
    int idade;
} TipoItem;

typedef struct Celula {
    TipoItem Item;
    struct Celula *Prox;
} Celula;

typedef struct {
    Celula *Primeiro;
    Celula *Ultimo;
} TipoLista;


//typedef struct TipoLista lista;

//FUNCOES

void FLVazia (TipoLista *Lista);

int Vazia (TipoLista Lista);

void Insere (TipoItem x, TipoLista *Lista);

struct Celula* Localiza (int cod, TipoLista *Lista);

void Retira (struct Celula* p, TipoLista *Lista);

void Imprime (TipoLista Lista);

void ImprimeRec (struct Celula *p);

#endif
