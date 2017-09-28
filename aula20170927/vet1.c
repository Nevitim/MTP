#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<time.h>
#define n 10000
int main()
{
srand(time(0));
int numeros[n];
int i, maximo;
float media=0;
printf("Entre com um numero maximo a ser sorteado:\n");
scanf("%i", &maximo);
for(i=0;i<n;i++)
{
    numeros[i]=rand()%(maximo+1);
    media+=numeros[i];
}
media/=n;
printf("A media dos numeros eh:%f\n",media);
return EXIT_SUCCESS;
}
