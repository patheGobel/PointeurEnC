#include <stdio.h>
#include <stdlib.h>

// Prototypage de la fonction en utilisant des pointeurs
int calculer(int *a, int *b);

int main()
{
    int n, m;
    int *ptr1 = &n, *ptr2 = &m;
    printf("Donner deux nombres\n");
    scanf("%d%d", &n, &m);
    printf("n=%d et m=%d\n", n, m);
    // Appel de la fonction avec des pointeurs
    calculer(&n, &m);
    printf("n=%d et m=%d\n", n, m);
    return 0;
}

int calculer(int *a, int *b)
{
    *a=0;
    *b=0;
}