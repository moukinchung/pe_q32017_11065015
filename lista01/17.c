#include <stdio.h>

int main(){
    int x, y, i, soma_quadrado=0, quadrado_soma=0, diferenca;
    
    scanf("%d %d", &x, &y);
    
    for (i=x; i<=y; i++) {
        soma_quadrado += i*i;
        quadrado_soma += i;
    }
    
    quadrado_soma *= quadrado_soma;
    diferenca = quadrado_soma - soma_quadrado;
    
    printf("soma dos quadrados = %d\n", soma_quadrado);
    printf("quadrado da soma   = %d\n", quadrado_soma);
    printf("diferenca          = %d\n", diferenca);
    
    return 0;
}