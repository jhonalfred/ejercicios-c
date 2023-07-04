//34. Desarrolle el código fuente de un programa que le ingresar los siguientes datos nombre, apellido, edad y número de celular de una persona, al término debe mostrar los datos ingresados.//

#include<stdio.h>
#include<iostream>
using namespace std;

void prog(char a[][10],float b[]){
cout<< "\n Ingrese un nombre: \n \n";
cin>> a[0];
cout<< "\n Ingrese un apellido: \n \n";
cin>> a[1];
cout<< "\n Ingrese una edad: \n \n";
cin>> b[2];
cout<< "\n Ingrese un numero de celular: \n \n";
cin>> b[0];
cout<< "\n El nombre ingresado es: " << a[0] << "\n \n";
cout<< "\n El apellido ingresado es: " << a[1] << "\n \n";
cout<< "\n El edad ingresada es: " << b[2] << "\n \n";
printf("\n El numero de celular ingresado es: %.0f\n \n",b[0]);
}
int main(){
char a[10][10];
float b[5];
prog(a,b);
return 0;
}
