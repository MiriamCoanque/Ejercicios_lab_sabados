/*
 ============================================================================
 Name        : Ejercicio3Sabado.c
 Author      : Miriam Coanque
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Crear una función que le solicite al usuario el ingreso de un numero y lo retorne ->significa que lo mande
                                                                                    al main, es decir mostrar.*/

#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void); //como no hare calculo o algo, va void. NO recibe nada. PROTOTIPO

int main(void)
{
	setbuf(stdout,NULL);
	int numero;


	numero= pedirNumero(); // va vacio porque no retorna valores. LLAMADA
	printf("el numero es: %d",numero);



	return EXIT_SUCCESS;
}
int pedirNumero(void) //DESARROLLLO
{
	int retorno;

	printf("ingrese un numero: ");
	scanf("%d", &retorno);

	return retorno;

}
