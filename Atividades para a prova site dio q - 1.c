#include <stdio.h>
#include <locale.h>
#define SIZE 3

int main(){
	char letras[SIZE] = {'A','B','C'};
	int numero[SIZE], somaNumeros = 0, i;
	
	setlocale(LC_ALL,"portuguese");
	
	//Laço para solicitação de dados.
	for(i=0;i<SIZE;i++){
		printf("DIGITE O VALOR %c: ",letras[i]);
		scanf("%d",&numero[i]);
	
	}
	
	//Cálculo do sistema.
	somaNumeros = numero[0] + numero[1];
	
	//Exibindo os Resultados.
	puts("\n=== EXIBINDO RESULTADOS ===\n");
	
	//Laço de Exibição.
	for(i=0;i<SIZE;i++){
		printf("VALOR %c INSERIDO: %d\n",letras[i],numero[i]);
	}
	
	//Sistema Condicional.
	if(somaNumeros>numero[2])
		printf("\nA SOMA DOS NÚMEROS %d E %d É MAIOR QUE %d",numero[0],numero[1],numero[2]);
	else if(somaNumeros<numero[2])
		printf("\nA SOMA DOS NÚMEROS %d E %d É MENOR QUE %d",numero[0],numero[1],numero[2]);
	else
	    printf("\nA SOMA DOS NÚMEROS %d E %d É IGUAL A %d",numero[0],numero[1],numero[2]);
	    
	//Fim do Programa.
	
	    return 0;
}
