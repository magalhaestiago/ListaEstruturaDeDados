#define PI 3.14

typedef struct esfera Esfera;


// Funções para criar e liberar o TAD esfera
Esfera* criaEsfera(float raio);
void liberaEsfera(Esfera* esf);


// Funções requisitadas pela questão
float retornaRaioEsfera(Esfera *esf);
float retornaAreaEsfera(Esfera *esf);
float retornaVolumeEsfera(Esfera *esf);

// Funções auxiliares
float quadrado(float x);
float cubo(float x);