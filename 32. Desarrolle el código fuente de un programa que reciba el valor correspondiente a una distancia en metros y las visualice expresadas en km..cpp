//32. Desarrolle el código fuente de un programa que reciba el valor correspondiente a una distancia en metros y las visualice expresadas en km.//

#include<iostream>
using namespace std;
#define dkm 1000

float conver(float m){
float km;
km = m / dkm;
return km;
}
void dist(float m){
cout<< "\n " << m << " m = " << conver(m) << " km";
}
int main(){
float m;
cout << "\n Ingrese una distancia en metros: \n \n";
cin >> m;
dist(m);
return 0;
}
