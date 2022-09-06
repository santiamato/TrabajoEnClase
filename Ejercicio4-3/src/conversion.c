/*
 * conversion.c
 *
 *  Created on: 5 sep. 2022
 *      Author: santi
 */
#include <stdio.h>
#include <stdlib.h>

double convertirCelsius(float temp, float *numConvertido){
	*numConvertido = (temp * 1.8) + 32;

	return 0;
}

double convertirFahrenheit(float temp, float *numConvertido){
	*numConvertido = (temp - 32) * 0.5556;

	return 0;
}


