/*
 ============================================================================
 Name        : Ejercicio3-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int numero;
int determinar(int numero);

int main(void) {
	setbuf(stdout, NULL);

	printf("Ingrese un numero para saber si es par o no: ");
	scanf("%d", &numero);

	if(determinar(numero) == 1){
		printf("El numero es par");
	}else{
		printf("El numero es no es par");
	}




	return EXIT_SUCCESS;
}

int determinar(int numero){
	if(numero % 2 == 0){
		return 1;
	}else{
		return 0;
	}
}
