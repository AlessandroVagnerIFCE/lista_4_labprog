#include <stdio.h>
#include <stdlib.h>

//OBS: alterar o tipo do vetor altera o salto no nº de um endereço para o outro
//O tamanho desse salto entre os endereços é sizeof(tipo do vetor)

int main()
{
    unsigned int tam;
    int *v = NULL;

    puts("Insira o tamanho do vetor:");
    scanf("%u", &tam);

    //Criar o vetor
    v = (int*) malloc(tam * sizeof(int));
    if (!v) {
        puts("Não há memória disponível");
        exit(1);
    }

    //Preencher o vetor
    for (unsigned int i = 0; i < tam; i++) {
        printf("Insira o valor de v[%u]:\n", i);
        scanf("%d", v+i);
    }

    //Imprimir o vetor
    puts("Vetor criado:");
    for (unsigned int k = 0; k < tam; k++) {
        printf("Valor: %d; Endereço: %p\n", *(v+k), v+k);
    }

    free(v);

    return 0;
}