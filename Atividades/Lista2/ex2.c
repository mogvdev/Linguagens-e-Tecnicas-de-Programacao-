#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float km, ms;
	
	printf("Digite a velocidade em Km/h: ");
	scanf("%f", &km);
	
	ms = km/3.6;
	
	printf("A velocidade em %.2f Km/h em %.2f M/s", km,ms);
	
	return 0;
	
}
