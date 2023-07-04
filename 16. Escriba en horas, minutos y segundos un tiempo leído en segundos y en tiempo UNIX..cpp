//16. Escriba en horas, minutos y segundos un tiempo leído en segundos y en tiempo UNIX.//

#include<stdio.h>
#define hora 3600
#define min 60

float horas(float t){
float h;
h = t / hora;
return h;
}
float minutos(float t){
float m;
m = t / min;
return m;
}
int main(){
float t;
printf("\n Ingrese un tiempo en segundos: \n \n");
scanf("%f",&t);
printf("\n El tiempo ingresado, en horas es: %.2f",horas(t));
printf("\n El tiempo ingresado, en minutos es: %.2f",minutos(t
));
printf("\n El tiempo ingresado, en segundos es: %.2f",t);
return 0;
}
