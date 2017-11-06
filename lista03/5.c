#include <stdio.h>
#include <stdlib.h>

int* repeticoes(int n, int *v)
{
    int *aux = malloc(sizeof(int)*n);
    
    for(int i=0; i<n; i++){
    	int c=0;
    	for(int j=0; j<n; j++){
			if(v[i]==v[j]){
				c++;
			}
		}
		aux[i]=c;
	}
	return aux;
}

void exibir(int *v, int *repetidos, int n)
{
	for(int i=0; i<n; i++){
		if(repetidos[i]>1){
			printf("%d-%d ", v[i], repetidos[i]);
			for(int j=0; j<n; j++){
				if(v[i]==v[j]){
					repetidos[j]=0;
				}
			}
		}
	}
	printf("\n");
}

int main(){
    int n, i;
    scanf("%d",&n);
    
    int *v=malloc(sizeof(int)*n);
    
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    int *repetidos=repeticoes(n,v);
    
    exibir(v,repetidos,n);

    return 0;
}
