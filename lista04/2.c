#include <stdio.h>

typedef struct hora{
    int min, seg, dec;
}relogio;

relogio diferenca(relogio t1, relogio t2)
{
    relogio t3 = { .min=0, .seg=0, .dec=0};
    
    t1.seg += t1.min*60;
    t2.seg += t2.min*60;
    
    t3.dec=t2.dec-t1.dec;
    if(t3.dec<0){
        t3.dec *= (-1);
    }
    
    t3.seg=t2.seg-t1.seg;
    if(t3.seg<0){
        t3.seg *= (-1);
    }
    
    while(t3.seg>=60){
        t3.min++;
        t3.seg -=60;
    }
    if(t2.min<t1.min){
        t3.min *= (-1);
    }
    
    return t3;
}

int main(){
    relogio t1, t2, t3;
    
    scanf("%dm %ds %d", &t1.min, &t1.seg, &t1.dec);
    scanf("%dm %ds %d", &t2.min, &t2.seg, &t2.dec);
    
    t3=diferenca(t1,t2);
    printf("%dm %02ds %02d\n", t3.min, t3.seg, t3.dec);
    
    return 0;
}