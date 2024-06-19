#include<stdio.h>

// Variável Constante
#define texto "Entrada e saida de dados."
#define info "*** INFORMATIONS ***"

int main() {
	
	printf("%s\n", texto);
	
	//Declarando variáveis
	
	char nome[50] = "";
	int idade = 0;
	float peso= 0.0;
	
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	printf("Digite seu peso: \n");
	scanf("%f", &peso);
	
	printf("\n%s\n", info);
	
	printf("Seu nome eh: %s \n", nome);
	printf("Sua idade eh: %d \n", idade);
	printf("Seu peso eh: %.3f \n", peso);
	
	
	
	
	
}
