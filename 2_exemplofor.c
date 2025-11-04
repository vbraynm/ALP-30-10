#include <stdio.h>
int main()
{
    float nota;
    float somatorio = 0;

    for(int i = 0; i < 5; i++){
        printf("Nota\n");
        scanf("%f", &nota);
        somatorio += nota;
    }
    float media = somatorio / 5;
    printf("Media: %.2f", media);
    return 0;
}