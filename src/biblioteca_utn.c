/*
 * biblioteca_utn.c
 *
 *  Created on: 27 jun. 2022
 *      Author: marin
 */
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_utn.h"

void CargarVector_Generico(int numero[], int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
		printf("ingrese numero");
		scanf("%d",&numero[i]);
	}

}

void MostrarVector_Generico(int numero[],int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
		printf("%d \n",numero[i]);
	}
}

void AcumularNumeros_Generico(int numero[],int tam)
{
	int i;
	int acumulador;
	acumulador=0;

	for(i=0;i<tam;i++)
	{
		acumulador+=numero[i];
	}

	printf("la suma de los numeros es de %d",acumulador);
}

