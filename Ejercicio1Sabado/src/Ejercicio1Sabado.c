/*
 ============================================================================
 Name        : Ejercicio1Sabado.c
 Author      : Miriam Coanque
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*se ingresan 10 numeros y 10 letras.
se necesita saber:
a) promedio de numeros
b) cantidad de vocales (cuantas a, cuantas b....)
c) de la letra a, el valor mas grande
d) el factor de todos los numeros ingresados*/

#include <stdio.h>
#include <stdlib.h>
#define T 5

int main(void)

{
	setbuf(stdout,NULL);

	int numero;
	int numeroMayor;
	char letra;
	int acumulador;
	float promedio;
	int i;
	int contadorA;
	int contadorE;
	int contadorI;
	int contadorO;
	int contadorU;
	int banderaMayorA;
	int factor;

	acumulador=0;
	contadorA=0;
	contadorE=0;
	contadorI=0;
	contadorO=0;
	contadorU=0;
	banderaMayorA=0;
	factor=1;

	for(i=0; i<T; i++)
	{
		printf("ingrese un numero: ");
		scanf("%d", &numero);

		printf("ingrese una letra: ");
		fflush(stdin);
		scanf("%c", &letra);

		acumulador+=numero;

		switch(letra)
		{
			case 'a':
				contadorA++;
				if(numero>numeroMayor || banderaMayorA==0)
				{
					numeroMayor=numero;
					banderaMayorA=1;
				}
			break;

			case 'e':
				contadorE++;
			break;

			case 'i':
				contadorI++;
			break;

			case 'o':
				contadorO++;
			break;

			case 'u':
				contadorU++;
			break;



		}
		factor=factor*numero;


	}
	promedio=(float)acumulador/T;
	printf("el promedio es: %.2f\n", promedio);
	printf("se ingresaron: %d letras A \n", contadorA);
	printf("se ingresaron: %d letras E \n", contadorE);
	printf("se ingresaron: %d letras I \n", contadorI);
	printf("se ingresaron: %d letras O \n", contadorO);
	printf("se ingresaron: %d letras U \n", contadorU);
	if(contadorA>0)
	{
		printf("el valor mas grande de A es: %d\n", numeroMayor);
	}
	else
	{
		printf("no se ingresaron letras A");

	}
	printf("el factor es: %d", factor);




	return EXIT_SUCCESS;
}
