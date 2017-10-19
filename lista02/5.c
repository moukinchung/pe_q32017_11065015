#include <stdio.h>

int coeficiente (int n, int k)
{
    return (fatorial(n)/(fatorial(k)*fatorial(n-k)));
}

int fatorial (int n)
{
    if (n==1) {
        return 1;
    }
    return n*fatorial(n-1);
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    
    printf("%d\n",coeficiente(n,k));
    
    return 0;
}