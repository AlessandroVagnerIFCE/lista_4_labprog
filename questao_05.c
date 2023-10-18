#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 84

int main()
{
    char *v = NULL;
    unsigned int k = 0;
    unsigned int *p = &k;

    //Criar o vetor
    v = (char*) malloc(TAM_MAX * sizeof(char));
    if (!v) {
        puts("Não há memória disponível");
        exit(1);
    }

    //Obter a string
    puts("Insira uma string:");
    fgets(v, TAM_MAX, stdin);

    //Processar a string
    //Não inclui o \n na contagem
    while (*(v + *p) != '\n') {
        (*p)++;
    }

    printf("Tamanho da string: %u\n", *p);

    free(v);

    return 0;
}