#include <stdio.h>
#include <stdlib.h>

void main(){

    int num;
    printf("Digite um numero qualquer: ");
    scanf("%i", &num);
    printf("O numero que voce digitou e %s.", (num % 2 == 0)? "PAR":"IMPAR");

}
