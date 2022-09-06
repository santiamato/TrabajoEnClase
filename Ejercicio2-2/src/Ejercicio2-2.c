/*
 ============================================================================
 Name        : Ejercicio2-2.c
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

	char respuesta;
	int numero;
	int promPositivos = 0;
	int promNegativos = 0;
	int sumaPositivos = 0;
	int sumaNegativos = 0;
	int cantPositivos = 0;
	int cantNegativos = 0;
	int maxNegativos = -9999;
	int maxPositivos = 0;

	do{
		printf("Ingrese un numero: ");
		scanf("%d", &numero);

		printf("Quiere seguir ingresando datos S/N: ");
		scanf(" %c", &respuesta);

		if(numero > -1){
			sumaPositivos += numero;
			cantPositivos++;
			if(numero > maxPositivos){
				maxPositivos = numero;
			}
		}else{
			sumaNegativos += numero;
			cantNegativos++;
			if(numero < maxPositivos){
				maxNegativos = numero;
			}
		}
	}while(respuesta == 'S');

	promPositivos = sumaPositivos / cantPositivos;
	promNegativos = sumaNegativos / cantNegativos;


	printf("El Promedio de los Positivos es: %d y su Maximo es: %d ", promPositivos, maxPositivos);
	printf("El Promedio de los Negativos es: %d y su Maximo es: %d", promNegativos, maxNegativos);



	return EXIT_SUCCESS;
}
