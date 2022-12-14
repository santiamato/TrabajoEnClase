/*
 ============================================================================
 Name        : Ejercicio4-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "conversion.h"

int main(void) {
	setbuf(stdout, NULL);
	float temp;
	char opcion;
	int controlValidacion;
	int controlConversion;
	float numConvertido;

	printf("Quiere ingresar Celsius o Fahrenheit, para convertirlo al otro: c/f");
	fflush(stdin);
	scanf("%c", &opcion);

	if(opcion == 'c'){
		controlValidacion  = validarCelsius(&temp);
		if(controlValidacion == 0){
			controlConversion = convertirCelsius(temp, &numConvertido);
			if(controlConversion == 0){
				printf("El numero Convertido de Celsius a Fahrenheit es: %f", numConvertido);
			}else{
				printf("No se pudo realizar la Conversion");
			}
		}else{
			printf("No se pudo realizar la validacion");
		}
	}else if(opcion == 'f'){
		controlValidacion = validarFahrenheit(&temp);
		if(controlValidacion == 0){
			controlConversion = convertirFahrenheit(temp, &numConvertido);
			if(controlConversion == 0){
				printf("El numero Convertido de Fahrenheit a Celsius es: %f", numConvertido);
			}else{
				printf("No se pudo realizar la Conversion");
			}
		}else{
			printf("No se pudo realizar la validacion");
		}
	}



	return EXIT_SUCCESS;
}
