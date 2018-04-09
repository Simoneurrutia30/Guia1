#include <stdio.h>
int main()
{
	float galon;
	float precio;
	float cantidad_de_litro;
	galon= 3.785;
	printf("Ingrese cuantos galones de gasolina quiere:\n");
	scanf("%f", &galon);
	cantidad_de_litro= galon*3.785;
	printf("Lo equivalente en litros seria: %.2f",cantidad_de_litro);
	precio= cantidad_de_litro*820;
	printf("\n");
	printf("El precio de su compra es: $%.2f", precio);
	return 0;
}
	
