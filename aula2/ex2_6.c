#include <stdio.h>

float mediana(float primeiro,float segundo,float terceiro){
    float mediana;
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
    return mediana;
}
int main(){
    float primeiro, segundo, terceiro;
    printf("Indique os 3 valores que quer descobrir a mediana\n");
    scanf("%f %f %f", &primeiro, &segundo, &terceiro);
    printf("A mediana é: %.2f \n" , mediana(primeiro,segundo,terceiro)); 
}