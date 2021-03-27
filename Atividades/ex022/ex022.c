#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    time_t h;
    time(&h);
    struct tm *hora;
    hora = localtime(&h);

    int ht = hora->tm_hour;
    float money;

    printf("-=-=-=-=-=-=-=- CINEMA ESTUDONAuTA =-=-=-=-=-=-=-=\n");
    printf("HORÁRIO DO FILME: 19h - PREÇO DO INGRESSO: R$20,00\n");
    printf("--------------------------------------------------\n");
    printf("Quanto dinheiro você tem? R$");
    scanf("%f", &money);
    printf("Agora são %i horas.", ht);

    if(money >= 20.00 && ht < 19){
        printf("Você consegue comprar o ingreso!\n");
    }else{
        printf("Infelismente não é possível comprar o ingresso!\n");
    }



}
