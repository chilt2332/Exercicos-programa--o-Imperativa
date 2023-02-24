#include <stdio.h>

int main(){
    float maior = 0.00;
    float a;
    for ( int i = 0; i<=2 ; i++){
        printf("Indique os numeros que quer comparar:\n");
        scanf("%f", &a);
        if (a > maior){
            maior = a;
        }
    }
    printf("The biggest number is :%.2f\n" , maior);
}