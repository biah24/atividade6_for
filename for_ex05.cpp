#include <stdio.h>

int main() {
    int num;
    int qtd;

    printf("Quantos numeros voce deseja inserir? ");
    scanf("%d", &qtd);

    for (int i = 1; i <= qtd; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            printf("O primeiro numero par encontrado eh: %d\n", num);
            break; 
        }
    }

    return 0;
}

