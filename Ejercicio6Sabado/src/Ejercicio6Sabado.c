/*
 ============================================================================
 Name        : Ejercicio6Sabado.c
 Author      : Miriam Coanque
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Realizar un programa que permita el ingreso de 10 números enteros.
Determinar:
El promedio de los positivos
La cantidad de ceros
Del menor de los negativos la suma de los antecesores de ese valor (frenar en cero).*/

#include <stdio.h>
#include <stdlib.h>
int ingresarNumero(void);//prototipo1


int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int i;
	int contadorCeros;
	int contadorNumPositivos;
	int acumuladorPositivos;
	float promedio;

	contadorCeros=0;
	contadorNumPositivos=0;
	acumuladorPositivos=0;
	for(i=0; i<10; i++)
	{
		numero=ingresarNumero(); //llamada1

			if(numero==0)
			{
				contadorCeros++;
			}



				if(numero>0)
				{
					contadorNumPositivos++;
					acumuladorPositivos+=numero;
				}




	}
	promedio=(float)acumuladorPositivos/contadorNumPositivos;


	printf("la cantidad de ceros es: %d", contadorCeros);




	printf("\n el promedio de los positivos es: %.2f", promedio);



	return EXIT_SUCCESS;
}

int ingresarNumero(void)  //desarrollo1
{
	int numeroA;

	printf("ingrese un numero: ");
	scanf("%d", &numeroA);

	return numeroA;

}


