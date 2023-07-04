//35. Desarrollar un programa que calcule el producto escalar de dos vectores.//

#include<stdio.h>

void asigvec(int d,int x[]){
for (int i = 1;i <= d;i++){
printf ("\n Inserte valor.[%d]: \n \n",i);
scanf("%d",&x [i]);
}
}
void impvec(int V,int d[]){
for (int i = 1 ; i <= V ; i++){
printf ("%d \n",d [i]);
}
}
int esca(int a,int b[],int c[]){
int j,m = 0;
for (int i = 1 ; i <= a ; i++){
j = b[i] * c[i];
m = m + j;
}
return m;
}
void proc(int dim,int x[],int y[]){
printf("\n Ingrese la dimension de los vector: \n \n");
scanf("%d",&dim);
printf ("\n Ingrese valores al primer vector: \n \n");
asigvec(dim,x);
printf ("\n Ingrese valores al segundo vector: \n \n");
asigvec(dim,y);
printf("\n Los vectores son: \n \n");
printf("\n Vector #1: \n \n");
impvec(dim,x);
printf("\n Vector #2: \n \n");
impvec(dim,y);
printf("\n El producto escalar de los 2 vectores ingresados es: %d \n \n",esca(dim,x,y));
}
int main(){
int dim,x[50],y[50];
proc(dim,x,y);
return 0;
}
