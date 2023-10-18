#include <stdio.h>

int main()
{
    int x = 10;
    int y = 5;
    int s;

    int *px = &x;
    int *py = &y;
    int *ps = &s;

    *ps = *px + *py;

    printf("%d + %d = %d\n", *px, *py, *ps);
    printf("Endereço da soma: %p\n", ps);

    return 0;
}