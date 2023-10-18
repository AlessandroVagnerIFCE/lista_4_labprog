#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 84

int main()
{
    char *v = NULL;
    char *v2 = NULL;
    char *cat = NULL;
    unsigned int k = 0;
    unsigned int i = 0;

    //Criar os vetores
    v = (char*) malloc(TAM_MAX * sizeof(char));
    if (!v) {
        puts("Não há memória disponível");
        exit(1);
    }

    v2 = (char*) malloc(TAM_MAX * sizeof(char));
    if (!v2) {
        puts("Não há memória disponível");
        exit(1);
    }

    cat = (char*) malloc(TAM_MAX * sizeof(char));
    if (!cat) {
        puts("Não há memória disponível");
        exit(1);
    }

    //Obter strings
    puts("Insira uma string:");
    fgets(v, TAM_MAX, stdin);
    puts("\n");

    puts("Insira outra string:");
    fgets(v2, TAM_MAX, stdin);
    puts("\n");

    //Concatenar as strings e remover as quebras de linha

    //Primeira string
    while (*(v + k) != '\n') {
        *(cat + k) = *(v + k);
        k++;
    }

    //Segunda string
    while (*(v2 + i) != '\n') {
        *(cat + k) = *(v2 + i);
        k++;
        i++;
    }
    *(cat + k) = '\0';

    //Imprimir a string concatenada
    k = 0;
    puts("String gerada:");
    while (*(cat + k) != '\0') {
        printf("%c", *(cat + k));
        k++;
    }
    puts("\n");

    free(v);
    free(v2);
    free(cat);

    return 0;
}