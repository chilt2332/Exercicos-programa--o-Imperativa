#include <stdio.h>
#include <math.h>
#define pi 3.1416

float calcule_volume_esfera(){
    float raio,volume;
    printf("Indique o raio da esfera\n");
    scanf("%f", &raio);
    volume = (4/3) * pi * pow(raio,3);
    printf("O volume da esfera é %.2f\n", volume);
    return 0;
}
float calcule_volume_caixa(){
    float volume,altura,profundidade,largura;
    printf("Idique a largura da caixa\n");
    scanf("%f", &largura);
    printf("Idique a altura da caixa\n");
    scanf("%f", &altura);
    printf("Idique a profundidade da caixa\n");
    scanf("%f", &profundidade);
    volume = altura * largura * profundidade;
    printf("A caixa tem volume %.2f\n", volume);
    return 0;
}
int main(){
    int calculo;
    printf("Diga o que quer calcular\n");
    scanf("%d",&calculo);
    if (calculo == 1){
        calcule_volume_esfera();
    }
    if (calculo == 0){
        calcule_volume_caixa();
    }
    return 0;
}