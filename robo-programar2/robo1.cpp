#include<stdio.h>

int main(){
	
	int val1;
	
	//adquire um valor e atribui a variável val1
	printf("Escreva um valor: \n");
	scanf("%i", &val1);
	
	//compara o valor da variável a 10
	if(val1 < 10){
		
		//caso seja verdade, será executado este 
		printf("%i MENOR que 10", val1);
	}
	else{
			
		if(val1 == 10){
		
		//caso seja verdade, será executado este 
		printf("%i IGUAL que 10", val1);
	}
	else{
	   
	   printf("%i MAIOR que 10" , val1);	
	
	}
	
}
}

