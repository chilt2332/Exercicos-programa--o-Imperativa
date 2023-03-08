#include <stdio.h>

int primo(int n){
    int flag = 0;
    for (int i = 2; i<n;i++){
        if (n % i == 0){
            flag = 1;
            break;
        }
    }
    return flag;
}

int main(){
    int n;
    printf("Indique o Limite superior\n");
    scanf("%d", &n);
    for ( int i = 2; i<n ; i++){
        if (primo (i) == 0){
            printf("%d ",i);
        }
    }
    printf("\n");
}