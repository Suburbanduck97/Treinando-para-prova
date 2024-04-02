#include <stdio.h>
#include <locale.h>
#include <string.h>
#define SIZE 1

int main(){
	int numero;
	char resposta;
	setlocale(LC_ALL,"portuguese");
	
	//Laço de repetição "do-wilhe" p/ solicitação de dados.
	do{
	system("cls || clear");
	printf("DIGITE UM VALOR INTEIRO: ");
	scanf("%d",&numero);
	
	//Condicional para validação do par ou impar.
	if(numero % 2 == 0)
		printf("\n%d É PAR",numero);
	else
		printf("\n%d É IMPAR",numero);
		
	//Para dar continuidade ao laço.
	fflush(stdin);	
	printf("\n\nDESEJA DIGITAR MAIS UM NÚMERO? (S) P/ SIM OU (N) P/ NÃO\nRESPONDA: ");
	scanf("%c",&resposta);
	resposta = toupper(resposta);
	
	puts("\n");
	
	//Interrupção do laço.
	}while(resposta != 'N'); 
	
	return 0;
	
}
