#include <stdio.h>

int main(){
    int id, faltas, horas, base;
    float desconto, acrescimo, salario;
    
    scanf ("%d %d %d", &id, &faltas, &horas);
    
    if (id==1) {
        printf("cargo        : Diretor\n");
        base = 10000;
        desconto = (base/20)*faltas;
        acrescimo = ( (float)((base/20)/8.0)+40)*horas;
        salario = base-desconto+acrescimo;
    }
    
    else if (id==2) {
        printf("cargo        : Gerente\n");
        base = 8000;
        desconto = (base/20)*faltas;
        acrescimo = ( (float)((base/20)/8.0)+40)*horas;
        salario = base-desconto+acrescimo;
    }
    
    else if (id==3) {
        printf("cargo        : Engenheiro\n");
        base = 5000;
        desconto = (base/20)*faltas;
        acrescimo = ( (float)((base/20)/8.0)+40)*horas;
        salario = base-desconto+acrescimo;
    }
    
    else if (id==4) {
        printf("cargo        : Tecnico\n");
        base = 3000;
        desconto = (base/20)*faltas;
        acrescimo = ( (float)((base/20)/8.0)+40)*horas;
        salario = base-desconto+acrescimo;
    }
    
    else {
        printf("cargo        : Operador\n");
        base = 2000;
        desconto = (base/20)*faltas;
        acrescimo = ( (float)((base/20)/8.0)+40)*horas;
        salario = base-desconto+acrescimo;
    }
    
    printf("# de faltas  :  %d\n",faltas);
    printf("# horas-extra:  %d\n",horas);
    printf("descontos    :  %.f\n",desconto);
    printf("acrescimo    :  %.f\n",acrescimo);
    printf("salario      :  %.f\n",salario);
}