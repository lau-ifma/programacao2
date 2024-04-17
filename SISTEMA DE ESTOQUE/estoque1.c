#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10 // variavel constante

// variaveis globais
char descricao[N][100];
float preco[N];
int quantidade[N];
int codigo[N];
int cont = 0;

void cadastrar(){
    if(cont < N){
        char d[100];
        float p;
        int q;
        printf("DIGITE A DECRIÇÃO: ");
        gets(d);

        printf("DIGITE O PREÇO: ");
        scanf("%f", &p);

        printf("DIGITE O PREÇO: ");
        scanf("%i", &q);
        
        preco[cont] = p;
        quantidade[cont] = q;
        strcpy(descricao[cont], d);
        codigo[cont] = cont+1;

    }
}


void listar(){
    int i;
    for (i =0; i < cont;i++){
        printf("Codigo: %d", codigo[i]);
        printf("descrição: %s", descricao[i]);
        printf("preco: %.2f", preco[i]);
        printf("quantidade: %d", quantidade[i]);
    }
}
