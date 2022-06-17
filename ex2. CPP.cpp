#include <stdio.h>
#include <conio.h>

int main (void){
	float Altura, peso_i;
	char Sexo;
	
	puts("Entre com sua Altura: ");
	scanf("%f", &Altura);
	puts("Entre com o seu Sexo: ");
	fflush(stdin);
	Sexo = getche();
	
	
	if ( (Sexo =='f') || (Sexo =='F') ){
		peso_i = (400.7 * Altura) /10 ;
	}
 	if ( (Sexo =='m') || ( Sexo =='M') ){ 
		peso_i = (450.7 * Altura) /10 ;
	}
	
	printf("\n\nO peso ideal calculado foi : %f ", peso_i) ;
	getch();
	return (0);
	
	}
	




