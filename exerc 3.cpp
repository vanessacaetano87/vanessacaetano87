#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	int exercicio ;
	do{
		printf("\nEscolha um dos exercicios abaixo para executa-lo\n");
		printf("\n1- Exercicio 1\n");
		printf("\n2- Exercicio 2\n");
		printf("\n4- Exercicio 4\n");
		printf("\n5- Exercicio 5\n");
		printf("\nDigite o numero do exercicio escolhido ; ");
		scanf("%d", &exercicio);
		
	if(exercicio >5){
		printf("Opcao invalida....");
		system("pause.............");
		system("cls...............");
		
		
       }
	
	}while(exercicio >5);
	printf("\n................................................\n");
	
	
	
	
	if(exercicio ==1){
		int L, A, C;
		float Z;
		
  printf("Entre com o valor de L: ");
  scanf("%i", & L);
  printf("Entre com o valor de A: ");
  scanf("%d", &A);
  printf("Entre com o valor de C: ");
  scanf("%d", &C);
  
  //processamento
  Z = (L+A*2)/C;
  
  //saida
  printf("O valor de Z = %0.2f", Z);
  
	}
	
	if(exercicio ==2){
		float altura, peso_i;
		char sexo;
		
			puts("Entre com sua Altura: ");
	scanf("%f", &altura);
	puts("Entre com o seu Sexo: ");
	fflush(stdin);
	   sexo = getche();
	
	
	if ( (sexo =='f') || (sexo =='F') ){
		peso_i = (400.7 * altura) /10 ;
	}
 	if ( (sexo =='m') || ( sexo =='M') ){ 
		peso_i = (450.7 * altura) /10 ;
	}
	
	printf("\n\nO peso ideal calculado foi : %f ", peso_i) ;
	getch();
	}
	
	if(exercicio ==4){
		int n, cont;
		float x, soma;
		cont=1;
		soma=0;
		 while(cont < 20){
 	
    printf("Insira o valor:%d\n", cont+1);
     scanf("%f", &x);

     soma = soma+x;


cont++;

}
printf("Resultado = %.2f", soma);

	}else{
		printf("\n\nSistema encerrado\n\n");
	}
		if(exercicio =5){
		printf("\nfim de execucao - tudo de bom\n.");
}
   return(0);
}



	

		
