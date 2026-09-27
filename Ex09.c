#include <stdio.h>

int main(){ 
    
    int n;
    printf("Um inteiro: ");
    scanf("%d", &n);
    
    printf("\nPar e Positivo? %d", (n % 2 == 0) && (n > 0));
    return 0;
}