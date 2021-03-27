#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float valor;
    char opc;

    printf("Digite o preço de um produto R$: ");
    fflush(stdin);
    scanf("%f", &valor);

    printf("\n\t    ESCOLHA UM PERÍODO   \n");
    printf("\t===========================\n");
    printf("\t1\tCarnaval [+10%%]\n");
    printf("\t2\tFérias Escolares [+20%%]\n");
    printf("\t3\tDia das Crianças [+5%%]\n");
    printf("\t4\tBlack Fridey [-30%%]\n");
    printf("\t5\tNatal [-5%%]\n");
    printf("\t===========================\n");
    printf("\tDigite sua opção: ");
    fflush(stdin);
    opc = getchar();

    printf("---------------------------------------------------------------\n");
    switch(opc){
    case '1':
        printf("Na época de CARNAVAL, o preço do produto vai R$:%.2f.\n", valor + (valor*10/100));
        break;
    case '2':
        printf("Na época de FÉRIAS, o preço do produto vai R$:%.2f.\n", valor + (valor*20/100));
        break;
    case '3':
        printf("Na época do DIA DAS CRIANÇAS, o preço do produto vai R$:%.2f.\n", valor + (valor*5/100));
        break;
    case '4':
        printf("Na época de BLACK FRIDEY, o preço do produto vai R$:%.2f.\n", valor - (valor*30/100));
        break;
    case '5':
        printf("Na época de NATAL, o preço do produto vai R$:%.2f.\n", valor - (valor*5/100));
        break;
    default:
        printf("Em épocas assim, mantemos o preço do produto em R$:%.2f.\n", valor);
        break;
    }
    printf("---------------------------------------------------------------\n");
    printf("Volte Sempre!\n");

}
