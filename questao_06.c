#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 84

int main()
{
    char *v = NULL;
    char *copia = NULL;
    unsigned int k = 0;

    //Criar os vetores
    v = (char*) malloc(TAM_MAX * sizeof(char));
    if (!v) {
        puts("Não há memória disponível");
        exit(1);
    }

    copia = (char*) malloc(TAM_MAX * sizeof(char));
    if (!copia) {
        puts("Não há memória disponível");
        exit(1);
    }

    //Obter a string
    puts("Insira uma string:");
    fgets(v, TAM_MAX, stdin);
    puts("\n");

    //Copiar a string
    //Remove o '\n' e troca por '\0'
    while (*(v + k) != '\n') {
        *(copia + k) = *(v + k);
        k++;
    }
    *(copia + k) = *(v + k) = '\0'; //Talvez nesse caso poderia deixar o '\n' para facilitar a leitura

    //Imprimir as duas strings
    k = 0;
    printf("Original (Endereço %p):\n", v);
    while (*(v + k) != '\0') {
        printf("%c", *(v + k));
        k++;
    }
    puts("\n");

    k = 0;
    printf("Cópia (Endereço %p):\n", copia);
    while (*(copia + k) != '\0') {
        printf("%c", *(copia + k));
        k++;
    }
    puts("\n");

    free(v);
    free(copia);

    return 0;
}