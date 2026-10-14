#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Elabore um programa que peça ao usuário para digitar 10 números que sejam inteiros e positivos ignorando os negativos. E mostre na tela 
o resultado da soma e a média desses valores
-- OBS: Não precisa usar vetor, usem laços da aula de hoje - while e do-while*/
int main(){
  int valor, i, cont;
  float media;
  i= 0; 
  cont= 0;
  do{
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if (valor >=0){
    cont += valor;
    i++;
    }
    else{
      printf("Digite o número novamente: ");
    }
  }while(i<10);

  media = cont/10;
  printf("A média desses números são: %f", media);
  
  return 0;
  }
  
