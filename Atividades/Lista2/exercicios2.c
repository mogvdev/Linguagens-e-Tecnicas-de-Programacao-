#include <stdio.h>
#include <stdlib.h>

void ex2(){
	float reais, cota;
	printf("Insira a cotação e o valor: \n");
	scanf("%f %f", &cota, &reais);
	printf("Os %f reais sao %f trumps \n", reais, cota);
}

void ex3(){
	float tempC, tempF;
	printf("Insira a temperatura em C: \n");
	scanf("%f", &tempC);
	tempF = tempC * (9.0/5.0) + 32.0;
	printf("Os %f C sao %f \n", tempC, tempF);
}

void ex8(){
	int sec, horas, min;
	printf("Insira o tempo em segundo \n");
	scanf("%d", &sec);
	horas = sec/3600;
	min = (sec - (sec%3600))/60;
	sec = sec - ((horas*3600)+(min*60));
	printf("\t %d:%d:%d", horas, min, sec);
    
}

int main (int arc, char *argv[]){
	int op;
	printf("Insira qual exercício quer resolver [2|3|8]\n");
	scanf("&d", &op);
    //Exercício 2
    switch(op){
    case 2:
    	ex2();
    break;
    	
    //Exercício 3
    
    case 3:
    	ex3();
    break;
    
    //Exercício 8
    
    case 8:
    	ex8();
    break;
    
    return 0;
    }
}
