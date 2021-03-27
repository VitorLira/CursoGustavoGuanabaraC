#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%i", &n);

    if(n%2==0){
        printf("O valor %i é \"Par\".\n", n);
    }else{
        printf("O valor %i é \"Ímpar\".\n", n);
    }

}
