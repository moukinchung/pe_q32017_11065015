#include <stdio.h>

/*Temperaturas*/
float celsius_fahrenheit(float valor)
{
	return valor*(9/5)+32.0;
}

float fahrenheit_celsius(float valor)
{
	return (valor-32)*(5/9);
}

float celsius_kelvin(float valor)
{
	return valor+273.15
}

float kelvin_celsius(float valor)
{
	return valor-273.15;
}

float fahrenheit_kelvin(float valor)
{
	return (valor+459.67)*(5/9);
}

float kelvin_fahrenheit(float valor)
{
	return valor*(9/5)-459.67;
}

/*Base numéricas*/
float binario_decimal(float valor)
{
	float decimal=0, d=1;
	do {
        decimal = decimal+(valor%10)*d;
        d *= 2;
        valor = valor/10;
    }while (valor!=0);
}

float decimal_binario(float valor)
{
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

/*Main*/
int main(){
	int tipo, entrada, saida;
	float valor;

	scanf("%d %d %d %f", &tipo, &entrada, &saida, &valor);

	
	return 0;
}
