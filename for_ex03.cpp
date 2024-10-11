#include<stdio.h>

int main() {
    int ano;
    float salarioInicial = 1015.00;  
    float salarioFinal = salarioInicial;
    float percentualAumento = 0.015 * 2;  

    printf("Salario em 2019: %.2f", salarioInicial);
    printf("Informe o ano atual: ");
    scanf("%d", &ano);

    for (int i = 2020; i <= ano; i++) {
    salarioFinal += (salarioFinal * percentualAumento); 
    printf("Salario em %d foi igual a: %f", i, salarioFinal);
      
    } 
    return 0;
}


