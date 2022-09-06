/*
 ============================================================================
 Name        : Ejercicio1-2.c
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
	int valor1;
	int valor2;
	int valor3;

	printf("Ingrese el primer numero: ");
	scanf("%d", &valor1);

	printf("Ingrese el segundo numero: ");
	scanf("%d", &valor2);

	printf("Ingrese el tercer numero: ");
	scanf("%d", &valor3);

	if(valor1 > valor2 && valor1 > valor3){
		printf("El mayor es el primero: %d", valor1);
	}else if(valor2 > valor3){
		printf("El mayor es el segundo: %d", valor2);
	}else{
		printf("El mayor es el tercero: %d", valor3);
	}







	return EXIT_SUCCESS;
}
