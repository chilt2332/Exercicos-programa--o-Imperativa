#include <stdio.h>

int main(){
    float primeiro, segundo, terceiro, mediana;
    printf("Indique os 3 valores que quer descobrir a mediana\n");
    scanf("%f %f %f", &primeiro, &segundo, &terceiro);
    if (primeiro > segundo){
        if (primeiro > terceiro){
            if (terceiro > segundo){
                mediana = terceiro;
            }
            else{
                mediana = segundo;
            }
        }
        else{
            mediana = primeiro;
        }
    }
    else{
        if (primeiro > terceiro){
            mediana = primeiro;
        }
        else{
            if (segundo > terceiro){
                mediana = terceiro;
            }
            else{
                mediana = segundo;
            }
        }
    }
    printf("A media é: %.2f" , mediana); 
}