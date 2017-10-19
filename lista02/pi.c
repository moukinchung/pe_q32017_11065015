#include <stdio.h>
#include <math.h>

#define CTE_RAMA (2.0*sqrt(2)/9801.0)
#define CTE_CHUD 12.0

int fatorial (int n)
{
    int fat=1;
    int i;
    
    for (i=1; i<=n; i++) {
        fat = fat*i;
    }
    
    return fat;
}

double ramanujan (int n)
{
    double soma=0.0, aux;
    int k;
    
    for (k=0; k<=n; k++) {
        aux = fatorial(4*k);
        aux *= (1103.0 + 26390.0*k);
        aux /= pow(fatorial(k),4);
        aux /= pow(396.0,4*k);
        soma += aux;
    }
    
    return soma;
}

double chudnovsky (int n)
{
    double soma=0.0, aux;
    int k;
    
    for (k=0; k<=n; k++) {
        aux = pow(-1,k);
        aux *= fatorial(6*k);
        aux *= (13591409.0 + 545140134.0*k);
        aux /= fatorial(3*k);
        aux /= pow(fatorial(k),3);
        aux /= pow(640320,3*k+1.5);
        soma += aux;
    }
    
    return soma;
}

double pi (int n, int serie)
{
    if (serie==0) {
        return ( 1.0/(CTE_RAMA*ramanujan(n)) );
    }
    else {
        return ( 1.0/(CTE_CHUD*chudnovsky(n)) );
    }
}

int main(){
    int n, serie;
    scanf("%d %d", &n, &serie);
    
    if (serie==0) {
        printf("Ramanujan\n");
    }
    
    else {
        printf("Chudnovsky\n");
    }
    
    printf("pi: %.50lf\n",pi(n,serie));
    return 0;
}
