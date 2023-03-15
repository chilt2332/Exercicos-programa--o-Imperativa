#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distr_unif(double x, double a, double b){
    if (x<a){
        return 0.0;
    }else if (x>=b){
        return 1;
    }else{
        return(x-a)/(b-a);
    }
}
double exact_prob(double x, double a, double b) {
    if (x < a) {
        return 0.0;
    } else if (x >= b) {
        return 1.0;
    } else {
        return (x - a) / (b - a);
    }
}

int main() {
    double a = 2.0;
    double b = 7.0;
    double x = 4.5;
    double p_exact = exact_prob(x, a, b);
    double p_approx = distr_unif(x, a, b);
    printf("Valor exato da probabilidade: %f\n", p_exact);
    printf("Valor aproximado da probabilidade: %f\n", p_approx);
    return 0;
}
