/*
 ============================================================================
 Name        : Ejercicio2-1.c
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
		float promedio = 0;
		int suma = 0;
		int i;
		for(i = 0; i < 7; i++){
			do{
				printf("Ingrese un numero negativo y distinto a 0: ");
				scanf("%d", &numero);
			}while(numero > -1);
			suma += numero;
		}
		promedio = (float)suma / i;
		printf("El promedio total de los numeros es: %.2f", promedio);
	return EXIT_SUCCESS;
}
