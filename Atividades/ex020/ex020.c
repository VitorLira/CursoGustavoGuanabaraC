#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float dis;

    printf("======== TABELA DE PREÇOS ========\n");
    printf("Viagens até 200Km\tR$0.50/Km\n");
    printf("A partir de 200Km\tR$0.35/Km\n");
    printf("----------------------------------\n");
    printf("Distência total da viagem, em Km: ");
    scanf("%f", &dis);

    if(dis < 200){
        printf("Uma viagem de %.1f Km vai custar R$0,50/Km\n", dis);
        printf("Valor Total: R$%.2f.", 0.50*dis);
    }else{
        printf("Uma viagem de %.1f Km vai custar R$0,35/Km\n", dis);
        printf("Valor Total: R$%.2f.", 0.35*dis);
    }
}
