#include <stdio.h>
int main()
{
    int i,j, palindromo;
    char palavra[30];
    scanf("%s", palavra);
    printf("Palavra: %s", palavra);
    printf("\n");
    for(i=0; i<30 && palavra[i] !='\0'; i++);
    for(j=i-1, i=0; i<j; i++, j--){
        if(palavra[i] == palavra[j]) palindromo =1;
        else palindromo = 0;
    }
    if (palindromo)printf("É um palindromo");
    else printf("Não é um palindromo");
    return 0;

}
