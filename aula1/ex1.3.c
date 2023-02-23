#include <stdio.h>

int main(){
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