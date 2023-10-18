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
    unsigned char r;

    //Gerar os vetores
    puts("Vetor X:");
    for (unsigned char i = 0; i < TAM; i++) {
        *(x + i) = rand()%MAXIMO;
        printf("%d\n", *(x + i));
    }

    puts("\n");

    puts("Vetor Y:");
    for (unsigned char i = 0; i < TAM; i++) {
        r = rand()%10 + 1; //Vai de 1 até 10

        if (r > 0 && r <= 3) {
            *(y + i) = *(x + i);
        } else if (r > 3 && r <= 5) {
            *(y + i) = *(x + i) - 1;
        } else if (r > 5 && r <= 7) {
            *(y + i) = *(x + i) + 1;
        } else if (r > 7 && r <= 9) {
            *(y + i) = *(x + i) - 2;
        } else if (r > 9 && r <= 10) {
            *(y + i) = *(x + i) + 2;
        }

        //Caso o valor de Y esteja fora da faixa
        if (*(y + i) < 0) {
            *(y + i) = 0;
        } else if (*(y + i) >= MAXIMO) {
            *(y + i) = MAXIMO-1;
        }

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