#include <stdio.h>
#include <math.h>
int main (){
  int valor;
  printf("Insira um valor par: ");
  scanf("%d", &valor);
  while (valor%2 == 1){
    printf("Valor inserido impar.\nInsira um novo valor: ");
    scanf("%d", &valor);
}
  do {
    printf("\nInsira um valor par: ");
    scanf("%d", &valor);
  }while(valor%2 == 1);
  printf("a raiz de %d = %f", valor, sqrt(valor));
  return 0;
}
