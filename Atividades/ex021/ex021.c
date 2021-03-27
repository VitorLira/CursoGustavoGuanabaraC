#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
        setlocale(LC_ALL, "Portuguese");
        int num;

        printf("===== Inverso ou Oposto =====\n");
        printf("\nDigite um número: ");
        scanf("%i", &num);

        if(num < 0){
            printf("O oposto do %i é igual a %i", num, (-num));
        }else{
            printf("O inverso de %i é igual a %.4f", num, (float)1/num);
        }
}
