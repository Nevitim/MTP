#include<stdio.h>
int main ()
{
    double base, altura, resposta;
    printf("Digite a medida da base:\n");
    scanf("%lf", & base);
    printf("Digite a medida da altura: \n");
    scanf("%lf", & altura);
    resposta=((base*altura)/2);
    printf("Resposta: %lf\n", resposta);
    return 0;
}
