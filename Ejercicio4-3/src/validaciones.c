/*
 * validaciones.c
 *
 *  Created on: 5 sep. 2022
 *      Author: santi
 */
#include <stdio.h>
#include <stdlib.h>

float validarCelsius(float *tempPTR){
	float temp;
	do{
		printf("Ingrese una temperatura en celsius: (entre el punto de congelacion y de ebullicion)");
		fflush(stdin);
		scanf("%f", &temp);
	}while(temp < 0 && temp > 100);

	*tempPTR = temp;

	return 0;
}

float validarFahrenheit(float *tempPTR){
	float temp;
	do{
		printf("Ingrese una temperatura en Fahrenheit: (entre el punto de congelacion y de ebullicion)");
		fflush(stdin);
		scanf("%f", &temp);
	}while(temp < 32 && temp > 212);

	*tempPTR = temp;

	return 0;
}
