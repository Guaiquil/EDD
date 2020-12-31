/*Convertir cada subprograma en funciones, recuerde la utilizacion de 
 prototipos*/
 
#include <stdio.h>
#define PI 3.141

void ingresoDatos(float* r, float* h);
void calculoVolSup(float *sup, float *vol, float r, float h);
void imprimirResultados(float vol, float sup);
int main(){
	float r, h, vol, sup;
	ingresoDatos(&r, &h);
	calculoVolSup(&sup, &vol, r, h);	
	imprimirResultados(vol, sup);
	
	return 0;
	}
	


void ingresoDatos(float* r, float* h){
	printf("Ingrese radio y alto: \n");
	scanf("%f%f",r,h);
	
	}

void calculaVolSup(float *sup, float *vol, float r, float h){
	*sup = 2*PI*r*r+2*PI*r*h;
	*vol = PI*r*r*h;
	}

void imprimirResultados(float sup, float vol){
	printf("El volumen es: %.3f\n",vol);
	printf("La superficie es: %.3f",sup);
	}
