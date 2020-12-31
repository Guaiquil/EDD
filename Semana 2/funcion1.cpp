/*HACER FUNCION
Lea dos numeros y escriba el mayor de los dos*/

#include <stdio.h>

void ingresoDatos(int*a,int*b);
void imprimirResultado(int*a,int*b);
int main(){
	
int a;
int b; 
ingresoDatos(&a,&b);

	return 0 ;
	}

void ingresoDatos(int*a, int*b){
	printf("Ingrese un numero: ");
	scanf("%d",a );
	printf("Ingrese otro numero: ");
	scanf("%d",b );
	if(*a<*b){
		printf("El numero %d es mayor",*b);
		}else if(b<a){
			printf("El numero %d es mayor",*a);
				}else{
					printf("Los numeros son iguales");
					} 
	}


