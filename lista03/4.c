#include <stdio.h>


void calc_transposta(int m[3][3], int t[3][3])
{
	int a, b;
	for (a=0; a<3; a++) {
		for (b=0; b<3; b++) {
			t[b][a]=m[a][b];
		}
	}
}

int main(){
	int a, b;
	
	int matriz[3][3], transposta[3][3];

	for (a=0; a<3; a++) {
		for (b=0; b<3; b++) {
			scanf("%d", &matriz[a][b]);
		}
	}
	
	calc_transposta(matriz,transposta);
	
	for (a=0; a<3; a++) {
		for (b=0; b<3; b++) {
			printf("%d ", transposta[a][b]);
		}
		printf("\n");
	}
	
	return 0;
}
