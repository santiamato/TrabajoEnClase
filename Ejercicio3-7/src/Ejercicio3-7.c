/*
 ============================================================================
 Name        : Ejercicio3-7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int num1, int num2);
int resta(int num1, int num2);

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	char operacion;

	do{
		printf("Ingrese un numero: ");
		scanf("%d", &numero1);
	}while(numero1 < 10 || numero1 > 100);

	do{
			printf("Ingrese un numero: ");
			scanf("%d", &numero2);
		}while(numero2 < 10 || numero2 > 100);

	do{
		printf("Que operacion quiere realizar con estos numeros? R:resta / S:suma");
		fflush(stdin);
		scanf("%c", &operacion);
	}while(operacion != 'S' && operacion != 'R');

	if(operacion == 'S'){
		printf("El resultado de la Suma entre los dos numeros ingresados es: %d", sumar(numero1, numero2));
	}else{
		printf("El resultado de la Resta entre los dos numeros ingresados es: %d", resta(numero1, numero2));
	}

	return EXIT_SUCCESS;
}

int sumar(int num1, int num2){
	int resultado;
	resultado = num1 + num2;
	return resultado;
}

int resta(int num1, int num2){
	int resultado;
	resultado = num1 - num2;
	return resultado;
}

