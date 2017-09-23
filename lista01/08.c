#include <stdio.h>

int main(){
    int i, c, fibonacci=1, anterior=0, resultado;
    scanf("%d", &i);
    
    for (c=0; c<=i; c++) {
        if (c==0) {
            printf("0");
        }
        else if (c==1) {
            printf("1");
        }
        else {
            resultado = fibonacci + anterior;
            anterior = fibonacci;
            fibonacci = resultado;
            printf("%d",(resultado));
        }
        if (c!=i){
            printf(", ");
        }
        else{
            printf("\n");
        }
    }
    
    return 0;
}