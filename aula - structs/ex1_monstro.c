#include <stdio.h>

typedef struct 
{
   int vida;
   int maximo;
   int ataque;
}Monstro;

Monstro atacar(Monstro atacante, Monstro atacado){
    atacado.vida -= atacante.ataque;
    return atacado;
};

Monstro curar (Monstro monstro, int remedio){
    monstro.vida += remedio;
    if (monstro.vida  > monstro.maximo){
        monstro.vida = monstro.maximo;
    }
}

void main(){
    Monstro dragao = {3000, 3000, 1200};
    Monstro cavaleiro = {2000, 2000, 600};

    cavaleiro = atacar(dragao, cavaleiro);
    printf("Cavaleiro: %d", cavaleiro.vida);
    cavaleiro = curar(cavaleiro, 100);
    printf("\nCavaleiro: %d", cavaleiro.vida);
    
}