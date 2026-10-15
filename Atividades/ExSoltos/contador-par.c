#include <stdio.h>
int main(){
  int i, contador = 0;
  
    for (i = 1; i <= 10; i++) {
     if (i % 2 == 0) {
        contador++;
     }
    }
    printf("%d\n", contador);
  return 0;
  
}
