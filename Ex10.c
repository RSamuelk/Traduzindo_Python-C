#include <stdio.h>

int main(){ 
    
    char n;
    printf("Um caractere: ");
    scanf("%c", &n);
    
    printf("Código ASCII de '%c': %d", n, n);
    
    return 0;
}