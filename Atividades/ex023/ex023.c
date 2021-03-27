#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite o primeiro número: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    fflush(stdin);
    scanf("%d", &n2);

    if (n1>n2){
        printf("O primeiro número é o maior!.");
    }else{
        if (n1<n2){
            printf("O segundo número é o maior!");
        }else{
            if (n1==n2){
                printf("Os dois números são iguais!");
            }
        }
    }
}
