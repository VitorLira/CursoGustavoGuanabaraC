#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int idade;
    float peso;

    printf("Qual é o seu nome? ");
    gets(nome);
    printf("Quantos anos você tem? ");
    scanf("%d", &idade);
    printf("Qual o seu peso? ");
    scanf("%f", &peso);
    printf("Muito prazer, %s. Você tem %d anos e pesa %.2fKg.\n", nome, idade, peso);
    printf("FIM!\n");

}
