#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256
int maiin()
{
    char frase[N];
    int i, m=0;
    printf("entre com a frase: \n");
    fgets(frase,N,stdin);
    for(i=0; frase[i]; i++)
        if(isalpha(frase[i]))
            m++;
    printf("%s", frase);
    return EXIT_SUCCESS;
}