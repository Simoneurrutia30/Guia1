#include <stdio.h>
int main ()
{
	int matricula;
	float nota1, nota2, nota3;
	float promedio;
	printf("Ingrese n° de matricula:");
	scanf("%d", &matricula);
	
	printf("Ingrese nota1:\n");
	scanf("%f", &nota1);
	printf("Ingrese nota2:\n");
	scanf("%f", &nota2);
	printf("Ingrese nota3:\n");
	scanf("%f", &nota3);
	
	promedio= (nota1+nota2+nota3)/3;
	
	printf("la matricula es:%i \n",matricula);
	printf(" el promedio es:%f \n",promedio);
	
	return 0;
	
}	
