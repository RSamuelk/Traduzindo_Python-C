#include <stdio.h>

int main(){ 
    
    const float PI = 3.14159;
    float raio;
    
    printf("Raio: ");
    scanf("%f", &raio);
    
    printf("\nÁrea: %.2f \n", (PI * raio * raio));

    return 0;
}