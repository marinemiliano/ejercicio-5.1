/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

Ejercicio 5-1:
Pedir el ingreso de 5 números. Mostrarlos y
calcular y mostrar la sumatoria de los mismos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_utn.h"
#define T 5

int main(void)
{
	setbuf(stdout,NULL);

	int numero[T];

	CargarVector_Generico(numero, T);
	MostrarVector_Generico(numero,T);
	AcumularNumeros_Generico(numero,T);

	/*numero[0]=29;
	numero[3]=5;
	numero[5]=1;
	printf("%d, %d, %d",numero[0],numero[3],numero[5]);  */
	return 0;
}



