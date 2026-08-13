#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float idade, ano, mes, dia;
	printf("Digite sua idade: ");
	scanf("%f", &idade);
	
	
	mes = (idade * 12);
	dia = (idade * 365);
	
	printf("\nSua idade em...");
	printf("\nAnos: %.0f", idade);
	printf("\nEm meses: %.0f", mes);
	printf("\nEm dias: %.0f", dia);
	

	
	return 0;
}
