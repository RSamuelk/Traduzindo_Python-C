#include <stdio.h>

int main(){ 
    
    float celsius_temp, fahrenheit_temp;
    
    printf("Celsius: ");
    scanf("%f", &celsius_temp);
    fahrenheit_temp = (celsius_temp * 9 / 5) + 32;
    printf("Fahrenheit: %.1f", fahrenheit_temp);
    
    return 0;
}