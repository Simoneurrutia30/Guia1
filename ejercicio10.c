
#include <stdio.h>

int main()
{
	int costo_de_boleto;
	int costo_de_kilometro;
	float kilometros;
	printf("Ingrese cantidad de kilometros por recorrer:\n");
	scanf("%f",&kilometro);
	printf("Ingrese valor por kilometro:\n");
	scanf("%d",&costo_kilometro);
	costo_de_boleto= kilometros*costo_de_kilometro;
	printf("El costo del boleto es:%d pesos",costo_de_boleto);
	return 0;
}

