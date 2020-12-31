
//Busque los posibles divisores de un numero
#include <stdio.h>

int main(){
	
int a;
int i;


	printf("Ingrese un numero: ");
	scanf("%d",&a );
	printf("Sus divisores son :");
	for(i=1;i<=a;i++){
		if(a%i==0){
			int divisor=i;
			printf("\n%d",divisor);			
			}
			
		}
		

	
	
	return 0 ;
	}
