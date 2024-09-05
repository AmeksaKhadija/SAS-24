#include <stdio.h>


int Factor(int n){
    int factor=1;
    for(int i=1;i<=n;i++){
        factor = factor*i;
    }
    return factor;
}
int main(){
    int n;

    printf("entrer un nombre : ");
    scanf("%d", &n);
    printf("le factor de nombre %d est : %d",n, Factor(n));
    return 0;
}
