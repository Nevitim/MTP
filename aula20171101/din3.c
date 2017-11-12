#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define n 1000
#define m 1000
int main()
{
    char rec[n];
    int i;
    printf("write one phrase:\n");
    scanf("%s",&rec);
    for(i=0;i<n;i++)
        if(rec[i]==' ')
        {
            rec[i]='\0';
            break;
        }
        printf("***%s",rec);
    return EXIT_SUCCESS;
}
