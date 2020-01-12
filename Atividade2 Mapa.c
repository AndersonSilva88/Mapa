#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define L 4
#define C 6

int valores(float mat[L][C]);
void somarvaloresDias(float mat[L][C]);
void somaTotal(float mat[L][C]);

main(void){
	setlocale(LC_ALL,"Portuguese");
	float mat[L][C];
	int i, j;
	int opcao;
	
	do{
	system("cls");
	printf("\n\t+---------------------------+");
	printf("\n\t| ## Vendas de Automóveis ##|");
	printf("\n\t|  1 - Preencher Vendas:    |");
	printf("\n\t|  2 - Exibir as Vendas:    |");	
	printf("\n\t|  3 - Média de vendas:     |");
	printf("\n\t|  4 - Sair.                |");
	printf("\n\t+---------------------------+");
	printf("\n\t Escolha uma Opção:");
	scanf("%d",&opcao);
	
	
		switch(opcao){
			case 1:
				valores(mat);
				break;
			case 2:
				somaTotal(mat);
				break;
			case 3:
				somarvaloresDias(mat);
				break;
			default:
				printf("\n\tSaindo Do Sistema.");
								
		}
   }while(opcao != 4);
   printf("\n\n");
	system("pause");
	return 0;
}

int valores(float mat[L][C]){
	
	int linha, coluna;

	    for(linha=0; linha <L; linha++){
	    	system("cls");
	    	printf("\tValores da semana %d:\n", linha+1);
		 for(coluna=0; coluna <C; coluna++){
			printf("Informe os valores diario de Vendas %d:", coluna+1);
			scanf("%f", &mat[linha][coluna]);	
		}
	
	   }
	return 0;   		
	}


void somarvaloresDias(float mat[L][C]){ 
	float soma;
	float mediaVendas;
	int linha, coluna;
	soma=0;
	for(linha= 0; linha<L; linha++){
		for(coluna=0; coluna<C; coluna++){
			soma += mat[linha][coluna];
			mediaVendas = soma / 4;	
		}
	}
	printf("\nA Média de Vendas do Més R$: %.2f\n",mediaVendas);
    system("pause");
}


	

void somaTotal(float mat[L][C]){
	 
	int linha, coluna;
	
	    printf("\tSeg  -  ter  -  Qua  -  Qui  -  Sex  -  Sab \n");
	for(linha= 0; linha<L; linha++){
		for(coluna=0; coluna<C; coluna++){
		 printf("\t%.2f", mat[linha][coluna]); 	
		}	
		printf("\n");
	}
	system("pause");
}
 
