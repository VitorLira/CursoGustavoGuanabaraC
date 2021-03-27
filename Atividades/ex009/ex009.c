#include <stdio.h>
#include <stdlib.h>

void main(){

    char prod[30];
    float prec, desc, pref;

    printf("Produto: ");
    gets(prod);
    printf("Preco do produto: ");
    scanf("%f", &prec);
    printf("Desconto: (%%) ");
    scanf("%f", &desc);
    pref = prec - ((prec * desc) / 100);
    printf("O produto %s custava R$%.2f\n", prod, prec);
    printf("Porem, com %.2f%% de desconto, passa a custar RS%.2f.\n", desc, pref);
}
