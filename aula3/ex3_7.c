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
    int n,flag = 0;
    printf("Idique o número que quer testar\n");
    scanf("%d", &n);
    while (1){
        if (primo(n)==0 && primo(n+2)==0){
            break;
        }
        else{
            n += 1;
        }
    }
    printf("O próximo par de gemeos primos é %d e %d\n", n,n+2);
}