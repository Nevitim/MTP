#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    double numero, i;
    double fatorial;
    printf("Digite um numero: ");
    scanf("%lf", &numero);
    getchar();
    fatorial=1;
    for(i=0;i<numero;i++)
        fatorial=fatorial*(numero-i);
    printf("%.1lf! = %lf\n", numero, fatorial);
    return 0;
}
