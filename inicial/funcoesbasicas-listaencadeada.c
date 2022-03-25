#include <stdio.h>
#include <stdlib.h>
#include "lista.h"



void FLVazia (TipoLista *Lista)
{
  Celula *p;

  p = (Celula*) malloc(sizeof(Celula));

  Lista->Primeiro = p;
  Lista->Ultimo = Lista -> Primeiro;
  Lista->Primeiro->Prox = NULL;
}


int Vazia (TipoLista Lista)
{
  return (Lista.Primeiro == Lista.Ultimo);
}

void Insere (TipoItem x, TipoLista *Lista)
{
  Lista -> Ultimo -> Prox = (Celula*) malloc(sizeof(Celula));
  Lista -> Ultimo = Lista -> Ultimo -> Prox;
  Lista -> Ultimo -> Item = x;
  Lista -> Ultimo -> Prox = NULL;
}

void RemovePrimeiro (TipoLista *Lista)
{
  Celula *p = Lista -> Primeiro;
  Celula *q;
  if (p == NULL) {
    printf ("\nNão há como remover pois não há elementos na lista");
  } else {
    q = p -> Prox;
    Lista -> Primeiro = q;
    free(p);

  }
}


void Imprime (TipoLista Lista)
 {
  Celula *Aux;
  int i=1;
  Aux = Lista.Primeiro -> Prox;
  while (Aux != NULL)
   {
    printf ("\n\nCodigo do elemento %d: %d", i, Aux->Item.codigo);
    printf ("\nNome do elemento %d: %s", i, Aux->Item.nome);
    printf ("\nIdade do elemento %d: %d", i, Aux->Item.idade);

    Aux=Aux->Prox;
    i++;
   }
 }



 void ImprimeRec (struct Celula *p)
 {
    if (p!=NULL)
    {
        printf ("\n\nCodigo do elemento: %d", p->Item.codigo);
        printf ("\nNome do elemento: %s", p->Item.nome);
        printf ("\nIdade do elemento: %d", p->Item.idade);
        ImprimeRec(p->Prox);
    }
   printf("\n");
 }


