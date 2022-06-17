#include <stdio.h>
#include <conio.h>

float func1 (){
  float n1, n2, n3, n4;
  float med;
  puts("\nEntre com a nota 1: ");
  scanf("%f", &n1);
  puts("\nEntre com a nota 2: ");
  scanf("%f", &n2);
  puts("\nEntre com a nota 3: ");
  scanf("%f", &n3);
  puts("\nEntre com a nota 4: ");
  scanf("%f", &n4);
  med = (n1+n2+n3+n4)/4;
  return(med);
}

float func2 (float med2){
	printf("\nA media e: %f",med2);
	if(med2>=6.0){
	printf("\nAluno Aprovado");
	}
	else{
	printf("\nAluno Reprovado");
	}
}



int main(void){
float retorno1;
char sim_nao;
do{
	retorno1 = func1();
	func2(retorno1);
	puts("\n\nDeseja novo cadastro: ");
	fflush(stdin);
	sim_nao = getch();
	
}
while ((sim_nao=='s')   ||   
(sim_nao=='S') );
puts("\n\nFim de programa...");
getche();
return(0);

}
