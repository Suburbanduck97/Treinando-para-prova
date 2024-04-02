#include <stdio.h>
#include <locale.h>
#define SIZE 3

int main(){
	char letras[SIZE] = {'A','B','C'};
	int numeros[SIZE], somaNumeros = 0, resultado, multiplicacao = 0, i;
	
	setlocale(LC_ALL,  "portuguese");
	
	for(i=0;i<2;i++){
		printf("DIGITE O VALOR DE %c: ",letras[i]);
		scanf("%d",&numeros[i]);
		
	}
	
	puts("\n=== EXIBINDO RESULTADOS ===\n");
		
	if(numeros[0] == numeros[1]){
		numeros[2] = numeros[0] + numeros[1];
		printf("OS NÚMEROS FORAM SOMADOS E ATRIBUIDOS AO VALOR C\n");
	}else{
		numeros[2] = numeros[0] * numeros[1];
		printf("OS NÚMEROS FORAM MULTIPLICADOS E ATRIBUIDOS AO VALOR C\n");
	}
	
	for(i=0;i<SIZE;i++){
		printf("\nO VALOR DE %c É: %d\n",letras[i],numeros[i]);
	}
	
	return 0;
}
