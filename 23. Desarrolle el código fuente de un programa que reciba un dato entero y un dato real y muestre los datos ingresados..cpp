//23. Desarrolle el código fuente de un programa que reciba un dato entero y un dato real y muestre los datos ingresados.//

#include<iostream>
using namespace std;

void dat(double x,int y){
cout<< "\n Ingrese un dato entero y real: \n \n";
cin>> y >> x;
cout<< "\n El datos ingresados son: \n \n" << x << "\n \n" << y;
}
int main(){
double x;
int y;
dat(x,y);
return 0;
}
