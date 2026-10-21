#include <stdio.h>
int main(){
    int n, aux, mult=1;
    scanf("%d", &n);
    aux=0;
    while (n > 0){
        aux=aux+(n%2)*mult;
        n = n/2;
        mult=mult*10;
    }
    printf("%d", aux);
    return 0;
}
