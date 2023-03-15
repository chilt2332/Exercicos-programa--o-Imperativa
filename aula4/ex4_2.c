#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    int count = 0;
    c = getchar();
    while ((c=getchar())!='\n' ){
        count ++;
    }
    printf("%d",count);
    
}