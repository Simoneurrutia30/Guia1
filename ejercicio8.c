#include <stdio.h>
int main()
{
	float x;
	float ejercicio;
	
	printf("Igrese el valor de x:");
	scanf("%f", &x);
	ejercicio= (x*x*x)+2*(x*x)+(3*x)+5;
	printf("El resultado del ejercicio x³+2x²+3x+5 es: %.1f", ejercicio);

	return 0;
}
