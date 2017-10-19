#include <stdio.h>

float volume(float largura, float altura, float comp)
{
    return(largura*altura*comp);
}

int main(){
    float larg, alt, comp;
    
    scanf("%f %f %f",&larg,&alt,&comp);
    printf("%.2f\n", volume(larg,alt,comp));
    
    return 0;
}