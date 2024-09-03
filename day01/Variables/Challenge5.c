#include <stdio.h>

int main() {
    float temperature;

    printf("Veuillez entrer la temperature : ");
    scanf("%f", temperature);
    
    if(temperature < 0){
        printf("l'eau est solide");
    }else if(temperature >= 100)
    {
        printf("l'eau est gazeux");
    }else{
        printf("l'eau est liquide");
    }
    
    return 0;
}
