#include<stdio.h>
int main ()
{
    float ladodoquadrado, areadoquadrado;
    printf("Entre com um lado do quadrado: ");
    scanf("%f",&ladodoquadrado);
    areadoquadrado=ladodoquadrado*ladodoquadrado;
    printf("Area do quadrado: %.2f\n", areadoquadrado);
    return 0;
}
