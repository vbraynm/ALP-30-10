#include <stdio.h>
int main()
{
    char sair;
    while(sair != 's' && sair != 'S'){
        printf("Sair?\n");
        scanf(" %c", &sair);
    }
    printf("Saiu!\n");
}