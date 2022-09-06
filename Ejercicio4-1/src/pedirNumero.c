/*
 * pedirNumero.c
 *
 *  Created on: 3 sep. 2022
 *      Author: santi
 */
#include <stdio.h>
#include <stdlib.h>

int pedirNumero(){
	int numero;
	printf("Ingrese el numero para saber su factorial: ");
	scanf("%d", &numero);
	return numero;
}
