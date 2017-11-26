#include <stdio.h>
#include <stdlib.h>

typedef struct alunos{
    char nome[100];
    int matricula;
    
    float p1, p2, p3;
} aluno;



int main(int argc, char ** argv){
    FILE * in;
    FILE * out;
    
    in = fopen("lista_alunos.txt","r");
    out = fopen("media_alunos.txt","w");
    
    aluno lista[50];
    int i;
    
    for(i=0; i<50; i++){
        fscanf(in,"%s %d %f %f %f", lista[i].nome, &lista[i].matricula, &lista[i].p1, &lista[i].p2, &lista[i].p3);
    }
    
    for(i=0; i<50; i++){
        fprintf(out,"%s %04d %.2f\n", lista[i].nome, lista[i].matricula, ((lista[i].p1+lista[i].p2+lista[i].p3)/3) );
    }
    
    int fclose(FILE *in);
    int fclose(FILE *out);
    
    return 0;
}