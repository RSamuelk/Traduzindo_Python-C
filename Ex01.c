#include <stdio.h>

int main(){
    int ano_atual = 2026, ano_nascimento;

    printf("Ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    
    printf("Idade: %d", (ano_atual- ano_nascimento));
    
    
    return 0;
}