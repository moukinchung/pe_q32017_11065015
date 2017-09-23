#include <stdio.h>

int main(){
    int x, y, i, resultado=1;
    
    scanf("%d %d", &x, &y);
    
    for (i=0; i<y; i++) {
        resultado *= x;
    }
    
    printf("%i/n", resultado);
    
    return 0;
}