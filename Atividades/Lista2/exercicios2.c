#include <stdio.h>
#include <stdlib.h>

//Exercício 1

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade, ano;
	
	printf("Qual sua idade ao fim do anos: ");
	scanf("%d", &idade);
	
	printf("Qual ano voce esta: ");
	scanf("%d", &ano);
	
	ano = ano - idade;
	
	printf("Voce nasceu no ano: %d", ano);
	
	return 0;
	
}
