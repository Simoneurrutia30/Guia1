
#include <stdio.h>

int main()
{
	int sueldo_base, ventas, sueldo_total;
	float comision;
	printf("Ingrese el suelo base:\n");
	scanf("%d",&sueldo_base);
	printf("Ingrese el numero de ventas:\n");
	scanf("%d",&ventas);
	comision= (ventas*7)/100;
	printf("La comision es de:%.3f",comision);
	sueldo_total= sueldo_base+comision;
	printf("\n");
	printf("El suelo total que recibe es: %d pesos",sueldo_total);
	return 0;
}

