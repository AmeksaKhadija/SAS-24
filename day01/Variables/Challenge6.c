#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;

    printf("entrer le nombre a :");
    scanf("%f",&a);
KH:
    printf("entrer le nombre b :");
    scanf("%f",&b);
    printf("a+b est :%2f\n",a+b);
    printf("a-b est :%2f\n",a-b);
    printf("a*b est :%2f\n",a*b);

    if(b!= 0)
    {
        printf("a/b est :%2f\n",a/b);
    }
    else
    {
        printf("erreur\n");
        goto KH;
    }


    return 0;
}
