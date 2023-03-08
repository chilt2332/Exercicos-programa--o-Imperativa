#include <stdio.h>



int main(){
    int numerador, denominador, aux_1, aux_2;
    printf("Indique o numerador da fração que quer reduzir\n");
    scanf("%d", &numerador);
    printf("Indique o denominador da fração que quer reduzir\n");
    scanf("%d", &denominador);
    aux_1 = numerador;
    aux_2 = denominador;
    if (numerador>denominador){
        for(int i = denominador; i>1; i--){
            if (denominador % i == 0 && numerador % i == 0){
                denominador /= i;
                numerador /= i;
                i = numerador + 1;
            }
        }
    }
    else{
        for(int i = numerador; i>1; i--){
            if (denominador % i == 0 && numerador % i == 0){
                denominador /= i;
                numerador /= i;
                i = numerador +1;
            }
        }
    }
    if(aux_1 == numerador){
        printf("A fração %d/%d já está na forma reduzida\n", numerador, denominador);
    }
    else{
        printf("A forma reduzida da fração %d/%d é %d/%d\n",aux_1, aux_2, numerador, denominador);
    }
}