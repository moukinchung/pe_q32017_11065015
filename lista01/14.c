#include <stdio.h>

int main(){
    int valor, soma=0, i;
    float media;
    
    for (i=0; i<10; i++) {
        scanf("%d", &valor);
        soma += valor;
    }
    
    media=(float)soma/10;
    
    printf("soma = %d\n",soma);
    printf("media = %.1f\n",media);
    
    return 0;
}