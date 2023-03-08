#include <stdio.h>

int fibonacci(int n){
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
        else
            return fibonacci(n-1) + fibonacci(n-2);

}

int main(){
    int n;
    printf("Indique o grau da sequencia de fibonacci que quer descobrir\n");
    scanf("%d", &n);
    printf("A sequencia de fibonacci de grau %d é %d\n",n,fibonacci(n));
}