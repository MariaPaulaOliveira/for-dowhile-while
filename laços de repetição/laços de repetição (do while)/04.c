//N�meros indeterminados com la�o de repeti��o
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
