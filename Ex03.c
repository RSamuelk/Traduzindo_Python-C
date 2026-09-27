#include <stdio.h>

int main(){
    float media,n1, n2, n3;

    printf("Digite três notas: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    
    media = (n1+n2+n3)/3;
    printf("\nMédia: %.2f", media);   
    
    
    return 0;
}