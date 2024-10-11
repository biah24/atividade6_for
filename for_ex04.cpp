#include <stdio.h>

int main() {
	float num;
	int qtd;
	printf("Quantos numeros voce deseja inserir? ");
	scanf("%d", &qtd);
	
	float menor, maior;
	
	printf("digite um numero positivo: ");
	scanf("%f", &num);
	maior = num;
	menor = num;
	
	for(int i = 2; i <= qtd; i++){
	printf("digite um numero positivo: ");
	scanf("%f", &num);
	}
	
    if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }

    printf("O maior numero eh: %.2f\n", maior);
    printf("O menor numero eh: %.2f\n", menor);

    return 0;
}
