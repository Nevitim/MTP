#include<stdio.h>

int main()
{
    int vet[4]={0,0,0,0},i,j,let;
    char *ptr;
    for(i=0,ptr=(char*)vet;i<4;i++)
    {
        printf("\nDigite quatro numeros:\n");
        scanf("%d",&vet[i]);
    }

        printf("Corresponde a:");
        printf("%s",ptr);



    }
