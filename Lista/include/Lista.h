#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include<stdlib.h>
#include <math.h>

typedef struct no
{
    int value;
    struct no *proximo;
}No;
void inserir_no_inicio(No **lista, int num);
void inserir_no_final(No **lista, int num);
void inserir_no_meio(No **lista, int num, int ant);
void imprimir_lista(No *lista);
int soma_valores(No *lista);
int media_valores(No *lista);
double desvio_padrao(No *lista);
int remover(No **lista, int num);

#endif 