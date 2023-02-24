#include <stdio.h>


int main(){
    int dia,mes,ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    if (mes > 7){
        if (mes % 2 == 0 ){
            if (dia < 31){
                printf("%d/%d/%d\n", dia + 1, mes, ano);
            }
            else{
                if (mes != 12){
                    printf("1/%d/%d\n", mes+1, ano);
                }
                else{
                    printf("1/1/%d\n", ano + 1);
                }  
            }

        }
        else{
            if (dia < 30){
                printf("%d/%d/%d\n", dia + 1, mes, ano);
            }
            else{
                if (mes != 12){
                    printf("1/%d/%d\n", mes+1, ano);
                }
                else{
                    printf("1/1/%d\n", ano + 1);
                }  
            }
        }  
    }
    else{
        if (mes % 2 != 0 || mes == 7){
            if (dia < 31){
                printf("%d/%d/%d\n", dia + 1, mes, ano);
            }
            else{
                if (mes != 12){
                    printf("1/%d/%d\n", mes+1, ano);
                }
                else{
                    printf("1/1/%d\n", ano + 1);
                }  
            }
        }
        else{
            if (dia < 30){
                printf("%d/%d/%d\n", dia + 1, mes, ano);
            }
            else{
                if (mes != 12){
                    printf("1/%d/%d\n", mes+1, ano);
                }
                else{
                    printf("1/1/%d\n", ano + 1);
                }  
            }
        }
    }
}