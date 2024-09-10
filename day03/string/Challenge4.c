#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chaine1[50],chaine2[50];

    printf("entrer la chaine de caractere numero 1 :");
    scanf("%s",&chaine1);
    printf("entrer la chaine de caractere numero 2 :");
    scanf("%s",&chaine2);

    if(strcasecmp(chaine1,chaine2) == 0){
        printf("les chaines de caracteres sont egeaux .");
    }else{
        printf("les chaines sont differents .");
    }
    return 0;
}
