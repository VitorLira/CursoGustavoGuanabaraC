#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num, desl;

    printf("Digite um numero: ");
    scanf("%i", &num);
    printf("Digite o deslocamento: ");
    scanf("%i", &desl);

    printf("\n------ OPERAÇÕES SHIFT ------");
    printf("\nCalculando %i >> %i é igual a %i", num, desl, (num >> desl));
    printf("\nCalculando %i << %i é igual a %i\n", num, desl, (num << desl));

}
