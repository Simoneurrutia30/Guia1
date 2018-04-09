#include <stdio.h>
int main ()
{
	int dia;
	float segundos;
	dia= 86400;
	printf("Ingrese cantidad de dias: \n");
	scanf("%i", &dia);
	segundos= dia*86400;
	printf("Lo equivalente en segundos es: %.2f", segundos);
	return 0;
}
