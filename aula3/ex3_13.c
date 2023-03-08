#include <stdio.h>
#include <math.h>


double serie_log(double x, int n){
    double log=0;
    for (int i = 1; i<=n ; i ++){
        log += pow(x,i)/i;
    }
    return log;
}
int main(){
    int n;
    double x;
    printf("Indique o x \n");
    scanf("%lf", &x);
    printf("Indique o n \n");
    scanf("%d", &n);
    printf("%f\n", serie_log(x,n));
}