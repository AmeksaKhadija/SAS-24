#include <stdio.h>

int main() {
    double temperatureCelsius,temperatureKelvin;

    printf("Veuillez entrer la température en Celsius : ");
    scanf("%lf", &temperatureCelsius);

    temperatureKelvin = temperatureCelsius + 273.15;

    printf("La température en Kelvin est : %.2lf K\n", temperatureKelvin);

    return 0;
}
