#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    int valor;
    while ((c = getchar())!= EOF){
        if ( c=='A' || c=='E' || c=='I' || c=='L' || c=='N' || c=='O' || c=='R' || c=='S' || c=='T' || c=='U' || c=='V'){
            valor += 1;
        }
        else{
            if(c=='D' || c=='G'){
                valor += 2;
            }
            else{
                if(c=='B' || c=='C' || c=='M' || c=='P'){
                    valor += 3;
                }
                else{
                    if(c=='B' || c=='C' || c=='M' || c=='P'){
                        valor += 3;
                    }
                    else{
                        if(c=='F' || c=='H' || c=='V' || c=='W' || c=='Y'){
                            valor+=4;
                        }
                    }
                }
            }
        }  
    }
    printf("%d", valor);  
}