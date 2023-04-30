#include <stdio.h>

int main()
{
	int num;
	
	printf("--------------------------------------------\n");
	printf("Digite o numero 0 para encerrar o programa\n");
	printf("--------------------------------------------\n");
	
	for(;;){
		printf("Digite um numero:\n");
		scanf("%d", &num);
		
		if(num == 0){
			printf("Programa encerraado\n");
			break;
		}
	}
return 0;
}
