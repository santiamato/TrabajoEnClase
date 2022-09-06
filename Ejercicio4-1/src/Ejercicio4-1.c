/*
 ============================================================================
 Name        : Ejercicio4-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "pedirNumero.h"

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int factorial = 1;
	numero = pedirNumero();

	for(int i = 1; i <= numero; i++){
		factorial *= i;
	}

	printf("El Factorial de %d es: %d", numero, factorial);


	return EXIT_SUCCESS;
}
