#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    double i, j=0, k=0, q=0, b=1, t=0;
    while(t==0)
{
    if(b>3)
         printf("\nPontuacao:\n %lf",j);
    printf("\nRodada:\n %1f",b);
    printf("\nDigite o limite: \n");
    scanf("%lf", & i);
    srand(time(0));
    int menor=1, maior=6;
    int y= menor + rand()%(maior-menor+1);
    int meno=1, maio=6;
    int w= meno + rand()%(maio-meno+1);
    int meor=1, maor=6;
    int z= meor + rand()%(maor-meor+1);
    k=y+w+z;
    printf("\nSorteio dos dados:\n %d\n %d\n %d\n", w, y, z);
    printf("\nSoma dos valores dos dados rodados:\n%lf\n", k);
    if(i<11)
    {
        j=11-k;
    }
    if(i>11)
    {
        q=i-10;
        if(q<=i)
            j=j+((i-k)/q)+1;
        else
            j=j-((w-i)*q);
    }
    printf("\nDigite 0 (zero) para jogar a proxima rodada");
    scanf("%lf", &t);
    b++;
}
    return 0;
}
