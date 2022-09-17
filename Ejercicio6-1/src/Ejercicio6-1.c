/*
 ============================================================================
 Name        : Ejercicio6-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int intercambioValores(int *a, int *b);

int main(void) {
	setbuf(stdout, NULL);

	int a;
	int b;
	int control;

	printf("ingrese un numero para la variable A: ");
	scanf("%d", &a);
	printf("ingrese un numero para la variable B: ");
	scanf("%d", &b);

	control = intercambioValores(&a, &b);

	if(control == 0){
		printf("Los valores fueron intercambiados A = %d y B = %d", a, b);
	}

	return EXIT_SUCCESS;
}

int intercambioValores(int *a, int *b){
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;

	return 0;
}
