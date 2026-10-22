#include <stdio.h>
int main()
{
    int i;
    char palavra[30];
    scanf("%s", palavra);
    printf("Palavra: %s", palavra);
    printf("\n");
    for(i=0; i<30 && palavra[i] !='\0'; i++){
    }
    int tamanho = i;
    printf("Tamanho da palavra é: %d\n", tamanho);

    int pa_lindromo = 1;
    for(i = 0; i < tamanho / 2; i++) {
        if(palavra[i] != palavra[tamanho - 1 - i]) {
            pa_lindromo = 0; 
            break;  
        }
    }

    if (pa_lindromo == 1){
        printf("\nA palavra | %s | é um polindromo", palavra);
    }
    else{
        printf("\nA palavra | %s | não é um polindromo", palavra);
    }
    
    
    
    return 0;
}
