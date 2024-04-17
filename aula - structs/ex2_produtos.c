#include <stdio.h>
#include <string.h>
#define MAXIMO 10

typedef struct{
    int id;
    char descricao[100];
    float preco;
    int estoque;
}Produto;


typedef struct{
    Produto produtos[10];
    int n;
}Lista;


void main(){
    Lista loja;
    loja.n = 0;
    loja.produtos->id = 2;
    loja.produtos->estoque = 8;
    strcpy(loja.produtos->descricao, "produto 1");
    loja.produtos->preco = 20.6;


    Produto p;
    p.id =10;
    strcpy(p.descricao , "bxhbhxs");
    p.estoque = 30;
    p.preco = 10.5;

    // loja cadastrar (loja, p);

    mostrar(loja);


}


Lista cadastrar (Lista lista , Produto p){
    if (lista.n < MAXIMO){
        lista.produtos[lista.n] = p;
        if (lista.n == 0){
            lista.produtos[lista.n].id = 1;
        }else{
            lista.produtos[lista.n].id = lista.produtos[lista.n-1].id + 1;
        }
        lista.n++;

    }else{
        printf("Lista lotada!");
    }
    return lista;
}

mostrar (Lista lista){
    int i;
    for (i = 0; i <= lista.n ; i++){
        printf("id: %d\n", lista.produtos[i].id );
        printf("descricao: %s\n",  lista.produtos[i].descricao );
        printf("estoque: %.2f\n", lista.produtos[i].preco);
        printf("preco: %d\n",  lista.produtos[i].estoque);
    }
}
