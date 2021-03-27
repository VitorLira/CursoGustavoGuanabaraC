#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int ano;

    printf("Digite um ano para saber se ele é bissexto: ");
    scanf("%d", &ano);

    if(ano%4==0 && (ano%100!=0 || ano%400==0)){
        printf("O ano %d é bissexto.\n", ano);
    }else{
        printf("O ano %d não é bissexto.\n", ano);
    }
}
