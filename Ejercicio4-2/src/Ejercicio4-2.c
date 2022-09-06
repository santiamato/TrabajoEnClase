/*
 ============================================================================
 Name        : Ejercicio4-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int num1, int num2, int *resultado);

int main(void) {
	setbuf(stdout, NULL);

	int control;
	int resultado;
	control = sumar(2, 2, &resultado);

	if(control == 0){
		printf("El resultado de la suma es: %d", resultado);
	}else{
		printf("No se pudo hacer la suma");
	}


	return EXIT_SUCCESS;
}

int sumar(int num1, int num2, int *resultado){

	*resultado= num1 + num2;

	return 0;
}
