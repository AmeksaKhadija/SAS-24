#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille ;
    int T[100];
    printf("saiser la taille du tableau : ");
    scanf("%d",&taille);
    for(int i=0; i<taille; i++)
    {
        printf("saisez les nombre correspind à cette taille : ");
        scanf("%d",&T[i]);
    }
    for(int i=0; i<taille; i++)
        printf("T[%d] = %d\n",i+1,T[i]);

return 0;
}
