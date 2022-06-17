#include<stdio.h>

#include<stdlib.h>

int main(){
	
	
 float num,soma = 0;
 
 int cont = 0;
 
 while(cont < 20){
 	
    printf("Insira o valor:%d\n", cont+1);
     scanf("%f", &num);

     soma = soma+num;


cont++;

}
printf("Resultado = %.2f", soma);


 return 0;
 
 }
