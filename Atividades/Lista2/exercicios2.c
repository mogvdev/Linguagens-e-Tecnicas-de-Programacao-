#include <stdio.h>
#include <stdlib.h>

int op;
printf("Insira qual exercício quer resolver" [1|3|4|10]\n");
scanf("&d", &op);
int op;


//Exercício 1

case 1;
	//Ano de nascença.
	int idade, ano;
	printf("Qual sua idade ao fim do anos: ");
	scanf("%d", &idade);
	printf("Qual ano voce esta: ");
	scanf("%d", &ano);
	ano = ano - idade;
	printf("Voce nasceu no ano: %d", ano);
break;
	
//Exercício 3

case 3;
	// Faça um programa que oleia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
	floar reais, cota;
	printf("Insira a cotação e o valor: \n");
	scanf("%f %f", &cota, &reais);
	printf("Os %f reais sao %f trumps \n", reais, (reais/cota));
break;

//Exercício 4

case 4:
	//Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
	float tempC, tempF
	printf("Insira a temperatura em C: \n");
	scanf("%f", &tempC):
	tempF = tempC * (9.0/5.0) + 32.0;
	printf("Os %f C sao %f \n", tempC, tempF);
break;

//Exercício 10

case 10
	//Comparação de valores.
	int a,b,c,d, maior, maior_temp, maior2;
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	//conta
	maior_temp = (a+b+abs(a-b))/2;
	maior2 = (d+c+abs(d-c))/2;
	maior = (maior2+maior_temp+abs(maior2-maior_temp))/2;
	printf("O maior entre |%d|%d|%d|%d| = %d", a,b,c,d, maior);
break;

