//17. Cree una función que reciba un numero cualquiera y devuelva como resultado la suma de sus dígitos.//

#include<stdio.h>

int sumdig(int x){
if(x > 0){
return(x % 10) + sumdig(x / 10);
}
else{
return x;
}
}
int main(){
int x;
printf("\n Ingrese un numero: \n \n");
scanf("%d",&x);
printf("\n La suma de sus dígitos es: %d \n \n",sumdig(x));
return 0;
}
