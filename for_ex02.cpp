#include <stdio.h>

int main(){
	int n;
	printf("Digite o numero de termos que serao impressos na tela(n): ");
	scanf("%d", &n);
	
	int numero = 1;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			printf("%d", numero);
			numero++;
		}

	return 0;

}
}
