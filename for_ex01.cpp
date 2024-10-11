
#include<stdio.h>

int main(){
	int n, qtd;
	printf ("Quantos valores inteiros positivos deseja inserir: ");
	scanf("%d", &qtd);


	for(int i = 1; i <= qtd; i++){
	    printf("Digite um numero positivo: ");
		scanf("%d", &n);
		int fat = 1;
	for(int j = 1; j <= n; j++){
		fat *= j;

}  
 printf("Valor: %d | Fatorial: %d\n", n, fat);
}

	return 0;

}

