#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número para saber se\n");
    printf("ele é POSITIVO, NEGATIVO ou NULO.\n");
    printf("\nDigite o número: ");
    fflush(stdin);
    scanf("%d", &num);

    if(num > 0){
        printf("O número digitado é POSITIVO!");
    }else{
        if(num < 0){
            printf("O número digitado é NEGATIVO!");
        }else{
            if(num == 0){
                printf("O número digitado é NULL");
            }
        }
    }
}
