#include <stdio.h>
#include <stdlib.h>

void main(){

    char nome1[20], nome2[20], nome3[20];
    char s1, s2, s3;
    float n1, n2, n3;

    printf("    Cadastrando a primeira pessoa: \n");
    printf("------------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome1);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    s1 = getchar();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("\n");
    printf("    Cadastrando a segunda pessoa:  \n");
    printf("------------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    s2 = getchar();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &n2);
    printf("\n");
    printf("    Cadastrando a terceira pessoa: \n");
    printf("------------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    s3 = getchar();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &n3);
    printf("\n");
    printf("             Lista Completa.       \n");
    printf("------------------------------------\n");
    printf("Nome                   SEXO     NOTA\n");
    printf("%-20s\t%c\t%.2f\n", nome1, s1, n1);
    printf("%-20s\t%c\t%.2f\n", nome2, s2, n2);
    printf("%-20s\t%c\t%.2f\n", nome3, s3, n3);

}
