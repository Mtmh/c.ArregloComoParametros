#include <stdio.h>

void muestra (int p[], int t);

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int t = sizeof(a) / sizeof(int);// Cantidad de elementos

    muestra(a, t);



    return 0;
}

void muestra(int p[], int t)
{
    int i;
    for (i = 0; i < t; ++i)
         printf("%d", p[i]);
    printf("\n");
}
