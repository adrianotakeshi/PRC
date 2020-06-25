#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() 
{
	int vetor[10];
	int i, n, j, k, aux;
	
	printf("Entre com 10 números: ");
	for (i = 0; i < 10; i++)
	{
		printf("\nEntre com o valor: ");
		scanf("%d", &vetor[i]);
	}
	
	for (j = 0; j < 10; j++)
	{
		for (n = j; n < 10; n++)
		{
			if (vetor[j] > vetor[n])
			{
				aux = vetor[n];
				vetor[n] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	
	for (k = 0; k < 10; k++)
	{
		printf("%d \t", vetor[k]);
	}
}
