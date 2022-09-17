/*
 ============================================================================
 Name        : Ejercicio5-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);

	int array[10];

	for(int i = 0; i < 10; i++){
		do{
			printf("Ingrese un numero para el array: \n");
			scanf("%d", &array[i]);
		}while(array[i] < -100 || array[i] > 100);
	}

	devolverCantNegativos(array);
	sumatoriaImpares(array);
	devolverMayorPar(array);

	for(int i = 0; i < 10; i++){
		printf("Numero ingresado: %d \n", array[i]);
	}

	for(int i = 0; i < 10; i++){
		if(array[i] > 15){
			printf("El numero %d es mayor a 15 \n", array[i]);
		}
	}

	for(int i = 0; i < 10; i++){
		if(array[i] % 2 != 0){
			printf("El numero de la posicion %d es impar \n", i);
		}
	}

	return EXIT_SUCCESS;
}

