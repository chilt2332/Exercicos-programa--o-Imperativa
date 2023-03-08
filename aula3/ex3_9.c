#include <stdio.h>

int main(){
    int a, b, iterações = 1,flag_1 = 0, flag_2 = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("mdc(%d,%d) = ", a, b);
    while (1){
        flag_1 = 0;
        flag_2 = 0; 
        while (a<b){
            b -= a;
            flag_1 = 1;
        }
        if (flag_1 == 1){
            printf("mdc(%d,%d) = ", a, b);
            iterações += 1;
        }
        while (b<a){
            a-=b;
            flag_2 = 1;
        }
        if (flag_2 == 1){
            printf("mdc(%d,%d) = ", a, b);
            iterações += 1;
        }
        if (a == b){
            break;
        }
    }
    if (a>b){
        printf("%d\n", a);
    }
    else{
        printf("%d\n", b);
    }
    printf("Iteraçoes : %d\n" , iterações);
}