#include<stdio.h>

int main(){
	
	int val1;
	
	//adquire um valor e atribui a vari�vel val1
	printf("Escreva um valor: \n");
	scanf("%i", &val1);
	
	//compara o valor da vari�vel a 10
	if(val1 < 10){
		
		//caso seja verdade, ser� executado este 
		printf("%i MENOR que 10", val1);
	}
	else{
			
		if(val1 == 10){
		
		//caso seja verdade, ser� executado este 
		printf("%i IGUAL que 10", val1);
	}
	else{
	   
	   printf("%i MAIOR que 10" , val1);	
	
	}
	
}
}

