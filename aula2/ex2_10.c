#include <stdio.h>

int bisexto(int ano){
    if (ano % 4 == 0){
        if(ano % 100 == 0 && ano % 400 != 0){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}

int main(){
    int ano;
    printf("Indique que ano quer saber e é ou nao bisexto:\n");
    scanf("%d", &ano);
    if (bisexto(ano) == 1){
        printf("%d é um ano bisexto\n", ano);
    }
    else{
        if(bisexto(ano)==0){
            printf("%d é um ano bisexto\n", ano);
        }
        else{
        printf("Desculpe mas ocorreu um erro");
        }
    }
}