
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char T[30];
    char i;
    int compteur;
    printf("entrer un nom :");
    scanf("%s",&T[i]);
    compteur = 0;
    while(T[compteur] != '\0')
        compteur++;
    printf("la taille du nom est : %d",compteur);
    return 0;
}
