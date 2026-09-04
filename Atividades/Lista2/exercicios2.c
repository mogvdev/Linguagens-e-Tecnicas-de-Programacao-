#include <stdio.h>
#include <stdlib.h>

void ex1(){
	int idade, ano;
	printf("Qual sua idade ao fim do anos: ");
	scanf("%d", &idade);
	printf("Qual ano voce esta: ");
	scanf("%d", &ano);
	ano = ano - idade;
	printf("Voce nasceu no ano: %d", ano);

}

void ex2(){
	float km, ms;
	printf("Digite a velocidade em Km/h: ");
	scanf("%f", &km);
	ms = km/3.6;
	printf("A velocidade em %.2f Km/h em %.2f M/s", km,ms);
}

void ex3(){
	float reais, cota;
	printf("Insira a cotação e o valor: \n");
	scanf("%f %f", &cota, &reais);
	cota = reais / cota;
	printf("Os %f reais sao %f trumps \n", reais, cota);
}

void ex4(){
	float tempC, tempF;
	printf("Insira a temperatura em C: \n");
	scanf("%f", &tempC);
	tempF = tempC * (9.0/5.0) + 32.0;
	printf("Os %f C sao %f \n", tempC, tempF);
}

void ex6(){
	float num, ant, suc;
	printf("Digite seu número escolhido: ");
	scanf("%f", &num);
	ant = num - 1;
	suc = num + 1;
	printf("O antecessor do seu número é: %.2f e o sucessor dele é: %.2f ", ant, suc);
	
}

void ex7(){
	float valor, prim, seg, terc, total;
	valor = 780.000,00;
	prim = valor * 0.42;
	seg = valor * 0.32;
	terc = valor - prim - seg;
	printf("O valor de R$ 780.000,00 será dividido entre os vencedores\n o primeiro lugar levando: %.2f\n o segundo: %.2f\n e o terceiro: %.2f!\n", prim, seg, terc);
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

void ex10(){
	int a,b,c,d, maior, maior_temp, maior2;
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	//conta
	maior_temp = (a+b+abs(a-b))/2;
	maior2 = (d+c+abs(d-c))/2;
	maior = (maior2+maior_temp+abs(maior2-maior_temp))/2;
	printf("O maior entre |%d|%d|%d|%d| = %d", a,b,c,d, maior);
}


int main (int arc, char *argv[]){
	int op;
	printf("Insira qual exercício quer resolver [1|2|3|4|8|10]\n");
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

	//Exercício 6
		case 6:
		ex6();
		break;

	//Exercício 7
		case 7:
		ex7();
		break;
		
    //Exercício 8
    	case 8:
    	ex8();
    	break;

	//Exercício 10
		case 10:
		ex10();
		break;
			
    
    return 0;
    }
}
