#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite doi número para ser colocados em ordem crescente.\n");
    printf("Digite o primeiro número: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    fflush(stdin);
    scanf("%d", &n2);

    if (n1 > n2){
        printf("Os números em ordem são %d e %d", n2, n1);
    }else{
        if (n2 > n1){
            printf("Os números em ordem são %d e %d", n1, n2);
        }else{
            if (n1 == n2){
                printf("Os números são iguais não existe ordem crescente.");
            }
        }
    }

}
