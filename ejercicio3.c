#include <stdio.h>
int main()
{
	float cateto1; 
	float cateto2;
	float a, b, hipotenusa;
	
	printf("Ingrese el valor del cateto1: \n");
	scanf("%f", &cateto1);
	printf("Ingrese el valor del cateto2: \n");
	scanf("%f", &cateto2);
	a= cateto1*cateto1;
	b= cateto2*cateto2;
	hipotenusa= a+b;
	printf("El valor de la hipotenusa es: raiz de %.2f",hipotenusa);
	return 0;
}
	
