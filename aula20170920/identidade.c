#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
double complex fazcomplexo(double a, double b, char c)
{
    if(c=='r'|| c == 'R')
        return a+ I*b;
    else
        return a*cos(b)+I*a*sin(b);
}
void mostracomplexo(double complex z,char c)
{
    if(c=='r'||c=='R')
        printf("%lf +I* %lf \n", creal(z),cimag(z));
    else
        printf("%lf /_%lf rad\n", cabs(z), carg(z));
}
int main()
{
    double complex z1, z2;
    double a, b,c ,d;
    printf("entre com um numero complexo z1 (real, imaginario:\n");
    scanf("%lf,%lf", &a, &b);
    z1=fazcomplexo(a, b, 'r');
    printf("entre com um numero complexo z1 (real, imaginario:\n");
    scanf("%lf,%lf", &c, &d);
    z2=fazcomplexo(c, d, 'r');
    printf("A soma desses numeros:\n");
    printf("A forma retangular:\n");
    mostracomplexo(z1+z2,'r');
    printf("A forma polar:\n");
    mostracomplexo(z1+z2,'P');
    return EXIT_SUCCESS;
}

