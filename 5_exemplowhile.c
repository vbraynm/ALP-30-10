#include <stdio.h>
int main()
{
    char opcao;

    printf("Continuar?\n");
    scanf(" %c", &opcao);

    while(opcao == 's' || opcao == 'S'){
        printf("Continuar?\n");
        scanf(" %c", &opcao);
    }
    printf("Saiu!\n");
}