#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
	int idade;
	float peso;
};

int main()
{
	struct pessoa p;
	printf("Digite sua idade: ");
	scanf("%d", &p.idade);
	printf("Digite seu peso: ");
	scanf("%f", &p.peso);
	printf("%d %.2f\n",p.idade,p.peso);
	return 0;
}