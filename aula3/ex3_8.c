#include <stdio.h>
#include <math.h>
int quadrado_perfeito_1(int n){
    int flag= 0,soma = 0;
    for( int i = 1; i<n; i +=2){
        soma += i;
        if (soma == n){
            flag = 1;
            break;
        }
    }
    return flag;
}
int quadrado_perfeito_2(int n){
    int raiz = sqrt(n);
    if (pow(raiz,2) == n){
        return 1;
    }
    else return 0;
}

int main(){
    int n,soma = 0,flag = 0;
    printf("Indique o número que quer saber se é quadrado perfeito:");
    scanf("%d", &n);
    if (quadrado_perfeito_2(n) == 1 ){
        printf("\nSIM\n");
    }
    else{
        printf("\nNÃO\n");
    }
    if (quadrado_perfeito_1(n) == 1 ){
        printf("\nSIM\n");
    }
    else{
        printf("\nNÃO\n");
    }
}