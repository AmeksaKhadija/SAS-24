#include <stdio.h>

int main() {
    float distanceKM;
    int distanceyard;

    printf("Veuillez entrer la distance en KM : ");
    scanf("%d", &distanceKM);

    distanceyard = distanceKM * 1093.61;

    printf("La distance en yards est : %f \n", distanceyard);

    return 0;
}
