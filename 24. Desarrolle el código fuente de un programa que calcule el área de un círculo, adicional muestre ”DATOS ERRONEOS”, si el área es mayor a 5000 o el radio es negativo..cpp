//24. Desarrolle el código fuente de un programa que calcule el área de un círculo, adicional muestre ”DATOS ERRONEOS”, si el área es mayor a 5000 o el radio es negativo.//

#include<stdio.h>
#include<cmath>
#define PI 3.14159265359

void area(float r){
float A;
printf("\n Ingrese radio en cetimetros: \n \n");
scanf("%f",&r);
A = PI * pow(r,2);
printf("\n El area de el circulo de radio %.2f cm es %.2f cm cuadrados \n \n",r,A);
if(A > 5000){
printf("\n \t \t \"DATOS ERRONEOS\" \n \n");
}
}
int main(){
float r;
area(r);
return 0;
}
