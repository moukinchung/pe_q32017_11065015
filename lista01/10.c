#include <stdio.h>

int main(){
    double temperatura;
    int opcao;
    
    scanf("%lf %d", &temperatura, &opcao);
    
    if (opcao==1) {
        printf("%.2lf\n", (temperatura + 273.15) );
    }
    else{
        printf("%.2lf\n", (temperatura - 273.15) );
    }
}