#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("     Listagem de Alunos    \n");
    printf("Nome                    Nota\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("João Vitor\t\t8.5\n");
    printf("Bianca Martins\t\t9.3\n");
    printf("Cláudio Sá\t\t10.0\n");
    printf("Maria Glaudia\t\t6.9\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

}
