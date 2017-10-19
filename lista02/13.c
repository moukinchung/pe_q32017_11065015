#include <stdio.h>

unsigned int mdc(unsigned int m, unsigned int n)
{
	if (n==0) {
		return m;
	}
	return mdc(n,m%n);
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	printf("%d\n",mdc(n,m));
	
	return 0;
}
