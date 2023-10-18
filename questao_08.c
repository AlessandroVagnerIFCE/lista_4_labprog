#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 84

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

int main()
{
    char *v = NULL;
    char x;
    char *p = &x;
    unsigned char c = 0; //Variável de controle
    unsigned int k = 0;


    //Criar o vetor
    v = (char*) malloc(TAM_MAX * sizeof(char));
    if (!v) {
        puts("Não há memória disponível");
        exit(1);
    }

    //Obter a string
    puts("Insira uma string:");
    fgets(v, TAM_MAX, stdin);

    puts("Insira um caractére:");
    scanf("%c", p);

    //Processar a string
    //Não inclui o \n
    while (*(v + k) != '\n') {
        if (*(v + k) == *p) {
            printf("%s%c%s", GREEN, *(v + k), RESET); //Destacar o caractére na string (SOMENTE EM SISTEMAS UNIX)
            c++; //c != 0 se o caractére estiver na string
        } else {
            printf("%c", *(v + k));
        }
        k++;
    }
    printf("\nO caractére%sfoi encontrado\n", c ? " " : " não ");

    free(v);

    return 0;
}