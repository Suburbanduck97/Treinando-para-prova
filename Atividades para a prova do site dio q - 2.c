#include <stdio.h>
#include <locale.h>
#include <string.h>
#define SIZE 1

int main(){
	int numero;
	char resposta;
	setlocale(LC_ALL,"portuguese");
	
	//La�o de repeti��o "do-wilhe" p/ solicita��o de dados.
	do{
	system("cls || clear");
	printf("DIGITE UM VALOR INTEIRO: ");
	scanf("%d",&numero);
	
	//Condicional para valida��o do par ou impar.
	if(numero % 2 == 0)
		printf("\n%d � PAR",numero);
	else
		printf("\n%d � IMPAR",numero);
		
	//Para dar continuidade ao la�o.
	fflush(stdin);	
	printf("\n\nDESEJA DIGITAR MAIS UM N�MERO? (S) P/ SIM OU (N) P/ N�O\nRESPONDA: ");
	scanf("%c",&resposta);
	resposta = toupper(resposta);
	
	puts("\n");
	
	//Interrup��o do la�o.
	}while(resposta != 'N'); 
	
	return 0;
	
}
