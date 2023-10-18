#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAXIMO 100
#define MINIMO 0

//Só para facilitar a leitura (OBS: só funciona em sistemas Unix)
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

//Recebe o tamanho de um vetor e o endereço do primeiro elemento
//Modifica o vetor recebido e o ordena por bubble sort
void ordenar_bolha(int, int*);

int main()
{
    srand(time(NULL));

    int x[TAM];

    //Gerar vetor
    for (unsigned char i = 0; i < TAM; i++) {
        *(x + i) = (rand()%MAXIMO) + MINIMO;
        printf("%d\n", *(x + i));
    }

    puts("\n");

    ordenar_bolha(TAM, x);

    //Imprimir o vetor
    for (unsigned char k = 0; k < TAM; k++) {
        printf("%s%d%s\n", GREEN, *(x + k), RESET);
    }


    return 0;
}

void ordenar_bolha(int n, int *v)
{
    puts("Ordenado por bubble sort");
    for (unsigned char i = 0; i < n-1; i++) {
        for (unsigned char k = 0; k < n-1; k++) {
            if (*(v+k) > *(v+(k+1))) {
                *(v+k) = *(v+k) ^ *(v+(k+1));
                *(v+(k+1)) = *(v+k) ^ *(v+(k+1));
                *(v+k) = *(v+k) ^ *(v+(k+1));
            }
        }
    }
}