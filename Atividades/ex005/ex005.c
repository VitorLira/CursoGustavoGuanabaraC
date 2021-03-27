#include <stdio.h>
#include <stdlib.h>

void main(){

    int n;

    printf("Digite um numero inteiro para saber o seu sucessor e seu antecessor: ");
    scanf("%i", &n);
    printf("Analizando o numero, seu antecessor e %i, e seu sucessor e %i.\n", n-1, n+1);

}
