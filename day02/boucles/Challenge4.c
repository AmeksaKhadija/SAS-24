#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("entrer le nombre n :");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("%d",2*i+1);
        if(i<n-1){
            printf(",");
        }
    }
    printf("\n");
    return 0;
}
