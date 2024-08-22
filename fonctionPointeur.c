#include <stdio.h>
#include <stdlib.h>

// Prototypage de la fonction en utilisant des pointeurs
int calculer(int *a, int *b);

int main()
{
    int n=0, m=0;
    /*
    
    Décrivons de façon imagez ce qui se passe.
    Qaund vous déclarez la varaible n, elle se trouve à une adresse donnée, par exemple 12543554566.
    Quand vous déclarez le pinteur *ptr1 = Null, c'est comme si vous avez créer une boite
    qui porte le nom ptr1 se trouvant à l'adresse 12543554566.
    Ainsi, ptr1=12543554566.

    */
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