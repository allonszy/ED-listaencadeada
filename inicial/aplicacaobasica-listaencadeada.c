#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main()
{
    TipoItem p;
    TipoLista lista;

    printf("Digite um codigo: ");
    scanf("%i",&p.codigo);
    printf("Digite um nome: ");
    scanf("%s",p.nome);
    printf("Digite uma idade: ");
    scanf("%i",&p.idade);

    FLVazia(&lista);


    Insere(p, &lista);

    printf("Digite um codigo: ");
    scanf("%i",&p.codigo);
    printf("Digite um nome: ");
    scanf("%s",p.nome);
    printf("Digite uma idade: ");
    scanf("%i",&p.idade);

    Insere(p, &lista);


    printf("Digite um codigo: ");
    scanf("%i",&p.codigo);
    printf("Digite um nome: ");
    scanf("%s",p.nome);
    printf("Digite uma idade: ");
    scanf("%i",&p.idade);

    Insere(p, &lista);
    ImprimeRec(lista.Primeiro->Prox);


    return 0;

}
