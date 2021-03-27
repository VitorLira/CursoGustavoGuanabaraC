#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    char est[2];

    printf("Em que estado do Brasil você nasceu? digite a sigla: ");
    fflush(stdin);
    gets(est);

    printf("Quem nasce em %s é ", est);

    if(strcmp (est, "CE") == 0){
        printf("Cearense.\n");
    }else{
        if(strcmp (est, "AC") == 0){
            printf("Acriano.\n");
        }else{
            if(strcmp (est, "AL") == 0){
                printf("Alagoano.\n");
            }else{
                if(strcmp (est, "BA") == 0){
                    printf("Baiano.\n");
                }else{
                    if(strcmp (est, "GO") == 0){
                        printf("Goiano.\n");
                    }else{
                        if(strcmp (est, "RJ") == 0){
                            printf("Fluminense.\n");
                        }else{
                            if(strcmp (est, "SP") == 0){
                                printf("Paulista.\n");
                            }else{
                                printf(" natural da sua cidade, mas não sei como te chamar!\n");
                            }
                        }
                    }
                }
            }
        }
    }
}
