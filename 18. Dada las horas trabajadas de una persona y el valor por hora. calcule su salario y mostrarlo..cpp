//18. Dada las horas trabajadas de una persona y el valor por hora. calcule su salario y mostrarlo.//

#include<stdio.h>

float salario(float h, float valorh){
float x;
x = h * valorh;
return x;
}
int main(){
float h, valorh;
printf("\n Ingrese las horas trabajadas: \n \n");
scanf("%f",&h);
printf("\n Ingrese el valor por hora de trabajo, en dolares: \n \n");
scanf("%f",&valorh);
printf("\n Su salario es: $%.2f \n \n",salario(h,valorh));
return 0;
}
