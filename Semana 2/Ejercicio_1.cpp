/*Cree un programa que solicite al usuario dos numeros enteros,
los sume y muestre el resultado por pantalla. Utilice 
unicamente memoria dinamica para las variables. Recuerde 
que debe liberar la memoria luego de mostrar el resultado. */

#include <stdio.h>

int main(){
	
printf("Ingrese el primer numero entero: ");
int*n1 = new int; //Reservo mi memoria dinamica a medida que lo necesite
scanf("%d", n1);

printf("Ingrese el primer numero entero: ");
int*n2 = new int; //Reservo mi memoria dinamica a medida que lo necesite
scanf("%d", n2);

int*suma = new int; //Reservo mi memoria dinamica a medida que lo necesite

*suma = *n1 + *n2;  //Contenido de suma sera igual a la suma de los contenidos de n1 y n2

printf("El resultado de la suma es : %d", *suma);

delete n1; //Elimino la memoria utilizada (LIBERO MEMORIA)
delete n2; //Elimino la memoria utilizada (LIBERO MEMORIA)
delete suma; //Elimino la memoria utilizada (LIBERO MEMORIA)
printf("\nLa memoria utilizada fue eliminada\n");
printf("\nLa direccion de memoria de n1 es %p",n1); //Para conocer la direccion de memoria %p 
return 0 ;
}
