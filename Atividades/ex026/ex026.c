#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "portuguese");

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data->tm_year+1900;

    int nas;

    printf("Atualmente estamos no ano de %i.\n", ano);
    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%i", &nas);
    printf("----------------------------------------------------\n");
    printf("Sua idade atual é de %i anos.\n", ano - nas);

    if(ano - nas > 18){
        int x = nas + 18;
        int y = (ano - nas) - 18;
        printf("Seu Alistamento foi em %i. Já se passaram %i anos.\n",x ,y);
    }else{
        if(ano - nas < 18){
            int x = nas + 18;
            int y = 18 - (ano - nas);
            printf("Seu alistamento será em %i. Ainda falta %i anos\n.", x, y);
        }else{
            printf("Você completa 18 anos exatamente em %i. Vá se alistar!\n", ano);
        }
    }
    printf("----------------------------------------------------\n");
}
