#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    for (int i = 1; i <+ n; i++) {
        printf("%d", 2 * i);
        if (i < n) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
