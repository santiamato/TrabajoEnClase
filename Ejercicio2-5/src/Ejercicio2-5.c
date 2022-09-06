/*
 ============================================================================
 Name        : Ejercicio2-5.c
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
	int legajo;
	char estadoCivil;
	int edad;
	int anioIngreso;
	char genero;
	int cantMayores = 0;
	int anioIngresoAntigua;
	int legajoMujerAntigua;
	int edadMujerAntigua;
	float precioBrutoLibretas = 0;
	int cantAlumnos = 0;
	int precioLibretas = 450;
	float precioDesc;

	do{
		do{
			printf("Ingrese numero de legajo");
			scanf("%d", &legajo);
		}while(legajo < 1000 || legajo > 9999);

		do{
			printf("Ingrese estado civil(s/c/v)");
			fflush(stdin);
			scanf("%c", &estadoCivil);
		}while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v');

		do{
			printf("Ingrese edad");
			scanf("%d", &edad);
		}while(edad < 18 || edad > 100);

		do{
			printf("Ingrese anio de ingreso");
			scanf("%d", &anioIngreso);
		}while(anioIngreso < 1990 || anioIngreso > 2022);

		do{
			printf("Ingrese su genero)");
			fflush(stdin);
			scanf("%c", &genero);
		}while(genero != 'f' && genero != 'm' && genero != 'o');

		if(edad > 60){
			cantMayores++;
		}

		if(anioIngreso < anioIngresoAntigua){
			anioIngresoAntigua = anioIngreso;
			legajoMujerAntigua = legajo;
			edadMujerAntigua = edad;
		}

		cantAlumnos++;


		printf("Quiere seguir ingresando datos? S/N");
		fflush(stdin);
		scanf("%c", &respuesta);
	}while(respuesta == 'S');

	precioBrutoLibretas = precioLibretas * cantAlumnos;
	if(cantAlumnos > 5){
		precioDesc = (precioBrutoLibretas*(95/100)) * cantAlumnos;
	}else if(cantAlumnos > 10){
		precioDesc = (precioBrutoLibretas*(90/100)) * cantAlumnos;
	}
	printf("La cantidad de personas mayores a 60 es: %d \n", cantMayores);
	printf("El legajo de la persona mas antigua en la facultad es: %d y su edad es: %d \n", legajoMujerAntigua, edadMujerAntigua);
	printf("El precio bruto de las libretas es: %.2f \n", precioBrutoLibretas);
	printf("El precio con descuento de las libretas es: %.2f \n", precioDesc);





	return EXIT_SUCCESS;
}
