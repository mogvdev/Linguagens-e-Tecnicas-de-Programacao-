#include <stdio.h>
#include <stdlib.h>

float calc_inss (float salario){
  if(salario<= 1412.00)return salario*0.075;
  else if(salario<= 2666.68) return salario*0.09;
  else if(salario<= 4000.00) return salario*0.12;
  else return salario *0.14;
}
float calc_irpf (float salario){
  if(salario<= 2259.20) return 0;
  else if (salario<= 2826.65) return (salario*0.075) - 169.44;
  else if (salario<= 3751.05) return (salario*0.15) - 381.44;
  else if (salario<= 4664.68) return (salario*0.225) - 662.77;
  else return (salario*0.275) - 896.00;
}
float calc_salariobruto (float hora, float valor){
  return hora * valor;
}
float calc_salarioliquido (float salario, float inss, float irpf){
    return salario - inss - irpf;
}
int main(){
  float salario, inss, irpf, hora, valor, salarioliquido;
  printf("Insira a quantidade de horas trabalhadas: ");
  scanf("%f", &hora);
  printf("Insira o valor da hora trabalhada: ");
  scanf("%f", &valor);

    salario = calc_salariobruto(hora, valor);
    inss = calc_inss(salario);
    irpf = calc_irpf(salario - inss);
    salarioliquido = calc_salarioliquido(salario, inss, irpf);


  printf("======================================================\n");
  printf("    RECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE)    \n");
  printf("======================================================\n");
  printf("Salário Bruto (Horas x Valor):    R$%f\n", salario);
  printf(" (-) Desconto INSS:               R$%f\n", inss);
  printf(" (-) Desconto IRPF:               R$%f\n", irpf);
  printf("------------------------------------------------------\n");
  printf("LÍQUIDO A RECEBER:                R$%f\n", salarioliquido);
  printf("======================================================\n");
    
    return 0;
}
