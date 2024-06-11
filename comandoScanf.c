#include<stdio.h>

int main() {
	
	int idade = 0;
	float pi = 0;
	char car;
	char nome[20];
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	printf("Sua idade eh: %d \n", idade);
	
	printf("\n");	
	/* ----------------------------- */
	
	printf("Digite o valor de PI: \n");
	scanf("%f", &pi);
	
	printf("Valor de PI = %.2f\n", pi);
	
	/* ---------------------------- */
	
	getc(stdin);
	
	printf("Escreva a inicial do seu nome: \n");
	scanf("%c", &car);
	
	printf("A inicial eh: %c\n", car);
	
	printf("\n");
	
	/* ---------------------------- */
	
	printf("Escreva seu nome: \n");
	scanf("%s", nome);
	
	printf("Seu nome eh: %s", nome);

	
	
	
	
	
	
}
