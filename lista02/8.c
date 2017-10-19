#include <stdio.h>

float desconto(int base, int faltas)
{
	return (base/20)*faltas;
}

float acrescimo(int base, int horas)
{
	return (((base/20)/8.0)+40)*horas;
}

float salario(int base, int faltas, int horas)
{
	return base-desconto(base,faltas)+acrescimo(base,horas);
}

int main(){
    int id, faltas, horas, base;
    
    scanf ("%d %d %d", &id, &faltas, &horas);
    
    if (id==1) {
        base = 10000;
		printf("%.f\n",salario(base,faltas,horas));
    }
    
    else if (id==2) {
        base = 8000;
	printf("%.f\n",salario(base,faltas,horas));
    }
    
    else if (id==3) {
        base = 5000;
		printf("%.f\n",salario(base,faltas,horas));
    }
    
    else if (id==4) {
        base = 3000;
		printf("%.f\n",salario(base,faltas,horas));
    }
    
    else {
        base = 2000;
		printf("%.f\n",salario(base,faltas,horas));
    }
}
