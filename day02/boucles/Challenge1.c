#include <stdio.h>
#include <stdlib.h>

int main()
{
 int number,i;

    printf("entrer une nombre : ");
    scanf("%d",&number);

    for(i=1;i<11;i++){
        printf("%d = %d * %d\n",number,i,number*i);
    }    return 0;
}
