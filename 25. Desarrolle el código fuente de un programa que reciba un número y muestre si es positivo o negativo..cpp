//25. Desarrolle el c�digo fuente de un programa que reciba un n�mero y muestre si es positivo o negativo.//

#include<iostream>
using namespace std;

void num(float a){
cout<< "\n Ingrese un numero: \n \n";
cin>> a;
if(a > 0){
cout<< "\n El numero ingresado es positivo \n \n";
}
else if(a < 0){
cout<< "\n El numero ingresado es negativo \n \n";
}
}
int main(){
float a;
num(a);
return 0;
}
