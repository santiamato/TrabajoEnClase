/*
 ============================================================================
 Name        : Ejercicio3-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numero;

int mostrarNumero(int numero);
float retornarNumero();

int main(void) {
	setbuf(stdout, NULL);

	printf("Ingrese un numero mayor a 0: ");
	scanf("%d", &numero);
	mostrarNumero(numero);

	retornarNumero(3,3);

	return EXIT_SUCCESS;
}


int mostrarNumero(int numero) {
	if(numero > 0){
		printf("El numero ingresado es %d y es mayor a 0 \n", numero);
	}else{
		printf("El numero ingresado no es mayor a 0 \n");
	}

	fflush(stdin);
	return numero;
}

float retornarNumero() {
	float numero;
	do{
		printf("Ingrese un num flotante mayor a 0: ");
		scanf("%f", &numero);
	}while(numero < 0);


	return numero;
}
