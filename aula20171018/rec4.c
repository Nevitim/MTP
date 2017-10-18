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
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
    soma(A,n,B,m);
    return EXIT_SUCCESS;
}

