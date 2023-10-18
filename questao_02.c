#include <stdio.h>

int main()
{
    int x = 10;
    int y = 5;

    int *px = &x;
    int *py = &y;

    *px = *px ^ *py;
    *py = *px ^ *py;
    *px = *px ^ *py;

    printf("x = %d, y = %d\n", *px, *py);

    return 0;
}