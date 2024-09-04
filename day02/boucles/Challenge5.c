#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,expo;
    int result=0;

    printf("entrer la base :");
    scanf("%d",&base);
    printf("entrer expo :");
    scanf("%d",&expo);

    for(int i=0;i<expo;i++){
        result *= base;
    }
    printf("la puissance de base %d de expo %d est %d",base,expo,result);
    return 0;
}
