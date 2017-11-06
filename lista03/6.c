#include <stdio.h>
#include <stdlib.h>

int cmpfunc( const void *a, const void *b )
{
    return (*(int*)a - *(int*)b);
}

float mediana(int *v, int n)
{
	if(n%2==0){
		return (v[n/2]+v[(n/2)-1])/2.0;
	}
	else{
		return v[n/2];
	}
	return 0;
}

int main(){
    int n, i;
    scanf("%d",&n);
    int vetor[n];

    for(i=0; i<n; i++){
        scanf("%d",&vetor[i]);
    }
    qsort(&vetor, n, sizeof(int),cmpfunc);

    printf("%.2f\n",mediana(vetor,n));
    return 0;
}
