/*
 ============================================================================
 Name        : Ejercicio3-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

float retornarNumero();

int main(void) {
	setbuf(stdout, NULL);
	printf("El numero ingresado es %.2f", retornarNumero());
}

float retornarNumero() {
	float numero;
	printf("Ingrese un num flotante ");
	scanf("%f", &numero);


	return numero;
}
