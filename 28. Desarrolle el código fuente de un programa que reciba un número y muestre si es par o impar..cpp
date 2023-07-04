//28. Desarrolle el código fuente de un programa que reciba un número y muestre si es par o impar.//

#include<iostream>
using namespace std;

void num(int x){
cout<< "\n Ingrese un numero: \n \n";
cin>> x;
if(x % 2 == 0){
cout<< "\n El numero ingresado es par \n \n";
}
else{
cout<< "\n El numero ingresado es impar \n \n";
}
}
int main(){
int x;
num(x);
return 0;
}
