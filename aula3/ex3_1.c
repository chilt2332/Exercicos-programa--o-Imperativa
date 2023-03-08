#include <stdio.h>
#include <math.h>

int main(){
    float x,res;
    printf("Indique qual o valor de x que pretende usar para calcular o polinomio\n");
    scanf("%f", &x);
    res = 3*pow(x,5) + 2*pow(x,4) - 5*pow(x,3) - pow(x,2) + 7*x - 6;
    printf("%f\n",res);
}