#include <stdio.h>

int par(n)
{
    if (n%2==0) {
        return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n",par(n));
    return 0;
}