#include <stdio.h>

int main(){
    int valor;
    
    scanf("%i",&valor);
    
    if (valor%2==0) {
        printf("par\n");
    }
    
    else {
        printf("impar\n");
    }
    
    return 0;
}
