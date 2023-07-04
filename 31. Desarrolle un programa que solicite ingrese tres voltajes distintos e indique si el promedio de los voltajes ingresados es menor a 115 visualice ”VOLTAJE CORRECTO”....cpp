//31. Desarrolle un programa que solicite ingrese tres voltajes distintos e indique si el promedio de los voltajes ingresados es menor a 115 visualice ”VOLTAJE CORRECTO”, caso contrario sea mayor A 115 y menor a 220 visualice ”ALTO VOLTAJE”, y si es mayor a 220 visualice ”PELIGRO”.//

#include<iostream>
using namespace std;

void volt(float v[]){
cout<< "\n Ingrese 3 voltajes: \n \n";
cin>> v[0] >> v[1] >> v[2];
v[3] = (v[0] + v[1] + v[2]) / 3;
if(v[3] < 220){
if(v[3] < 115){
cout<< "\n \"VOLTAJE CORRECTO\" \n \n";
}
else{
cout<< "\n \"ALTO VOLTAJE\" \n \n";
}
}
else{
cout<< "\n \"PELIGRO\" \n \n";
}
}
int main(){
float v[3];
volt(v);
return 0;
}
