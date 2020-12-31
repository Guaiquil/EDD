
//Lea los numeros indefinidamente hasta que llegue el numero 0 y luego escriba la suma de ellos 
#include <stdio.h>

int main(){
	
int a;
int suma = 0;
	do{
	printf("Ingrese un numero: ");
	scanf("%d",&a );
	suma+=a;
	}while(a!=0);{
		}
		printf("La suma de todos los numeros es %d",suma);
	
	return 0 ;
	}
