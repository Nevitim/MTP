#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define n 256
struct fra
{
    char um[n];
    char dois[n];
    char tres[n];
    char quatro[n];
    char cinco[n];
};
void verifica(char tot[n])
{
    int v;
	for(v=0;tot[v]!='\0';v++)
	{
    if(isalpha(tot[v]))
    if(tot[v]>=65 && tot[v]<=90)
        tot[v]=tot[v]+32;
	}
}
int main()
{
char um[n];
char dois[n];
char tres[n];
char quatro[n];
char cinco[n];
int a, b, v;
printf("Entre com uma frase:\n");
fgets(um,n,stdin);
um[strlen(um)-1]='\0';
printf("Entre com uma frase:\n");
fgets(dois,n,stdin);
dois[strlen(dois)-1]='\0';
printf("Entre com uma frase:\n");
fgets(tres,n,stdin);
tres[strlen(tres)-1]='\0';
printf("Entre com uma frase:\n");
fgets(quatro,n,stdin);
quatro[strlen(quatro)-1]='\0';
printf("Entre com uma frase:\n");
fgets(cinco,n,stdin);
cinco[strlen(cinco)-1]='\0';
verifica(um);
verifica(dois);
verifica(tres);
verifica(quatro);
verifica(cinco);
for(a=0;

return EXIT_SUCCESS;
}
