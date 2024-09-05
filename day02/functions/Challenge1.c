#include <stdio.h>
#include <stdlib.h>

int addition(int number1 ,int number2){
    printf("la somme de %d + %d est %d:",number1,number2,number1+number2);
        return true;
    }

int main()
{

    int number1,number2,result;
    printf("entrer le nomber 1 :");
    scanf("%d",&number1);
    printf("entrer le nombre 2 :");
    scanf("%d",&number2);

   addition(number1,number2);
   // result = addition(number1,number2);


    return 0;
}
