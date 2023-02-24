#include <stdio.h>

int proximo_primo(int primo){
    primo += 1;
    int flag = 1, a = 1;
    while (flag != 0){
        flag = 0;
        for (int i = 2 ; i<primo; i++){
            if (primo % i == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            return primo;
        }
        primo += 1;
    }
}

int main(){
    int valor , primo = 2;
    printf("Indique o número que quer dividir em fatores primos:\n");
    scanf("%d",&valor);
    while (valor != 1){
        if (valor % primo != 0){
            primo = proximo_primo(primo);
        }
        else{
            valor = valor / primo;
            printf("%d " , primo);
        }
    }
}