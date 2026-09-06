#include <stdio.h>
#include <math.h>
#define pi 3.14159

void ex1(){
	int numero1, numero2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
  printf("Valores: %d e %d\n\n", numero2, numero1);

}

void ex2(){
  double valor;
	printf("Primeiro valor: ");
	scanf ("%lf", &valor);
	printf("Valor em notacao: %e\n\n", valor);

}

void ex3(){
  int n, resto1, resto2, resto3, resto4, resto5, resto6, resto7;
	printf("Digite um número: ");
	scanf("%d", &n);
	resto1 = n % 2;
	n = n / 2;
	resto2 = n % 2;
	n = n / 2;
	resto3 = n % 2;
	n = n / 2;
	resto4 = n % 2;
	n = n / 2;
	resto5 = n % 2;
	n = n / 2;
	resto6 = n % 2;
	n = n / 2;
	resto7 = n % 2;
	n = n / 2;
	printf("%d%d%d%d%d%d%d\n\n", resto7, resto6, resto5, resto4, resto3, resto2, resto1);

}

void ex4(){
  float salario, vendas, comissao, total;	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	printf("Digite o valor da venda: ");
	scanf("%f", &vendas);
	comissao = vendas * 0.15;
	total = comissao + salario;
	printf("O seu salario total sera: %.2f\n\n", total);

}

void ex5(){
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
	media = (soma) /4;
	produtoria = (valor1 * valor2 * valor3 * valor4);	
	printf("\nSoma:  %.2f\n", soma);
	printf("\nMedia:  %.2f\n", media);
	printf("\nProdutorio: %.2f\n\n", produtoria);

}

void ex6(){
  int anos, meses, dias, resto;
	printf("Digite sua idade em dias: ");
	scanf("%d", &dias);
	anos = dias / 365;
	resto = dias % 365;
	meses = resto / 30;
	dias = resto % 30;
	printf("Sua idade: %d anos, %d meses e %d dias\n\n", anos, meses, dias);

}

void ex7(){
  float volume, raio;
	printf("Insira o raio do circulo: ");
	scanf ("%f", &raio);
	volume = (4.0 / 3.0) * pi * raio * raio * raio;
	printf("Volume = %.3f\n\n", volume);

}

void ex8(){
  float x1, y1, x2, y2, distancia;
	printf("Digite x1: ");
	scanf("%f", &x1);
	printf("Digite y1: ");
	scanf("%f", &y1);
	printf("Digite x2: ");
	scanf("%f", &x2);
	printf("Digite y2: ");
	scanf("%f", &y2);
	distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("Distancia = %f\n\n", distancia);

}

int main(int argc, char *argv[]) {
  int op;
  printf("Insira qual exercício quer resolver [1|2|3|4|5|6|7|8]\n");
  scanf("%d", &op);
  switch(op){
    //Exercício 1
		case 1:
		ex1();
		break;
		
	//Exercício 2
		case 2:
    	ex2();
		break;
    	
    //Exercício 3
    	case 3:
    	ex3();
    	break;
		
    //Exercício 4
		case 4:
		ex4();
		break;
		
    //Exercício 8
    	case 8:
    	ex8();
    	break;
    

	return 0;
  }

}
