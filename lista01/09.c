#include <stdio.h>

int main(){
    double temperatura;
    int opcao;
    
    scanf("%lf %d", &temperatura, &opcao);
    
    if (opcao==1) {
        printf("%.1lf\n", (( temperatura*1.8) + 32.0) );
    }
    else{
        printf("%.1lf\n", ((temperatura-32)*(0.55)) );
    }
}