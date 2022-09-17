/*
 * biblioteca.c
 *
 *  Created on: 10 sep. 2022
 *      Author: santi
 */
#include <stdio.h>
#include <stdlib.h>

int devolverCantNegativos(int array[]){
	int cantNegativos = 0;
	for(int i = 0; i < 10; i++){
		if(array[i] < 0){
			cantNegativos++;
		}
	}
	printf("La cantidad de negativos es: %d \n", cantNegativos);
	return 0;
}

int sumatoriaImpares(int array[]){
	int sumaImpares = 0;
	for(int i = 0; i < 10; i++){
		if(array[i] % 2 != 0){
			sumaImpares += array[i];
		}
	}
	printf("La suma de los impares es: %d \n", sumaImpares);

	return 0;
}

int devolverMayorPar(int array[]){
	int mayorPar;
	int aux;
	int banderaMax = 1;
	for(int i = 0; i < 10; i++){

		for(int j = 0; j < 9; j++){

			if(array[j] > array[j+1]){

				aux = array[j+1];
				array[j+1] = array[j];
				array[j] = aux;
			}
		}
	}

	for(int i = 9; i >= 0; i--){
		if(array[i] % 2 == 0 && banderaMax == 1){
			banderaMax = 0;
			mayorPar = array[i];
		}
	}
	printf("El mayor de los pares es: %d \n", mayorPar);
	return 0;
}

