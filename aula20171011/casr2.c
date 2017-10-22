#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void printar(int l, int c)
{
    char olhaessamerda[] = { ": $ # $ : 4 b . ' :. : $ # $: 4b. ':."};
    int i=0, j=0, n=0;
    for(;i<l;i++)
    {
        printf("\n");
        for(;j<c;j++)
        {
            n=rand()%38;
            printf("%s", olhaessamerda[n]);
        }
    }
    printf("\n");
}

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Portuguese");
    int c=0, l=0;
    printf("entre com o numero de linhas e colunas (l,c): ");
    scanf("%d,%d", &l, &c);
    getchar();
    printar(l,c);
    return EXIT_SUCCESS;
}
