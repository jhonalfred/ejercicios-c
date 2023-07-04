//33. Cree un programa que en base a una matriz y un vector, contar la cantidad de números primos de ambos.//

#include<stdio.h>
#include<stdlib.h>

void asigma(int M[20][20], int f, int c){
for(int i = 1;i <= f;i++){
for(int j = 1;j <= c;j++){
printf ("\n Ingrese valor [%d,%d]: ",i,j);
scanf("%d",&M[i][j]);
}
}
}
void impma(int M[20][20],int f,int c){
for(int i = 1;i <= f;i++){
printf ("\n");
for(int j = 1;j <= c;j++){
printf ("%d \t ",M[i][j]);
}
}
}
void asigvec(int V[20],int d){
for(int i = 1;i <= d;i++){
printf("\n Inserte el valor [%d]: \n \n",i);
scanf("%d",&V [i]);
}
}
void impvec(int V[20],int d){
for(int i = 1 ; i <= d ; i++){
printf ("%d \n",V [i]);
}
}
int prima(int M[20][20],int f,int c){
int cant = 0;
for(int i = 1;i <= f;i++){
for(int j = 1;j <= c;j++){
int cc = 0;
for(int k = 1;k <= M[i][j];k++){
if(M[i][j] % k == 0){
cc++;
}
}
if(cc == 2){
cant++;
}
}
}
return (cant);
}
int privec(int V[20],int d){
int cant = 0;
for(int i = 1;i <= d;i++){
int c = 0;
for(int j = 1;j <= V[i];j++){
if(V[i] % j == 0){
c++;
}
}
if(c == 2){
cant++;
}
}
return (cant);
}
int main(){
int a [20][20];
int b [20];
int x,y,dim;
printf("\n Ingrese la cantidad de filas de la matriz: \n \n");
scanf("%d",&x);
printf("\n Ingrese la cantidad de columnas de la matriz: \n \n");
scanf("%d",&y);
printf("\n Ingrese la dimension del vector: \n \n");
scanf("%d",&dim);
printf("\n Ingrese valores a la matriz: \n \n");
asigma(a,x,y);
printf ("\n Ingrese valores al vector: \n \n");
asigvec(b,dim);
printf("\n La matriz es: \n \n");
impma(a, x, y);
printf("\n \n El vector es: \n \n");
impvec(b,dim);
int primos;
primos = prima (a,x,y) + privec(b,dim);
printf("\n \n El total de numeros primos que hay en el ejercicio es: %d \n \n",primos);
system("pause");
return 0;
}
