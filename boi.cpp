#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int boipeso[100];
int boinumero[100];
int bois = 0;
int gordo = 0, magro = 1000000;
	
void verBoiMaisMagro()
{
	int i;
	for(i = 0; i < bois; i ++)
	{
		if (boipeso[i] < magro)
		{
			magro = boipeso[i];
		}
	}
	
	printf("\nO boi mais magro pesa %d kg", magro);
}

void verBoiMaisGordo()
{
	int i;
	for(i = 0; i < bois; i ++)
	{
		if (boipeso[i] > gordo)
		{
			gordo = boipeso[i];
		}
	}
	
	printf("\nO boi mais gordo pesa %d kg", gordo);
}

int main() {
	
	int sair = 1;
	int cont = 0;
	while (sair == 1)
	{
		printf("\nEntre com o numero de id do boi: ");
		scanf("%d", &boinumero[cont]);
		printf("\nEntre com o peso do do boi: ");
		scanf("%d", &boipeso[cont]);
		cont++;
		printf("\nDigite 1 para continuar ou 2 para sair: ");
		scanf("%d", &sair);
	}
	
	bois = cont;
	
	verBoiMaisMagro();
	verBoiMaisGordo();
	
	printf("\nO numero de bois eh %d", bois);
	
	return 0;
}
