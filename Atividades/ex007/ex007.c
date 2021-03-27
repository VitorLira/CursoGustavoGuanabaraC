#include <stdio.h>
#include <stdlib.h>

void main(){

    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    printf("Antes da Letra \"%c\" temos a letra \"%c\" e apos temos a letra \"%c\".", letra, letra-1, letra+1);

}
