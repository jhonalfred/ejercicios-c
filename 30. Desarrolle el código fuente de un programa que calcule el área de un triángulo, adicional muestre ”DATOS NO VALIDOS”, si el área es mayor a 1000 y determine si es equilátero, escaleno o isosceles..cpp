//30. Desarrolle el c�digo fuente de un programa que calcule el �rea de un tri�ngulo, adicional muestre �DATOS NO VALIDOS�, si el �rea es mayor a 1000 y determine si es equil�tero, escaleno o isosceles.//

#include<stdio.h>
#include <cmath>

float area(float l){
float A;
printf("\n Ingrese un lado del triangulo: \n \n");
scanf("%f",&l);
A = ((sqrt (3)) / 4) * (pow(l,2));
return A;
}
int main(){
float l;
printf("\n El area del triangulo equilatero es %.2f \n \n",area(l));
return 0;
}
