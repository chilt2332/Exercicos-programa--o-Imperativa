#include <stdio.h>

int main(){
    float valor;
    printf("Indique o valor que quer que seja pago:\n");
    scanf("%f", &valor); 
    float vinte = 0, dez = 0, cinco = 0, um = 0;
    while (valor >= 20){
        vinte += 1;
        valor -= 20;
    }
    while (valor >= 10){
        dez += 1;
        valor -= 10;
    }
    while (valor >= 5){
        cinco += 1;
        valor -= 5;
    }
    while (valor >= 1){
        vinte += 1;
        valor -= 1;
    }
    if (valor != 0){
        printf("Nao há como pagar a totalidade, sobraram %.2f centimos:\n" , valor);
        printf("Se desejar receber o restante Digite : 1, caso contrario Digite : 2 \n");
        int resposta;
        scanf("%d" , &resposta);
        if (resposta == 1 || resposta == 2){
            if (resposta == 1){
                printf("O valor vai ser pago em %.0f notas de 20, %.0f notas de 10, %.0f notas de 5 e em %.0f notas de um\n" , vinte, dez, cinco, um);
            }
            else{
                printf("Lamento nao poder ajudar");
            }
        }
        else{
            printf("HAHAHA, muito engraçado eu disse para digitar 2 ou 1 e %d nao é nenhum dos dois", resposta);
        }
    }
    else{
        printf("O valor vai ser pago em %.0f notas de 20, %.0f notas de 10, %.0f notas de 5 e em %.0f notas de um\n" , vinte, dez, cinco, um);
    }
}