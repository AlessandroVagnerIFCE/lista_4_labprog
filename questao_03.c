#include <stdio.h>

int main()
{
    int x, menor;

    int *px = &x;
    int *pmenor = &menor;

    puts("Insira um valor inteiro:");
    scanf("%d", px);

    *pmenor = *px;

    //Condição de saída: digitar 0
    while(*px) {
        printf("O menor valor é: %d\n", *pmenor);
        puts("Insira um valor inteiro:");
        scanf("%d", px);
        if (*px < *pmenor) {
            *pmenor = *px;
        }
    }

    return 0;
}