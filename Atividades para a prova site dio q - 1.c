#include <stdio.h>
#include <locale.h>
#define SIZE 3

int main(){
	char letras[SIZE] = {'A','B','C'};
	int numero[SIZE], somaNumeros = 0, i;
	
	setlocale(LC_ALL,"portuguese");
	
	//La�o para solicita��o de dados.
	for(i=0;i<SIZE;i++){
		printf("DIGITE O VALOR %c: ",letras[i]);
		scanf("%d",&numero[i]);
	
	}
	
	//C�lculo do sistema.
	somaNumeros = numero[0] + numero[1];
	
	//Exibindo os Resultados.
	puts("\n=== EXIBINDO RESULTADOS ===\n");
	
	//La�o de Exibi��o.
	for(i=0;i<SIZE;i++){
		printf("VALOR %c INSERIDO: %d\n",letras[i],numero[i]);
	}
	
	//Sistema Condicional.
	if(somaNumeros>numero[2])
		printf("\nA SOMA DOS N�MEROS %d E %d � MAIOR QUE %d",numero[0],numero[1],numero[2]);
	else if(somaNumeros<numero[2])
		printf("\nA SOMA DOS N�MEROS %d E %d � MENOR QUE %d",numero[0],numero[1],numero[2]);
	else
	    printf("\nA SOMA DOS N�MEROS %d E %d � IGUAL A %d",numero[0],numero[1],numero[2]);
	    
	//Fim do Programa.
	
	    return 0;
}
