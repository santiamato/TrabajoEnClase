/*
 ============================================================================
 Name        : Ejercicio2-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	if(numero % 2 == 0){
		printf("El numero %d es par", numero);
	}else{
		printf("El numero %d no es par", numero);
	}





	return EXIT_SUCCESS;
}
