#include <stdio.h>

int main(void)
{
	int num;
	printf("---------------------------------------------\n");
	printf("Digite o numero 0 para encerrar o programa\n");
	printf("---------------------------------------------\n");
	
	printf("Digite um numro:\n");
	scanf("%d", &num);
	
	while(num > 0 || num < 0){
		printf("Digite um numero:\n");
		scanf("%d", &num);
	}
	printf("Programa encerrado\n");
	return 0;
}
