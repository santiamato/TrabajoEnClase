/*
 ============================================================================
 Name        : Ejercicio3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int mostrarNumero(int numero);

int main(void) {
	setbuf(stdout, NULL);


	mostrarNumero(1);





	return EXIT_SUCCESS;
}

int mostrarNumero(int numero) {
	printf("El numero ingresado es %d", numero);

	return numero;
}
