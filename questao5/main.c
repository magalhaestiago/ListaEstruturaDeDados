#include "questao5.c"

int main(){
    Esfera *e = criaEsfera(2);

    printf("%.2f\n", retornaRaioEsfera(e));
    printf("%.2f\n", retornaAreaEsfera(e));
    printf("%.2f\n", retornaVolumeEsfera(e));
    

    liberaEsfera(e);

}