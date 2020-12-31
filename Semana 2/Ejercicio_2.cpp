/*Convertir cada subprograma en funciones, recuerde la utilizacion de 
 prototipos*/

#include <stdio.h>
#define PI 3.141

void calculaVolSup(float *sup, float *vol, float r, float h);

int main(){
float h,r,vol,sup;
printf("Ingrese radio y alto: \n");
scanf("%f%f", &r,&h);
calculaVolSup(&vol,&sup,r,h);
printf("La superficie es: %.3f\n",sup);
printf("El volumen es: %.3f\n",vol);

return 0 ;
}

void calculaVolSup(float *sup, float *vol, float r, float h){
	*sup = 2*PI*r*r+2*PI*r*h;
	*vol = PI*r*r*h;
	}
