#include <stdio.h>
#include <math.h>

int main(){
  int valor [10], i, cont;

  for(i=0; i<10; i++){
  scanf("%d", &valor[i]);
}
i= 10;
while(i<10){
  scanf("%d", &valor[i]);
  i++;
}
i=0;
do{
  printf("%d", valor[i]);
  i++;
}
while(i<10);

return 0;
}
