#include <stdio.h>

int main(){
    float x,res;
    printf("Indique qual o valor de x que pretende usar para calcular o polinomio\n");
    scanf("%f", &x);
    res = ((((3*x + 2)*x -5)*x - 1)*x +7)*x- 6;
    printf("%f\n",res);
}