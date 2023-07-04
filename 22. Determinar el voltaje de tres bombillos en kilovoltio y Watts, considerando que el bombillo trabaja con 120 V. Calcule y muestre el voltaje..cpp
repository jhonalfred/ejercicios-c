//22. Determinar el voltaje de tres bombillos en kilovoltio y Watts, considerando que el bombillo trabaja con 120 V. Calcule y muestre el voltaje.//

#include<stdio.h>

float volt(float x){
float kv = 1000,bombillo = 120;
x = (3 * bombillo) / kv;
return x;
}
int main(){
float x;
printf("\n El voltaje de los tres bombillos es: %.2f Kv \n \n",volt(x));
return 0;
}
