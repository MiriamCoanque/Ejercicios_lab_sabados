/*
 ============================================================================
 Name        : Ejercicio2Sabado.c
 Author      : Miriam Coanque
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
1.  Se ingresan 5 importes,
y pais de origen ('C' para China, 'U' para Uruguay o 'P' para Paraguay).
Calcular y mostrar:
a.  Mínimo importe con su pais
c.  Promedio importe
d.  Cantidad de productos de China (c)
e.  Sobre el mínimo encontrado aplicar un descuento del 10% a dicho importe.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int importe;
	char pais;
	char paisMinImporte;
	int importeMin;
	int contadorChina;
	int banderaMinImporte;
	int acumuladorImporte;
	float promedioImporte;
	int i;
	float descuento;
	float importeConDescuento;



	contadorChina=0;
	banderaMinImporte=0;
	acumuladorImporte=0;


	for(i=0; i<5; i++)
	{
		printf("ingrese el importe: ");
		scanf("%d", &importe);

		printf("ingrese pais de origen: ");
		fflush(stdin);
		scanf("%c", &pais);

		while(pais!='c' && pais!='u' && pais!='p')
		{
			printf("error");
		}

		acumuladorImporte+=importe;

		if(importe<importeMin || banderaMinImporte==0)
		{
			importeMin=importe;
			paisMinImporte=pais;
			banderaMinImporte=1;

		}
		if(pais=='c')
		{
			contadorChina++;
		}

		if(importeMin)
		{
			descuento=0.10;

		}
		importeConDescuento=importeMin-(importeMin*descuento);




	}
	promedioImporte=(float)acumuladorImporte/5;
	printf("el importe minimo es: %d y su pais: %c\n",importeMin,paisMinImporte);
	printf("el promedio de importe es: %.2f\n",promedioImporte);
	printf("la cantidad de productos de china es: %d\n",contadorChina);
	printf("el importe minimo con descuento es: %.2f\n", importeConDescuento);


	return EXIT_SUCCESS;
}
