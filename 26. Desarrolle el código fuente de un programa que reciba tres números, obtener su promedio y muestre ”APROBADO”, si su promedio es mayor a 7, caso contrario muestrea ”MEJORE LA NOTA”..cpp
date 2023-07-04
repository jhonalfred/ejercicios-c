//26. Desarrolle el código fuente de un programa que reciba tres números, obtener su promedio y muestre ”APROBADO”, si su promedio es mayor a 7, caso contrario muestrea ”MEJORE LA NOTA”.//

#include<iostream>
using namespace std;

void prom(float b){
float a[3];
cout<< "\n Ingrese 3 numeros: \n \n";
cin>> a[0] >> a[1] >> a[2];
a[3] = (a[0] + a[1] + a[2]) / 3;
cout<<"\n El promedio de los 3 numeros ingresados es: " << a[3] << endl << endl;
if(a[3] > 7){
cout<<"\n \"APROBADO\" \n \n";
}
else{
cout<<"\n \"MEJORE LA NOTA\" \n \n";
}
}
int main(){
float b;
prom(b);
return 0;
}
