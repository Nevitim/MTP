#include<stdio.h>
int main ()
{
    int potencia, base, tes=0, nois=1;
    printf("Entre com uma base: ");
    scanf("%d", & base);
    printf("Entre com uma potencia; ");
    scanf("%d", & potencia);
    for(tes=0;tes<potencia;tes++)
        nois=nois*base;
    printf("resultado: %d\n", nois);
    return 0;
}
