#include <stdio.h>
#include <stdlib.h>

float calc_inss (float salario){
  if(salario<= 1412.00)return salario*0.075;
  else if(salario<= 2666.68) return salario*0.09;
  else if(salario<= 4000.00) return salario*0.12;
  else return salario *0.14;
}
float calc_irpf (float salario){
  if(salario<= 2259.20) return salario;
  else if (salario<= 2826.65) return (salario*0.075) - 169.44;
  else if (salario<= 3751.05) return (salario*0.15) - 381.44;
  else if (salario<= 4664.68) return (salario*0.225) - 662.77;
  else return (salario*0.275) - 896.00;
}
float calc_hora (float salario, float hora, float valor){
  return salario = hora * valor;
}


int main(){
  float salario, desconto, desconto1, irpf;
  desconto = calc_inss(salario);
  desconto1 = calc_irpf(salario);
  irpf = desconto + desconto1;
  printf("======================================================\n");
  printf("    RECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE)    \n");
  printf("======================================================\n");
  printf("Salário Bruto (Horas x Valor):   R$%f\n", calc_hora(salario));
  printf(" (-) Desconto INSS:               R$%f\n", calc_inss(salario));
  printf(" (-) Desconto IRPF:               R$%f\n", calc_irpf(salario));
  printf("------------------------------------------------------\n");
  printf("LÍQUIDO A RECEBER: \n", irpf);
  printf("======================================================\n");
    
    return 0;
}
