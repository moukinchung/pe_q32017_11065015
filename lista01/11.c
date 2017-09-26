#include <stdio.h>

int main(){
    int valor, opcao, i=0, j=0, d=1;
    int binario[50], decimal=0;

    scanf("%d %d", &valor, &opcao);

    if (opcao==1) {
        while (valor>0) {
            binario[i]=valor%2;
            i++;
            valor=valor/2;
        }

        for (j=i-1; j>=0; j--) {
            printf("%d",binario[j]);
        }
        printf("\n");
    }

    else {
        do {
            decimal = decimal+(valor%10)*d;
            d *= 2;
            valor = valor/10;
        }while (valor!=0);

        printf("%d",decimal);
    }
}
