#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAXIMO 10

int main()
{
    srand(time(NULL));

    int x[TAM];
    int y[TAM];
    int m[TAM][TAM];

    //Gerar os vetores
    puts("Vetor X:");
    for (unsigned char i = 0; i < TAM; i++) {
        *(x + i) = rand()%MAXIMO;
        printf("%d\n", *(x + i));
    }

    puts("\n");

    puts("Vetor Y:");
    for (unsigned char i = 0; i < TAM; i++) {
        *(y + i) = rand()%MAXIMO;
        printf("%d\n", *(y + i));
    }

    puts("\n");

    //Preencher a matriz com 0 em todos os valores para evitar lixo de memória
    for (unsigned char i = 0; i < TAM; i++) {
        for (unsigned char k = 0; k < TAM; k++) {
            m[i][k] = 0;
        }
    }

    //Processar os dados e preencher a matriz
    for (unsigned char i = 0; i < TAM; i++) {
        m[*(y + i)][*(x + i)] += 1;
    }

    //Imprimir a matriz
    for (unsigned char i = 0; i < TAM; i++) {
        for (unsigned char k = 0; k < TAM; k++) {
            printf("%2d ",(m[i][k]));
        }
        printf("\n");
    }

    return 0;
}