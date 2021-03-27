#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    time_t t; // estou criando uma variável com o tipo primitivo da biblioteca - time.h
    struct tm *data; // criei uma strutura 'tm' que armazenas as funções da biblioteca 'time' e apontei para a variável 'data'
    time(&t); // chamo a função 'time' para pegar a a hora do sistema diretamente na varável 't'
    data = localtime(&t); // a função localtime irá pegar a data e hora local da maquina, e armazenar no endereço da variá
    int ano = data->tm_year + 1900;

    int id;
    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%i", &id);
    int idade = ano - id;
    printf("--------------------------------------------------------\n");
    printf("Você tem %i anos, certo? \n", idade);
    printf("Seja bem-vindo(a) ao Banco Estudonauta! \n");
    if(idade >= 65){
        printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
    }
    printf("--------------------------------------------------------\n");


}
