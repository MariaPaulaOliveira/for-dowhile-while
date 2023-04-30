//Números indeterminados com laço de repetição
#include <stdio.h>

int main(void)
{
	int num;
	
	printf("--------------------------------------------\n");
	printf("Digite o numero 0 para encerraro programa\n");
	printf("--------------------------------------------\n");
	
	printf("Digite um numero:\n");
	scanf("%d", &num);
	
	do{
		printf("Digite um numero:\n");
		scanf("%d", &num);
	}while(num > 0 ||num < 0);

	printf("Programa encerrado\n");
	return 0;
}
