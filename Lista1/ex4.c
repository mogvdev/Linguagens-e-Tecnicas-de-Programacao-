#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario, vendas, comissao, total;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	printf("Digite o valor da venda: ");
	scanf("%f", &vendas);
	
	comissao = vendas * 0.15;
	total = comissao + salario;
	printf("O seu salario total sera: %.2f", total);
	
	
	
	return 0;
}
