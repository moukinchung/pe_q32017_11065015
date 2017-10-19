#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c)
{
	return (b*b-4*a*c);
}

double x1(double b, double d, double a)
{
	return (-b-sqrt(d))/(2*a);
}

double x2(double b, double d, double a)
{
	return (-b+sqrt(d))/(2*a);
}

double real(double b, double a)
{
	return (-b/2*a);
}

double imaginario(double a, double b, double c)
{
	return sqrt(4*a*c-b*b)/2*a;
}

int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	double d = delta(a,b,c);
	
	if (d==0) {
		return real(b,a);
	}
	
	else if (d>0) {
		printf("%lf %lf\n", x1(b,d,a) , x2(b,d,a) );
	}
	else {
		printf("%lf%+lfi %lf%+lfi\n", real(b,a) , imaginario(a,b,c)*(-1), real(b,a) , imaginario(a,b,c) );
	}

	return 0;
}