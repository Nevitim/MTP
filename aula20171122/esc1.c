#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    FILE * arq;
    char * rec;
    int i=0;
    rec=(char*)malloc(1*sizeof(char));
    printf("write one phrase:\n");
    arq=fopen("meutexto.txt","w");
    while(1)
        {
            fputc(char*(rec+i),FILE*arq);
            rec= (char *)realloc(rec, sizeof(char)*1);
            if(*(rec+i)==' '||*(rec+i)=='\n')
                break;
            i++;
        }
        *(rec+i)='\0';
            while(i>=0)
    {
        *(rec+i)= toupper(*(rec+i));
        i--;
    }
        fprintf(stdout,"***%s",rec);
        free(rec);
    return EXIT_SUCCESS;
}
