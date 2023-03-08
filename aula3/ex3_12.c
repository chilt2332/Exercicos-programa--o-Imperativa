#include <stdio.h>
int soma_digitos(int a, int soma){
    soma = soma + (a % 10);
    a = a/10;
    if (a>=1){
        return soma_digitos(a,soma);
    }
    else{
        return soma;
    }
}
int main(){
    int a,soma = 0;
    printf("Indique o numero cujos digitos deseja soma");
    scanf("%d", &a);
    printf("%d\n", soma_digitos(a,soma));
}