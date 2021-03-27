#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float comp, desc = 0;

    printf("Qual foi o valor total das compras? RS");
    scanf("%f", &comp);

    printf("==========================\n");
    printf("Você comprou R$%.2f na nossa loja.\n", comp);

    if(comp >= 500.00){
      desc = (comp*10)/100;
      printf("======== ATENÇÃO ========\n");
      printf("Por fazer mais de R$500 em compras, você vai receber R$%.2f de desconto.\n", desc);
      printf("O valor total a ser pago será de R$%.2f.\n", (comp-desc));
    }
      printf("Volte sempre!\n");
      printf("==========================\n");
}
