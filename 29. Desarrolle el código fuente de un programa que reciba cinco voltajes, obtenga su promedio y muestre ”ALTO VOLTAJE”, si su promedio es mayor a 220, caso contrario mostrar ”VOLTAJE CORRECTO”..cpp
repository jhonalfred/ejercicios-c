//29. Desarrolle el código fuente de un programa que reciba cinco voltajes, obtenga su promedio y muestre ”ALTO VOLTAJE”, si su promedio es mayor a 220, caso contrario mostrar ”VOLTAJE CORRECTO”.//

#include<iostream>
using namespace std;

float prom(float a[]){
cout<< "\n Ingrese los 5 voltajes: \n \n";
cin>> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
a[5] = (a[0] + a[1] + a[2] + a[3] + a[4]) / 5;
return a[5];
}
void voltaje(float a[]){
float f;
f = prom(a);
if(f > 220){
cout<< "\n \"ALTO VOLTAJE\" \n \n";
}
else if(f < 220){
cout<< "\n \"VOLTAJE CORRECTO\" \n \n";
}
}
int main(){
float a[5];
voltaje(a);
return 0;
}
