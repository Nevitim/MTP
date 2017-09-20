#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float x, a, b, c, aj;
    printf("Digite os lados (a,b):\n");
    scanf("%f,%f", &a, &b);
    printf("digite ao angulo em radianos (x):\n");
    scanf("%f", &x);
    aj=x;
    c=sqrt(pow(a,2)+pow(b,2)-2*a*b*cos(aj));
    printf("o lado eh; %f\n", c);
    return EXIT_SUCCESS;
}

