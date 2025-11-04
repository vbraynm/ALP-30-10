#include <stdio.h>
int main()
{
    int inicio = 10;
    int fim = 30;
    int incremento = 2;
    
    for (int i = inicio; i < fim; i+=incremento)
    {
        printf("%i\n", i);
    }
    return 0;
}