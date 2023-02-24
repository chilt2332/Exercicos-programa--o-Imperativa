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

int proximo_bisexto(int ano){
    while (bisexto(ano) != 1){
        ano += 1;
    }
    return ano;
}

int main(){
    int ano,aux;
    printf("Indique que ano quer saber e é ou nao bisexto:\n");
    scanf("%d", &ano);
    aux = ano;  
    if (aux == proximo_bisexto(ano)){
        printf("%d é um ano bisexto\n", aux);
    }
    else{
        printf("O proximo ano bisexto é %d\n", proximo_bisexto(ano));
    }
}