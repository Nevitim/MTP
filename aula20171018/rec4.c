#include<stdio.h>
#include<stdlib.h>
#define g 10000
void soma(int A[], int n, int B[], int m)
{
    int i=0;
    for(;i<n && i<m;i++)
    if(A[i]==B[i])
        printf("%i",A[i]);
}
int main()
{
    double A[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0};
    double B[] = {0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625};
    int n = sizeof(A)/sizeof(double);
    soma(A,n,B,m);
    return EXIT_SUCCESS;
}

