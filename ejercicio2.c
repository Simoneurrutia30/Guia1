#include <stdio.h>
int main()
{
	int numero;
	int cuadrado;
	int cubo;
	
	printf("Ingrese un numero:");
	scanf("%d", &numero);
	cuadrado= numero*numero;
	cubo= numero*numero*numero;
	printf("El cuadrado del numero es: %d", cuadrado);
	printf("\n");
	printf("El cubo del numero es: %d", cubo);
	return 0;
}
