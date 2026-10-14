#include <stdio.h>
#include <math.h>
int main (){
  int valor;
  printf("Insira um valor par: ");
  scanf("%d", &valor);
  while (valor%2 == 1){
    printf("valor inserido impar, insira um novo valor: ");
    scanf("%d", &valor);
}
  printf("a raiz de %d = %f", valor, sqrt(valor));
  return 0;
}
