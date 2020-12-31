
//Lea dos numeros y escriba el mayor de los dos

#include <stdio.h>

int main(){
	
int a;
int b; 
	printf("Ingrese un numero: ");
	scanf("%d",&a );
	printf("Ingrese otro numero: ");
	scanf("%d",&b );
	if(a<b){
		printf("El numero %d es mayor",b);
		}else if(b<a){
			printf("El numero %d es mayor",a);
				}else{
					printf("Los numeros son iguales");
					} 
	return 0 ;
	}

