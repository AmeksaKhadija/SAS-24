#include <stdio.h>
#include <stdlib.h>

int Produit(int number1 ,int number2){
    printf("la somme de %d x %d est %d:",number1,number2,number1*number2);
        return number1+number2;
    }

int main()
{

    int number1,number2,result;
    printf("entrer le nomber 1 :");
    scanf("%d",&number1);
    printf("entrer le nombre 2 :");
    scanf("%d",&number2);

   Produit(number1,number2);

    return 0;
}
