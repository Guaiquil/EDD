

//Indique si es primo o no

#include <stdio.h>


int main(){
	
int a;
int i;
bool primo = true;

	printf("Ingrese un numero: ");
	scanf("%d",&a );
	if(a==1 || a==0) primo = false;
	for(i=2;i<a;i++){
		if(a%i==0) primo = false;
	}if(primo == true){
		printf("%d es primo",a);
		}else{
			printf("No es primo");
			}
		
						
	return 0 ;
	}
