#include <stdio.h>

int main(){
    int n, i;
    
    scanf("%d",&n);
    
    for (i=100; i<=n; i++) {
        if (i%2==0) {
            printf("%d",i);
            
            if (i<n) {
                printf(", ");
            }
            
            else {
                printf("\n");
            }
        }
    }
}