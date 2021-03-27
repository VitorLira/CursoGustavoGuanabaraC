#include <stdio.h>
#include <stdlib.h>

void main(){

    int num, dobro;
    float terca;

    printf("Digite um numero para saber o seu dobro e a sua terca parte: ");
    scanf("%i", &num);

    dobro = num * 2;
    terca = (float) num / 3;

    printf("O dobro do numero informado e %i, e a terca parte e %.2f.", dobro, terca);

}
