#include <stdio.h>
#include <locale.h>


void cabecalho(){
	puts("=== FINALIZAÇÃO DO PAGAMENTO ===\n");
}

int main(){
	char resposta, enter;
	int opcoes, quantidade, i, contador = 0;
	float taxa = 0, desconto = 0, valorFinal = 0, valor = 0, valorAgregado = 0, valorPago = 0;
	float parcela = 0, somaValorPago = 0;
	
	setlocale(LC_ALL,"portuguese");
	
	puts("=== CADASTRO DE VALOR DO PRODUTO ===\n");
	puts("PRODUTO: Pacote de folha A4 DOUBLE-FLEX / 500 unidades\n");
	printf("INSIRA O VALOR DO PRODUTO: R$");
	scanf("%f",&valor);
	system("cls || clear");
	
	//Menu
	do{
	puts("=== SELEÇÃO DE QUANTIDADE ===\n");
	printf("Pacote de folha A4 DOUBLE-FLEX / 500 unidades \nR$%.2f x1\n",valor);
	printf("\nSELECIONE A QUANTIDADE: ");
	scanf("%d",&quantidade);
	
	printf("\nDESEJA CORRIGIR A QUANTIDADE? (S) PARA CORRIGIR OU (N) PARA FINALIZAR \nPRESSIONE: ");
	fflush(stdin);
	scanf("%c",&resposta);
	resposta = toupper(resposta);
	system("cls || clear");
	
	}while(resposta != 'N');
	
	valorAgregado = valor * quantidade;
	
	do{
	puts("=== CONDIÇÕES DE PAGAMENTO ===\n");
	
	printf("Pacote de folha A4 DOUBLE-FLEX / 500 unidades \nR$%.2f x%d\n",valorAgregado,quantidade);
	
	printf("\n1 - À VISTA EM DINHEIRO OU PIX (15%% DE DESCONTO SERÁ APLICADO)\n");
	printf("2 - À VISTA NO CARTÃO DE DÉBITO (1O%% DE DESCONTO SERÁ APLICADO)\n");
	printf("3 - PARCELADO\n");
	printf("4 - CONSULTAR CAIXA\n");
	printf("5 - ENCERRAR CAIXA\n");
	
	printf("\nSELECIONE A OPÇÃO: ");
	scanf("%d",&opcoes);
	system("cls || clear");
	
	switch(opcoes){
		case 1: 
			cabecalho();
			printf("VALOR TOTAL: R$%.2f\n",valorAgregado);
			printf("\n>>>DESCONTO DE 15%% APLICADO\n");
			
			desconto = valorAgregado * 0.15;
			valorFinal = valorAgregado - desconto;
			
			printf("VALOR TOTAL A PAGAR: R$%.2f\n\n",valorFinal);
			
			do{
			printf("DIGITE O VALOR PAGO: R$");
			scanf("%f",&valorPago);
			}while(valorPago != valorFinal);
			
			somaValorPago += valorPago;
			
			system("cls || clear");
			
		break;
		case 2: 
			cabecalho();
			printf("VALOR TOTAL: R$%.2f\n",valorAgregado);
			printf("\n>>>DESCONTO DE 10%% APLICADO");
			
			desconto = valorAgregado * 0.10;
			valorFinal = valorAgregado - desconto;
			
			printf("\nVALOR TOTAL A PAGAR: R$%.2f\n",valorFinal);
			
			do{
			printf("\nDIGITE O VALOR PAGO: R$");
			scanf("%f",&valorPago);
			}while(valorPago != valorFinal);
			
			somaValorPago += valorPago;
			
			
			system("cls || clear");
		
		break;
		case 3: 
			cabecalho();
			puts("OPÇÕES DE PARCELAMENTO:\n");
			for(i=0;i<2;i++){
			parcela = valorAgregado / i+1;
			printf("%dx DE %.2f / SEM JUROS\n",i,parcela);
			}
			
			for(i=3;i<10;i++){
			taxa = valorAgregado * 1.10;
			parcela = taxa / i++;
			printf("%dx DE %.2f / COM JUROS DE 10%%\n",i,parcela);
			}
			
			do{
			printf("\n\nDIGITE O VALOR PAGO: R$");
			scanf("%f",&valorPago);
			}while(valorPago != valorFinal);
			
			somaValorPago += valorPago;
		
		break;
		case 4:
			puts("=== CAIXA ===\n");
			
			printf("\nMONTANTE : R$%.2f\n",somaValorPago);
			puts("\nPRESSIONE (ENTER) PARA RETORNAR");
			fflush(stdin);
			scanf("%c",&enter);
			system("cls || clear");
			
		break;
		case 5:
		break;
		default:
			printf("\n=== SELECIONE UMA OPÇÃO VÁLIDA ===\n");
		break;		
	}
	}while(opcoes != 5);
	
	return 0;
}
