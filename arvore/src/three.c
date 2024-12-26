#include "three.h"

NoArv* inserir(NoArv *raiz, int num){
    if(raiz==NULL){
        NoArv *aux = malloc(sizeof(NoArv));
        aux -> valor= num;
        aux -> direita = NULL;
        aux -> esquerda = NULL;
        return aux;
    }else{
        return num < raiz -> valor ? (raiz -> esquerda = inserir(raiz-> esquerda, num)):( raiz -> direita =inserir(raiz-> direita , num));  
        }
    }
