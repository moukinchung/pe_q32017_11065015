#include <stdio.h>

void inverter(char entrada[])
{
    int n=0, i;
    char aux;
    while (entrada[n]!='\0') {
        n++;
    }
    
    for (i=0; i<n/2; i++) {
        aux=entrada[i];
        entrada[i]=entrada[n-1-i];
        entrada[n-1-i]=aux;
    }
}

int main(){
    char entrada[255];
    fgets(entrada, 255, stdin);
    
    inverter(entrada);
    
    int n=1;
    while (entrada[n]!='\0') {
        printf("%c",entrada[n]);
        n++;
    }
    
    printf("\n");
    
    return 0;
}
