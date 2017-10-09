#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n 4
int main()
{
    int str[n]={0};
    char * varredura=(char*)str;
    int i=0;
    for(i=0;i<n;i++)
       {
           printf("Entre com um numero: \n");
            scanf("%i", &str[i]);
       }
    for (i=0;i<n; i++)
        printf( "End.:%p=>dado:(%s)\n",varredura+i,varredura[i]);
    printf("codigo:\n");
    for(i=0;i<n;i++)
        printf("%s", varredura[i]);
    printf("\n");
    return EXIT_SUCCESS;
}

