#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    int count = 0;
    c = getchar();
    while ((c=getchar())!= EOF ){
        if (c == '\n' || c == ' ' || c == ',' || c == '.'  ){
            c=getchar();
            if(c != '\n' && c != ' ' && c != ',' && c != '.'){
                count ++;
            }
        }
    }
    printf("%d",count);
}