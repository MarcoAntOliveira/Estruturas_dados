#include <stdio.h>
#include <stdlib.h>
#ifndef ARVORE_H
#define ARVORE_H


typedef struct no {
    int valor;
    struct no *esquerda;
    struct no *direita;
} NoArv;

NoArv* inserir(NoArv *raiz, int num);
void mprimir(NoArv *raiz);

#endif