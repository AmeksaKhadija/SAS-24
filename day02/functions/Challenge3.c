#include <stdio.h>
#include <stdlib.h>

int Max(int number1 ,int number2){
    if(number1>number2){
        return number1;
    }else{
        return number2;
    }
}
int main()
{
int result;
    int number1,number2;
    printf("entrer le nomber 1 :");
    scanf("%d",&number1);
    printf("entrer le nombre 2 :");
    scanf("%d",&number2);

   result = Max(number1,number2);
   printf("le max est : %d",result);

    return 0;
}
