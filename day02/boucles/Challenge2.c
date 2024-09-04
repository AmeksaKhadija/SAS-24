#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int f=1;
    printf("entrer n : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        f = f * i;
    }
    printf("%d!=%d",n,f);

     return 0;
}
