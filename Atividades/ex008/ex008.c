#include <stdio.h>
#include <stdlib.h>

void main(){

    float n1, n2, m;
    char nome[30];

    printf("Nome do aluno: ");
    gets(nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nora: ");
    scanf("%f", &n2);
    m = (n1+n2) / 2.0;
    printf("A media de %s foi: %.2f", nome, m);
}
