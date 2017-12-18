#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i;
	float lal, add;
	double in, n, som;
	printf("Entre com um número:");
	scanf("%lf", &n);
	lal=(1/n);
	in=(1/n);
	som=0;
	add=0;
	for(i=0;i<727;i++)
	{
		som=som+lal;
		add=add+in;
	}
	printf("Resultado: %.15f \n", add);
	printf("Resultado mais preciso: %.15lf\n", som);
	return EXIT_SUCCESS;
}

