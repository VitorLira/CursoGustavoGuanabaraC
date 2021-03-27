#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    time_t date;
    struct tm *data;
    time(&date);
    data = localtime(&date);
    int ano = data->tm_year + 1900;

    int nasc, idade;

    printf("Atualmente estamos no ano de %i.\n", ano);
    printf("Em que ano você nasceu? ");
    scanf("%i", &nasc);
    idade = ano - nasc;
    printf("-------------------------------------\n");
    printf("Sua idade atual é %i anos.\n", idade);
    if(idade < 18){
        printf("Você ainda não tem 18 anos. Não pode se alistar.");
    }else{
        printf("Você já fez 18 anos,  Espero sinceramente que você tenha se alistado.");
    }
}
