#include <stdio.h>

int soma_de_divizores(int n){
    int soma=1;
    for (int i = n - 1; i>1; i--){
        if (n % i == 0){
            soma += i;
        }
    }
    return soma;
}

int main(){
    int n;
    printf("Indique qual o numero que quer saber a soma dos seus divisores\n");
    scanf("%d", &n);
    printf("%d\n", soma_de_divizores(n));
}