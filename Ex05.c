#include <stdio.h>

int main(){ 
    
    float base, altura;
    
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ", &altura);
    scanf("%f", &altura);

    printf("\nÁrea: %.2f \n", base*altura);
    printf("Perímetro: %.2f\n", 2 * (base + altura));
    
    return 0;
}