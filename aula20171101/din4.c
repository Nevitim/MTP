#include<stdio.h>
#include<stdlib.h>
#define N 200


struct ponto
{
int x;
int y;
};

struct poligono
{
int vertices;
struct ponto colecao[N];
};

struct poligono Preenche(struct poligono a)
{
int i;
printf("Digite a quantidade de vertices: ");
scanf("%d", &a.vertices);
int c=a.vertices;
printf("Digite a colecao de pontos na forma (x,y): \n\n");
for(i=0; i<c; i++)
{
scanf("%d,%d", &a.colecao[i].x, &a.colecao[i].y);
}
return a;
}
int main()
{
int const p = 2;
double coordenadas[p];
int i=0,j,k=0,area=0;
struct poligono a;
a=Preenche(a);
k=1;
for(j=0; j<a.vertices-1; j++)
{
area+=(a.colecao[j].x * a.colecao[k].y - a.colecao[k].x*a.colecao[j].y);
k++;
}
printf("\n A area do poligono eh: %d ", area/2);
coordenadas[0]=0;
coordenadas[1]=0;
for(i=0; i<1; i++){
for(j=0; j<a.vertices; j++)
{
coordenadas[0]= coordenadas[0]+a.colecao[j].x;
coordenadas[1]= coordenadas[1]+a.colecao[j].y;
}
coordenadas[0]=coordenadas[0]/a.vertices;
coordenadas[1]=coordenadas[1]/a.vertices;
}

printf("\n Coordenadas do centroide(x,y): \n\n");
for(i=0; i<2; i++)
{
 printf("%lf ", coordenadas[i]);
}
return 0;
}
