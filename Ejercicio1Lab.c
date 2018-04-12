/*
 * 
 * 
 * 
 * 


*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int candidato1=0,candidato2=0,candidato3=0;
	int voto, nulo=0;
	int porcentaje1, porcentaje2, porcentaje3;
	char terminar= 'v';
	int total_de_votos;
	printf("Eleccion de presidente \n");
	while( terminar!= 'f'){
	printf("Vote por uno de los siguientes candidatos: \n");
	printf("Ingrese 1 si elije el candidato1 \n");
	printf("Ingrese 2 si elije el candidato2 \n");
	printf("Ingrese 3 si elije el candidato3 \n");
	scanf("%d", &voto);
	system("clear");
	
	
	switch(voto){
		case 1:
		printf("La cantidad de votos para el candidato1 es: \n");
			candidato1++;
		break;
		case 2:
		printf("La cantidad de votos para el candidato2 es: \n");
			candidato2++;
		break;
		case 3:
		printf("La cantidad de votos para el candidato3 es: \n");
			candidato3++;
		break;
		default:
		printf("La opcion ingresada no es correcta \n");
			nulo++;
	} 
	printf("Ingrese f para terminar: \n");
	scanf("%c", &terminar);
	}
	total_de_votos= (candidato1+candidato2+candidato3+nulo);
	printf("EL total de votos es : %d \n", total_de_votos);
	printf("El total de votos del candidato1: %d \n", candidato1);
	printf("El total de votos del candidato2: %d \n", candidato2);
	printf("El total de votos del candidato3: %d \n", candidato3);
	printf("El total de votos nulos : %d \n", nulo);
	
	if(candidato1>candidato2 && candidato1>candidato3){
	printf("El candidato1 es el ganador \n");
	}
	else if(candidato2>candidato1 && candidato2>candidato3){
		printf("El candidato2 es el ganador \n");
	}
	else if(candidato3>candidato1 && candidato3>candidato2){
		printf("El candidato3 es el ganador \n");
	}
	porcentaje1= (candidato1/total_de_votos)*100;
	printf("El porcentaje del candidato1: %d \n", porcentaje1);
	porcentaje2= (candidato2/total_de_votos)*100;
	printf("El porcentaje del candidato2: %d \n", porcentaje2);
	porcentaje3= (candidato3/total_de_votos)*100;
	printf("El porcentaje del candidato3: %d \n", porcentaje3);
	return 0;
}
		
		
	
