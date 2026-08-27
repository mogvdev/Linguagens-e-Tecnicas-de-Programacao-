#include <stdio.h>
#include <math.h>
int main()
{
    int a1, r1, r2, r3, r4, r5, r6, b2, area, hip, inv1, inv2;
    printf("Digite seu primeiro numero: ");
    scanf("%d", &a1);
    
    printf("Digite seu segundo numero: ");
    scanf("%d", &b2);
    
    if (a1 >= 0 && b2 >= 0){ 
        if (a1 && b2 < 10){
            if ((a1 == 2 || a1 == 3 || a1 == 5 || a1 == 7) && (b2 == 2 || b2 == 3 || b2 == 5 || b2 == 7)){
               area = (a1 * b2) /2;
               hip = sqrt(pow(a1,2) + pow(b2,2));
               
               printf("A area é: %d\n", area);
               printf("A hipotenusa é: %n", hip);
               
            } else{ 
                r1 = (a1 + b2);
                r2 = (a1 - b2);
                r3 = (a1 * b2);
                r4 = (a1 / b2);
                
                printf("O resultados das contas basicas sao:\n %d\n %d\n %d\n %d\n", r1, r2, r3, r4);
            }
        } else{ 
            if (a1 % b2 == 0){
                printf("Os numeros inseridos sao multiplos");
            }else{
                printf("Os numeros inseridos nao sao multiplos");
            }
            
            
        }
       
    } else{
        inv1 = a1 * (-1);
        inv2 = b2 * (-1);
        
        printf("O inverso dos seus numeros sao: %d, %d", inv1, inv2);
    }
        
    
    
    
    
    
}