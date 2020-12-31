
// Lea tres numeros y escribir el mayor de los tres
#include <stdio.h>

int main(){
	
int a;
int b;
int c; 
	printf("Ingrese primer numero: ");
	scanf("%d",&a );
	printf("Ingrese segundo numero: ");
	scanf("%d",&b );
	printf("Ingrese tercer numero: ");
	scanf("%d",&c );
	if(a>=b && a>=c ){
		printf("El numero %d es mayor",a);
		}else if(b>=a && b>=c ){
			printf("El numero %d es mayor",b);
			}else if (c>=a && c>=b ){
				printf("El numero %d es mayor",c);
				}
	return 0 ;
	}

