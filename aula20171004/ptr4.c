#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int *ponteiro,*pontero,*ponteir;
    int i,nbytes, cont=0, oi;
    printf("-Entre com dois numeros: a,b\n");
    scanf("%d, %d", &nbytes, &oi);
    cont=nbytes+oi;
    ponteiro=&nbytes;
    printf("*End:%p=>%d(decimal)\n",ponteiro,nbytes,nbytes);
    pontero=&oi;
    printf("*End:%p=>%d(decimal)\n",pontero,oi,oi);
    ponteir=&cont;
    printf("*End:%p=>%d(decimal)\n",ponteir,cont,cont);
    return EXIT_SUCCESS;
}
