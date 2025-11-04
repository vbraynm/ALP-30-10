#include <stdio.h>
int main()
{
    char opcao;
    do{
        printf("Continuar?\n");
        scanf(" %c", &opcao);
    } while(opcao == 's' || opcao == 'S');
    
    printf("Saiu!\n");
}