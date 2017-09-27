#include<stdio.h>
int main()
{
int num[10]={0};
int aux, i, troca, l;
for(i=0; i<10; i++)
{
printf("Digite o %i numero:\n", i+1);
scanf("%i", &num[i]);
}
for(i=0, l=9;i<=5;i++,l--)
{
    aux=num[i];
    num[i]=num[l];
    num[l]=aux;
}
for(i=0;i<10;i++)
     printf("Nova versao:%i\n", num[i]);
return 0;
}
