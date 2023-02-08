#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define TAM_OBJ 4

struct ponto{
    int x;
    int y;
};

struct objeto{
    char nome[4];
    Ponto* pontos;
    float distancia;
    float deslocamento;
};

void lerQuantidade(int *n, int *t) { 
    scanf("%d %d", n, t);
}

void lerPontos(Objeto **objetos, int n, int t){
    for (int i = 0; i < n; i++){
        scanf("%s", (*objetos)[i].nome);
        for (int j = 0; j < t; j++){
            scanf("%d %d", &(*objetos)[i].pontos[j].x, &(*objetos)[i].pontos[j].y);
        }
    }
}

Objeto *alocaObjetos(int n) {
    Objeto *objetos=(Objeto*) malloc(n * sizeof(Objeto));
    return objetos;
}

void alocaPontos(Objeto **objetos, int n, int t) {
    for (int i = 0; i < n; i++){
        (*objetos)[i].pontos = malloc(t * sizeof(Ponto));
    }
}

void calcularDistancia(Objeto **objetos, int n, int t){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < t - 1; j++){
            (*objetos)[i].distancia += sqrt(pow((*objetos)[i].pontos[j+1].x - (*objetos)[i].pontos[j].x, 2) + pow((*objetos)[i].pontos[j+1].y - (*objetos)[i].pontos[j].y, 2));
        }
    }
}

void calculaDeslocamento(Objeto **objetos, int n, int t){
    for (int i = 0; i < n; i++){
        (*objetos)[i].deslocamento = sqrt(pow((*objetos)[i].pontos[t-1].x - (*objetos)[i].pontos[0].x, 2) + pow((*objetos)[i].pontos[t-1].y - (*objetos)[i].pontos[0].y, 2));
    }
}

void imprime(Objeto *objetos, int n, int t){
    for (int i = 0; i < n; i++){
        printf("%s %.2f %.2f\n", objetos[i].nome, objetos[i].distancia, objetos[i].deslocamento);
    }
}





