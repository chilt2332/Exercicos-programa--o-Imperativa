#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    printf("Indique o primeiro numero:");
    scanf("%d", &a);
    printf("\nIndique o segundo numero:");
    scanf("%d", &b);
    int aux = a * b,res;
    if (a>b){
        for ( int i = aux; i>=a; i--){
            if ( i % a == 0 && i % b == 0){
                res = i;
            }
        }
    }
    else{
        for ( int i = aux; i>=b; i--){
            if ( i % a == 0 && i % b == 0){
                res = i;
            }
        }
    }
    printf("\nO minimo multiplo comum é %d\n", res);
}