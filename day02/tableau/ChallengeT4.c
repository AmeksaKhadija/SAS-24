#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille ;
    int T[100];
    int i;
    int max;
    printf("saiser la taille du tableau : ");
    scanf("%d",&taille);
    for(int i=0; i<taille; i++)
    {
        printf("saisez les nombre correspind cette taille : ");
        scanf("%d",&T[i]);
        if (T[i]>max)
        {
            max =T[i];
        }
    }

    printf("le max est %d",max);
    return 0;
}
