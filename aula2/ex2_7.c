#include <stdio.h>

int potencia(int x,int n){
    int aux = x;
    for (int i = 0; i<n; i++){
        x *= aux;
    }
    return x;
}