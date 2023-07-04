//20. A un trabajador le descuentan de su sueldo el 10% si su sueldo es menor o igual a 1000, por encima de 1000 y hasta 2000 el 5% del adicional, y por encima de 2000 el 3% del adicional. Calcule el descuento y sueldo neto que recibe el trabajador dado su sueldo.//

#include<stdio.h>

float descuento(float sueldo){
float s,x;
if(sueldo <= 1000){
x = sueldo * 0.1;
return x;
}
else if(1000 < sueldo > 2000){
x = 1000 * 0.05;
return x;
}
else{
s = sueldo - 2000;
x = s * 0.03;
return x;
}
}
float sueldonet(float sueldo){
float s,x,d;
if(sueldo <= 1000){
x = sueldo * 0.1;
s = sueldo - x;
return s;
}
else if(1000 < sueldo > 2000){
x = 1000 * 0.05;
s = sueldo - x;
return s;
}
else{
d = sueldo - 2000;
x = d * 0.03;
s = sueldo - x;
return s;
}
}
int main(){
float sueldo;
printf("\n Ingrese el valor de su sueldo en dolares: \n \n$");
scanf("%f",&sueldo);
printf("\n El descuento que hubo en su sueldo es de $%.2f \n \n",descuento(sueldo));
printf("\n El sueldo neto que recibe es: $%.2f \n \n",sueldonet(sueldo));
return 0;
}
