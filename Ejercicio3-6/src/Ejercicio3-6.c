/*
 ============================================================================
 Name        : Ejercicio3-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numero1;
float numDesc;

float realizarDesc(int numero1);

int main(void) {
	setbuf(stdout, NULL);

	do{
		printf("Ingrese un numero: ");
		scanf("%d", &numero1);
	}while(numero1 < 10 || numero1 > 100);

	printf("El numero ingresado con el descuento es: %f", realizarDesc(numero1));

	return EXIT_SUCCESS;
}

float realizarDesc(int numero1){
	numDesc = numero1 - ((float)numero1 * 5)/100;

	return numDesc;
}
