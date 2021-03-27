#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3, maior, menor, inter;

    printf("Me diga três números e eu colocarei eles em ordem para você.\n");
    printf("Digite o primeiro número: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Digite o segundo número: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("Digite o terceiro número: ");
    fflush(stdin);
    scanf("%i", &n3);
    if(n1>=n2 && n1>=n3 ){
        maior = n1;
        if(n2>n3 || n2 == n1){
            inter = n2;
            menor = n3;
        }else if(n3>n2 || n3 == n1){
            inter = n3;
            menor = n2;
        }
    }else if(n2>=n1 && n2>=n3){
        maior = n2;
        if(n1>n3 || n1 == n2){
            inter = n1;
            menor = n3;
        }else if(n3>n1 || n3 == n2){
            inter = n3;
            menor = n1;
        }
    }else if(n3>=n2 && n3>=n1){
        maior = n3;
        if(n1>n2 || n1 == n3){
            inter = n1;
            menor = n2;
        }else if(n2>n1 || n2 == n3){
            inter = n2;
            menor = n1;
        }
    }
    if(n1 == n2 && n2 != n3 || n2 == n3 && n3 != n1 || n1 == n3 && n3 != n2){
        printf("\nO maior número é %i.\n", maior);
        printf("Os outros dois números são iguais.\n");
    }else if(n1 == n2 && n2 == n3 && n3 == n1){
        printf("\nTodos os números são iguais.\n");
    }else{
        printf("\nO maior número é %i.\n", maior);
        printf("O número intermediário é %i.\n", inter);
        printf("O menor número é %i.\n", menor);
    }
}
