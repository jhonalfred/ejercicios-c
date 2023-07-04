//21. Dado un monto calcule el descuento considerando que por encima de 10000 el descuento es el 20% y por debajo de 10000 el descuento es el 10%.//

#include<stdio.h>

float desc(float monto){
float d;
if(monto > 10000){
d = monto * 0.2;
return d;
}
else{
d = monto * .1;
return d;
}
}
int main(){
float monto;
printf("\n Ingrese el monto en dolares: \n \n$");
scanf("%f",&monto);
printf("\n el descuento al monto ingresado es: $%.2f \n \n",desc(monto));
return 0;
}
