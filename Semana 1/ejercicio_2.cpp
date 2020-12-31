/* Lea un numero e indique que sea par o impar*/

#include <stdio.h>

int main(){
	
int a;
	printf("Ingrese un numero: ");
	scanf("%d",&a );
	if(a%2==0 && a!=0 ){
		printf("El numero %d es par",a);
		}if(a%2!=0 && a!=0){
			printf("El numero %d es impar",a);
			}if(a==0){
				printf("El numero no es par ni impar");
				}
return 0;
}
