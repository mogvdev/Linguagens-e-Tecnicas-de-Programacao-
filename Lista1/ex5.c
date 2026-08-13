#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valor1, valor2, valor3, valor4, soma, media, produtoria;
	
	printf("Primeiro valor: ");
	scanf("%f", &valor1);
		
	printf("Segundo valor: ");
	scanf("%f", &valor2);
			
	printf("Terceiro valor: ");
	scanf("%f", &valor3);
	
	printf("Quarto valor: ");
	scanf("%f", &valor4);
	
	soma = (valor1 + valor2 + valor3 + valor4);
	
	media = (soma) /2;
	
	produtoria = (valor1 * valor2 * valor3 * valor4);	
	
	printf("\nSoma:  %.2f", soma);

	
	printf("\nMedia:  %.2f", media);
	
	
	printf("\nProdutorio: %.2f", produtoria);

		
		
		
	
	
	
	
	return 0;
}
