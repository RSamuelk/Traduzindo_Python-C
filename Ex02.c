#include <stdio.h>

int main(){
    int num1, num2;
    printf("Dividendo: ");
    scanf("%d", &num1);
    printf("Divisor: ");
    scanf("%d", &num2);

    printf("Quonciente: %d \n", (num1/num2));
    
    float decimal; 

    decimal = (float) num1/ num2 - (int) num1 / num2;
    printf("Resto: %.1f \n", decimal);
    return 0;
}