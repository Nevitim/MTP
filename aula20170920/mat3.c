#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float x, a, b, c, aj;
    printf("um numero 'a' e uma base 'b' (a,b):\n");
    scanf("%f,%f", &a, &b);
    c=log(a)/log(b);
    printf("o lado eh; %f\n", c);
    return EXIT_SUCCESS;
}

