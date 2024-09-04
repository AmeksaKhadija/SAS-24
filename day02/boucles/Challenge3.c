#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int somme = 0;

    printf("entrer le nombre n : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        somme += i;
    }

    printf("la somme des %d premiers nombre naturel est : %d",n,somme);
    return 0;
}
