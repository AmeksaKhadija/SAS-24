
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine1[50],chaine2[50],result[50];
        printf("donner la valeur de chaine1 : ");
        scanf("%s",&chaine1);
        printf("donner la valeur de chaine2 : ");
        scanf("%s",&chaine2);

        strcpy(result,chaine1);
        strcat(result,chaine2);

        printf("la chaine concaténée est :%s",result);

    return 0;
}
