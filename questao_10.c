#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAXIMO 10

int main()
{
    srand(time(NULL));

    int x[TAM];
    int f[MAXIMO];

    //Gerar o vetor
    puts("Vetor X:");
    for (unsigned char i = 0; i < TAM; i++) {
        *(x + i) = rand()%MAXIMO;
        printf("%d\n", *(x + i));
    }

    puts("\n");

    //Processar os dados e preencher o vetor F
    for (unsigned char i = 0; i < MAXIMO; i++) {
        *(f + i) = 0; //Evitar lixo de memória
        for (unsigned char k = 0; k < TAM; k++) {
            if (*(x + k) == i) {
                *(f + i) += 1;
            }
        }
    }

    //Imprimir F
    puts("Vetor F:");
    for (unsigned char i = 0; i < TAM; i++) {
        printf("%d\n", *(f + i));
    }

    return 0;
}