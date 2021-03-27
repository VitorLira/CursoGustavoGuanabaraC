#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float peso;
    char opc;

    printf("Digite o seu peso na Terra (Kg): ");
    fflush(stdin);
    scanf("%f", &peso);

    printf("\n\t     ESCOLHA UM PLANETA    \n");
    printf("\t===========================\n");
    printf("\t1\tMercúrio\n");
    printf("\t2\tVênus\n");
    printf("\t3\tMarte\n");
    printf("\t4\tJúpter\n");
    printf("\t5\tSaturno\n");
    printf("\t6\tUrano\n");
    printf("\t===========================\n");
    printf("\tDigite um número de Planeta: ");
    fflush(stdin);
    opc = getchar();

    printf("---------------------------------------------------------------\n");
    switch(opc){
    case '1':
        printf("Seu peso em Mercúrio seria %.2fKg.\n", peso*0.37);
        break;
    case '2':
        printf("Seu peso em Vênus seria %.2fKg.\n", peso*0.88);
        break;
    case '3':
        printf("Seu peso em Marte seria %.2fKg.\n", peso*0.38);
        break;
    case '4':
        printf("Seu peso em Júpiter seria %.2fKg.\n", peso*2.64);
        break;
    case '5':
        printf("Seu peso em Saturno seria %.2fKg.\n", peso*1.15);
        break;
    case '6':
        printf("Seu peso em Urano seria %.2fKg.\n", peso*1.17);
        break;
    case '7':
        printf("Seu peso em Neruno seria %.2fKg.\n", peso*1.18);
        break;
    default:
        printf("Seu peso não pode ser calculado para outros planetas. Tente novamente.\n");
        break;
    }
    printf("---------------------------------------------------------------\n");

}
