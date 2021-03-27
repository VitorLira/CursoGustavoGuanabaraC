#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    char opc;

    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);

    printf("==========================\n");
    printf("+\tAdição.\n");
    printf("-\tSubtração.\n");
    printf("*\tMultiplicação.\n");
    printf("/\tDivisão.\n");
    printf("==========================\n");

    printf("Digite o sinal da operação desejada: ");
    fflush(stdin);
    opc = getchar();

    switch(opc){
    case '+':
        printf("A soma entre %i + %i é igual a %i.\n", n1, n2, n1+n2);
        break;
    case '-':
        printf("A subtração entre %i e %i é igual a %i.\n", n1, n2, n1-n2);
        break;
    case '*':
        printf("A Multiplicação entre %i e %i é igual a %i.\n", n1, n2, n1*n2);
        break;
    case '/':
        printf("A divisão entre %i e %i é igual a %i.\n", n1, n2, n1/n2);
        break;
    default:
        printf("Opção invalida.\n");
        break;
    }

}
