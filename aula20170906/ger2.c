#include<stdio.h>
int main ()
{
    int i, j, k=0;
    printf("Digite um numero: \n");
    scanf("%d", & i);
    for(j=1;j<i-1;j++)
    {
        if(i%j==0)
            k=k+j;
    }
    if(k==i)
        printf("Numero perfeito!");
    else
        printf("Nao eh perfeito!");
    return 0;
}
