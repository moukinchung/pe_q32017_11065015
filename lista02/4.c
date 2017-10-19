#include <stdio.h>
#include <math.h>

float soma(float x, float y)
{
    return (x+y);
}

float subtracao(float x, float y)
{
    return (x-y);
}

float multiplica(float x, float y)
{
    return (x*y);
}

float divisao(float x, float y)
{
    return (x/y);
}

float potencia(float x, float y)
{
    return (pow(x,y));
}

int main(){
    unsigned int opcao;
    float x, y;
    
    scanf("%d %f %f", &opcao, &x, &y);
    if (opcao==1) {
        printf("%f\n",soma(x,y));
    }
    else if (opcao==2) {
        printf("%f\n",subtracao(x,y));
    }
    else if (opcao==3) {
        printf("%f\n",multiplica(x,y));
    }
    else if (opcao==4) {
        printf("%f\n",divisao(x,y));
    }
    else {
        printf("%f\n",potencia(x,y));
    }
    
    return 0;
}