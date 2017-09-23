#include <stdio.h>

int main(){
    int valor, soma=0, i;
    
    scanf("%d", &valor);
    
    for (i=1; i<=valor; i++) {
        soma += i;
    }
    
    printf("soma de 1 a %d = %d\n", valor, soma);
    
    return 0;
}