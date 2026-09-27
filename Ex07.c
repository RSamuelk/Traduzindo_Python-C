#include <stdio.h>

int main(){ 
    
    int segundos;
    
    printf("Total de segundos: ");
    scanf("%d", &segundos);
    printf("%dh %dmin %ds", segundos/3600, (segundos % 3600) / 60, segundos % 60);

    return 0;
}