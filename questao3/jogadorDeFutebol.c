#include <stdio.h>
#include <stdlib.h>
#include "jogadorDeFutebol.h"

typedef struct jogador_de_fut{
    char *nome;
    int jogos, gols, assistencias;

}JogadorFut;



void imprimirJogador(JogadorFut* j){
    if(j != NULL){
        printf("=============\n");
        printf("%s\n", j->nome);
        printf("%d Jogos\n", j->jogos);
        printf("%d Gols\n", j->gols);
        printf("%d Assistencias\n", j->assistencias);
    }
}

int bomJogador(JogadorFut* j){
    if(j != NULL){
        if(j->jogos > j->gols + j->assistencias)
            return 0;
        else
            return 1;
    } else {
        return -1;
    }
}

JogadorFut* atribuirJogador(char *nomeJogador, int jogosJogador ,int golsJogador, int assistenciasJogador){
    JogadorFut *novo = malloc(sizeof(JogadorFut));

    if(novo != NULL){
        novo->nome = nomeJogador;
        novo->jogos = jogosJogador;
        novo->gols = golsJogador;
        novo->assistencias = assistenciasJogador;
    } else {
        return NULL;
    }
    return novo;
}
// ii) Implemente as operações: “Atribuir”, “Imprimir” e “BomJogador”
