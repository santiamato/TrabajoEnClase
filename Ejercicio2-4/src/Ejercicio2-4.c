/*
 ============================================================================
 Name        : Ejercicio2-4.c
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
	int menorNumero;
	int mayorPar = 0;
	int productoNegativos = 1;
	int mayorNumero = 0;
	int posicionMayor = 0;

	for(int i = 0; i < 8; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numero);

		if(numero < menorNumero){
			menorNumero = numero;
		}

		if(numero % 2 == 0 && numero > mayorPar){
			mayorPar = numero;
		}

		if(numero < 1){
			productoNegativos *= numero;
		}
		if(numero > mayorNumero){
			mayorNumero = numero;
			posicionMayor = i;
		}
	}

	printf("El menor numero es: %d  \n", menorNumero);
	printf("El mayor numero par es: %d  \n", mayorPar);
	printf("El producto de los negativos es: %d  \n", productoNegativos);
	printf("El mayor numero es: %d y su posicion es: %d \n", mayorNumero, posicionMayor);





	return EXIT_SUCCESS;
}
