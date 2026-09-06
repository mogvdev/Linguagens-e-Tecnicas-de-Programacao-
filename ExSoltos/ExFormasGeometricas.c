#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float area, raio;
	printf("Insira o raio do circulo: ");
	scanf ("%f", &raio);
	
	//area = M_PI* pow(raio,2);
	area = pi*(raio*raio);
	
	
	printf("A Area do circulo de raio %.1f = %.2f\n", raio, area);
	
	printf("Agora a do trapezio\n");
	
	float base1, base2, altura;
	
	printf("Digitar o valor da Base1: ");
	scanf("%f", &base1);
	printf("Digitar o valor da Base2: ");
	scanf("%f", &base2);
	printf("Digitar o valor da Altura: ");
	scanf("%f", &altura);
	
	area = ((base1 + base2) * altura) /2;
	printf("A Area é igual a: %f", area);
	
	return 0;
}
