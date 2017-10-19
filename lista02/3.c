#include <stdio.h>
#include <math.h>

double pi()
{
    double a=1.0, b=1.0/sqrt(2), t=0.25, p=1.0, a1=0;
    int i;

    for (i=0; i<10; i++) {
        a1=(a+b)/2.0;
        b=sqrt(a*b);
        t=t-(p*pow(a-a1,2));
        p=2*p;
        a=a1;
    }

    return (pow((a+b),2)/(4*t));
}

int main(){
    printf("%.50lf\n", pi());
    return 0;
}
