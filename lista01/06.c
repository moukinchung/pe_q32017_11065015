#include <stdio.h>

int main(){
    int x, i, fatorial=1;
    
    scanf("%i",&x);
    for (i=1; i<=x; i++) {
        fatorial *= i;
    }
    
    printf("%i\n",fatorial);
    
    return 0;
}