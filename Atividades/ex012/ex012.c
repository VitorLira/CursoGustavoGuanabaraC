#include <stdio.h>
#include <stdlib.h>

void main(){

    int v1, v2;
    int con, dis, conE;

    printf("\n");
    printf("Digite o primeiro valor: ");
    scanf("%i", &v1);
    printf("Digite o segundo valor: ");
    scanf("%i", &v2);

    con = v1 & v2;
    dis = v1 | v2;
    conE = v1 ^ v2;

    printf("------ OPERACOES BITWISE ------\n");
    printf("Calculando %i \& %i e igual a %i\n", v1, v2, con);
    printf("Calculando %i \| %i e igual a %i\n", v1, v2, dis);
    printf("Calculando %i \^ %i e igual a %i\n", v1, v2, conE);

}
