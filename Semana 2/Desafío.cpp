/*Cree un programa que le pida al usuario el largo de los tres lados
de un triangulo cualquiera, asuma que son numeros enteros.
El programa debe indicar si efectivamente los lados conforman
un triangulo y cual es su clasificación: equilateros, isoceles o 
escaleno*/

#include <stdio.h>

void pedirLados(int* A, int* B, int* C);
bool confirmarTriangulo(int A, int B, int C);
void clasificarTriangulo(int A, int B, int C);
int main (){
	int A, B, C;
	pedirLados(&A,&B,&C);
	if (confirmarTriangulo(A, B, C)== true){
		clasificarTriangulo(A, B, C);
		}else{
			printf("Los lados ingresados no conforman un triangulo");
			}
	
	
	
	return 0;
	}

void pedirLados(int* A, int* B, int* C){
	printf("Ingrese lado 1 del triangulo: \n");
	scanf("%d",A);
	printf("Ingrese lado 2 del triangulo: \n");
	scanf("%d",B);
	printf("Ingrese lado 3 del triangulo: \n");
	scanf("%d",C);	
	}

bool confirmarTriangulo(int A, int B, int C){
	if ((A+B > C) && (A+C > B) && (C+B> A)){
		return true;
		}else{
			return false;
			}	
	}

void clasificarTriangulo(int A, int B, int C){
	if((A==B)|| (B==C)){
		printf("\nEl triangulo es Equilatero!\n");
		}else{
			if((A==B)||(A==C)||(C==B)){
				printf("\nEL triangulo es Isoscele!\n");
				}else{
				printf("\n El triangulo es Escaleno!\n");
				}
	
	}
}
