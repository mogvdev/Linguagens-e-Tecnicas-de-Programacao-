#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero1, numero2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	printf("Valores: %d e %d", numero2, numero1);
	
	return 0;
}
