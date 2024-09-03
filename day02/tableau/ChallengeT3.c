#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille ;
    int T[100];
    int i,s;

    printf("saiser la taille du tableau : ");
    scanf("%d",&taille);
    for(int i=0; i<taille; i++)
    {
        printf("saisez les nombre correspind � cette taille : ");
        scanf("%d",&T[i]);
    }
    s=0;
    for(int i=0; i<taille; i++)
    {
        s = s + T[i];
    }
    printf("T[%d] = %d\n",i+1, s);
    return 0;
}
