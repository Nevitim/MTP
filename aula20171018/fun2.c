#include<stdio.h>
#include<stdlib.h>
int soma(int num, int nume,int * pnum, int *pden)
{
    if(nume==0)
        return 0;
    else
    {
        *pnum=num/nume;
        *pden=num%nume;
        return 1;
    }
}
int main()
{
    int num, nume, den, deno, rep, pden, pnum;
    printf("Digite um numero :\n");
    scanf("%d", &num);
    printf("Digite outro numero:\n");
    scanf("%d", &nume);
    if(soma(num, nume, &pnum, &pden))
        printf("\nResposta:\n|Quoci|%d||\n|Resto|%d||\n",pnum,pden);
    else
        printf("___ERRO___");
    return EXIT_SUCCESS;
}
