#include <stdio.h>
#include <math.h>
#define pi 3.1416

int main(){
    float raio,volume;
    printf("Indique o raio da esfera\n");
    scanf("%f", &raio);
    volume = (4/3) * pi * pow(raio,3);
    printf("O volume da esfera é %f\n", volume);
    return 0;
}