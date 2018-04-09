#include <stdio.h>
int main()
{
	float base; 
	float altura;
	float perimetro;
	float superficie;
	printf("Ingrese el valor de la base del rectangulo: \n");
	scanf("%f", &base);
	printf("Ingrese el valor de la altura rectangulo: \n");
	scanf("%f", &altura);
	superficie= base*altura;
	printf("El valor de la superficie del rectangulo es: %.1f", superficie);
	printf("\n");
	perimetro= 2*(base+altura);
	printf("El valor del perimetro del rectangulo es: %.1f", perimetro);
	return 0;
}
