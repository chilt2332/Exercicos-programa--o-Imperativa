#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double calcula_raiz(int a){
    double eps = 0.01, x0 = a/2, x1 = (x0+(a/x0))/2;
    while (pow(abs(x1-x0),2)>pow(eps,2)){
        x0 = x1;
        x1 = (x0 +(a/x0))/2;
    }
    return x1;
}


int main(){
    float alfa = 0.01;
    int a;
    scanf("%d", &a);
    printf("%f", calcula_raiz(a));
    return 0;
}