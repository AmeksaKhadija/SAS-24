#include <stdio.h>
#include <stdlib.h>

int Pair(int a)
{
    if(a %2 == 0){
        printf("le nombre %d est pair",a);
    }else{
        printf("le nombre %d est impaire",a);
    }
}
int main()
{
    int n;
    printf("entrer un nombre : ");
    scanf("%d",&n);
    Pair(n);

    return 0;
}
