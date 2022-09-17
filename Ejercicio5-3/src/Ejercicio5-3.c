/*
 ============================================================================
 Name        : Ejercicio5-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "retornarMax.h"

int main(void) {
	setbuf(stdout, NULL);

	int punteroValor;
	int array[5];
	int control;

	for(int i = 0; i < 5; i++){
		printf("Ingrese un numero para el array: \n");
		scanf("%d", &array[i]);
	}
	control = retornarMax(array, &punteroValor);
	if(control == 0){
		printf("El mayor valor en el array es: %d", punteroValor);
	}

	return EXIT_SUCCESS;
}


