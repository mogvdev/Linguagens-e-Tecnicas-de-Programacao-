#include <stdio.h> 
#include <stdlib.h>
int main(){
int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, soma1, soma2, verif1, verif2, resto1, resto2;
  
printf("Escreva seu CPF: ");
scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

soma1 = (n1*10)+(n2*9)+(n3*8)+(n4*7)+(n5*6)+(n6*5)+(n7*4)+(n8*3)+(n9*2);
resto1 = soma1 % 11;
verif1 = 11 - resto1;
if (verif1 >= 10){
  verif1 = 0;
}

soma2 = (n1*11)+(n2*10)+(n3*9)+(n4*8)+(n5*7)+(n6*6)+(n7*5)+(n8*4)+(n9*3)+(n10*2);
resto2 = soma2 % 11;
verif2 = 11 - resto2;
if (verif2 >= 10){
  verif2 = 0;
}

if (n10 == verif1 && n11 == verif2){
  printf("Seu CPF é válido!");
  return 0;
}
  else{
    printf("CPF inválido!");
  }
}
  
