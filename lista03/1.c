#include <stdio.h>

int conta_vogais(char entrada[])
{
    int n=0, vogais=0;
    
    while (entrada[n]!='\0') {
        if (entrada[n] == 'a'  || entrada[n]=='e' ||entrada[n] == 'i'  || entrada[n]=='o' ||entrada[n] == 'u') {
            vogais++;
        }
        n++;
    }
    
    return vogais;
}

int main(){
    
    char entrada[255];
    fgets(entrada, 255, stdin);
    
    printf("%d\n",conta_vogais(entrada));
    return 0;
}