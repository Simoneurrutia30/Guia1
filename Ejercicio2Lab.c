#include <stdio.h>
int main()
{
	int grupo_de_amigos, precio_final, valor_cuenta,valor_en_partes_iguales;
	float iva;
	float propina;
	
	printf("Ingrese la cantidad de personas que va a comer: \n");
	scanf("%d", &grupo_de_amigos);
	printf("Cual es el valor de la cuenta: \n");
	scanf("%d", &valor_cuenta);
	iva= (valor_cuenta*0.19);
	propina= (valor_cuenta*0.10);
	precio_final= (valor_cuenta+iva+propina);
	valor_en_partes_iguales= (precio_final/grupo_de_amigos);
	printf("El valor a pagar de cada integrante del grupo es: %d", valor_en_partes_iguales);
	return 0;
}
	
