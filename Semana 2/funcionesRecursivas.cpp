/*Hacer una funcion recursiva en C/C++ que:
Busque y encuentre todos los posibles divisores de un numero
*/
#include <stdio.h>
#include <string.h>

int mayorDosNumeros(int num1, int num2);
bool par(int num);
int mayorTresNumeros(int num1, int num2, int num3);
int sumaArreglo(int cadena[], int elementos);
int numDivisores(int num);
bool esPrimo(int num);
void convertirMayusculas(char cadena[]);

int main(){
	
	printf("%d\n",mayorDosNumeros(23,23));
	printf("%d\n",mayorDosNumeros(7,23));
	printf("%d\n",par(7));
	printf("%d\n",par(8));
	printf("%d\n",mayorTresNumeros(7,7,7));
	printf("%d\n",mayorTresNumeros(7,23,15));
	
	int cadena[5] = {1,2,3,4,5};
	printf("%d\n",sumaArreglo(cadena,5));
	
	printf("%d\n",numDivisores(36));
	
	printf("%d\n",esPrimo(5));
	printf("%d\n",esPrimo(36));
	
	char oracion[50] = "Estructura de Datos y Algoritmos";
	convertirMayusculas(oracion);
	printf("%s\n", oracion);

	return 0;
	}

int mayorDosNumeros(int num1, int num2){
	if(num1 == num2){
		return 0;
		} else{
			if(num1 > num2){
				return num1;
				} else {
					return num2;
					}
			}	
	}

bool par(int num){
	if((num%2) == 0){
		return true;
		} else{
			return false;
			}
	}

int mayorTresNumeros(int num1, int num2, int num3){
		if((num1==num2) && (num2 == num3)){
		return 0;
		} else{
			int mayor = num1;
			if(num2>mayor){
				mayor = num2;
				}
			if(num3>mayor){
				mayor = num3;
				}
			return mayor;
			}
	}

int sumaArreglo(int cadena[],int elementos){
	int sumatoria = 0;
	for(int i = 0; i<elementos; i++){
		sumatoria += cadena[i];
		}
	return sumatoria;
	}
	
int numDivisores(int num){
	int divisores = 0;
	if(num>1){
	for(int i = 1; i <= num; i++){
		if(num%i == 0){
			divisores++;
			}
		}
	}
	return divisores;
	}

bool esPrimo(int num){
	int i;
	for(i = 2; i < num; i++){
		if(num%i == 0){
			break;
		}
	}
	if(i==num){
		return true;
		} else{
			return false;
			}
	}
	
void convertirMayusculas(char cadena[]){
	for(int i = 0; i<strlen(cadena); i++){
		if(cadena[i]>=97 && cadena[i]<=122){
			cadena[i] = cadena[i] - 32;
			}
		}
	}
