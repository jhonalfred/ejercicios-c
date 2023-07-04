//30. Desarrolle el código fuente de un programa que calcule el área de un triángulo, adicional muestre ”DATOS NO VALIDOS”, si el área es mayor a 1000 y determine si es equilátero, escaleno o isosceles.//

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
