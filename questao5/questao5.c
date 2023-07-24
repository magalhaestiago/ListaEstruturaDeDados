/*
5 - Crie um Tipo Abstrato de Dados para representar uma Esfera. Inclua as
funções de inicialização necessárias e as operações que retornem o seu raio,
a sua área e o seu volume.
*/
#include <stdio.h>
#include <stdlib.h>
#include "questao5.h"


typedef struct esfera{
    float raio;
}Esfera;

// Inicializa o TAD esfera
Esfera* criaEsfera(float raio){
    Esfera* esf = malloc(sizeof(Esfera));

    if(esf != NULL){
        esf->raio = raio;
    } else {
        return NULL;
    }
}

// Libera o TAD esfera
void liberaEsfera(Esfera* esf){
    free(esf);
}

// Retorna Raio da esfera
float retornaRaioEsfera(Esfera *esf){
    if(esf)
        return esf->raio;
    else
        return 0;
}
// Retorna Área da esfera
float retornaAreaEsfera(Esfera *esf){
    if(esf)
        return 4*PI*quadrado(esf->raio);
    else
        return 0;
}
// Retorna Volume da esfera
float retornaVolumeEsfera(Esfera *esf){
    if(esf)
        return (4*PI*cubo(esf->raio))/3;
    else
        return 0;
}


/* Funções auxiliares para quadrado e cubo */
float quadrado(float x){
    return x*x;
}

float cubo(float x){
    return x*x*x;
}

