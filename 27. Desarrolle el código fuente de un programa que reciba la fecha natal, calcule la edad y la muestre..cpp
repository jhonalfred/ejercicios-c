//27. Desarrolle el código fuente de un programa que reciba la fecha natal, calcule la edad y la muestre.//

#include<iostream>
using namespace std;

void edad(double x){
cout<< "\n Ingrese una edad en anios: \n \n";
cin>> x;
cout<< "\n La edad ingresada es de " << x << " anios: \n \n";
}
int main(){
double x;
edad(x);
return 0;
}
