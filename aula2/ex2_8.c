#include <stdio.h>

int main(){
    int total = 0,divisor = 0;
    float media;
    int x;
    printf("Digite um número diferente de 0\n");
    scanf("%d"  , &x);
    while ( x != 0){
        total += x;
        divisor += 1;
        printf("Se quiser terminar o programa Digite 0, caso queira adicionar mais algum numero é media Digite:");
        scanf("%d"  , &x);
    }
    if (divisor == 0){
        printf("Eu avisei que o numero tinha de ser diferente de 0\n");
    }
    else{
        media = total / divisor;
        printf("A media é aproximadamente %.2f\n", media);
    }
}