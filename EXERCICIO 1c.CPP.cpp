#include<stdio.h>
#include<conio.h>
int main (){
int L, A, C;
float Z;

//entrada
printf("entre com o valor de L: ") ;
scanf ("%i", &L);
printf("entre com o valor de A: ");
scanf("%i", &A);
printf("entre com o valor de C: ");
scanf("%i", &C);
//processamento
Z = (L+A*2.3)/C;

//saida
 printf("o valor de Z = %0.3f", Z);
 return(0);
 
} 
