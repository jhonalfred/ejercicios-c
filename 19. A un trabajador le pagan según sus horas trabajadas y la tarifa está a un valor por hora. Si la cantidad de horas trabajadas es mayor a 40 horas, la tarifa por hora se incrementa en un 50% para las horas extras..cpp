//19. A un trabajador le pagan según sus horas trabajadas y la tarifa está a un valor por hora. Si la cantidad de horas trabajadas es mayor a 40 horas, la tarifa por hora se incrementa en un 50% para las horas extras. calcule el salario del trabajador dadas las horas trabajadas y la tarifa.//

#include<stdio.h>

float salario(float horastrab,float tarifa){
float a[5];
if(horastrab > 40){
a[0] = tarifa * 1.5;
a[1] = horastrab - 40;
a[2] = a[1] * a[0];
a[3] = 40 * tarifa;
a[4] = a[2] + a[3];
return a[4];
}
else{
a[0] = horastrab * tarifa;
return a[0];
}
}
int main(){
float horastrab,tarifa;
printf("\n Ingrese las horas trabajadas: \n \n");
scanf("%f",&horastrab);
printf("\n Ingrese la tarifa de valor por hora de trabajo, en dolares: \n \n$");
scanf("%f",&tarifa);
printf("\n Su salario es: $%.2f \n \n",salario(horastrab,tarifa));
return 0;
}
