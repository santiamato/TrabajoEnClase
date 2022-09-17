/*
 * retornarMax.c
 *
 *  Created on: 9 sep. 2022
 *      Author: santi
 */
#include <stdio.h>
#include <stdlib.h>

int retornarMax(int array[], int *punteroValor){
	int aux;

	for(int i = 0; i < 5; i++){

		for(int j = 0; j < 4; j++){

			if(array[j] > array[j+1]){

				aux = array[j+1];
				array[j+1] = array[j];
				array[j] = aux;
			}
		}
	}
	*punteroValor = array[4];

	return 0;
}

