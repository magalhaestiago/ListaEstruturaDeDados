#include <stdio.h>
#include <stdlib.h>
#include "jogadorDeFutebol.c"

int main(){
    JogadorFut *jog;
    jog = atribuirJogador("Tiago", 25, 21, 11);

    imprimirJogador(jog);

    if(bomJogador(jog)){
        printf("SIM");
    } else {
        printf("NAO");
    }
}



/*
int main(){
    int op = -1;

    do{
        printf("===============")
    }while(op != 0);
}

*/