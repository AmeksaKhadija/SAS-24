#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille ;
    int T[100];
    int i,f,resultat;

    printf("saiser la taille du tableau : ");
    scanf("%d",&taille);
    for(int i=0; i<taille; i++)
    {
        printf("saisez les nombre correspond cette taille : ");
        scanf("%d",&T[i]);
    }
    printf("saiser un facteur : ");
    scanf("%d",&f);
    for(int i=0; i<taille; i++)
    {
        resultat = T[i] * f;
        printf("T[%d] = %d x %d = %d\n",i+1,f,T[i],resultat);
    }
        return 0;
}
