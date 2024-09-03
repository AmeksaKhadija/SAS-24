#include <stdio.h>

int main() {
    int vitessKH,vitessMS;

    printf("Veuillez entrer la vitesse en kilomètres par heure (km/h) : ");
    scanf("%d", &vitessKH);

    vitessMS = vitessKH * 0.27778;

    printf("la vitesse en mètres par seconde (m/s) est: %d \n", vitessMS);

    return 0;
}
