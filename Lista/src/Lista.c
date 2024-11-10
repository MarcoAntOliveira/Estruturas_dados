#include "Lista.h"

void inserir_no_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo -> value = num;
        novo -> proximo = *lista;
        *lista = novo;
        

    }else{
        printf("Erro ao alocar memória");
    }


}

void inserir_no_final(No **lista, int num) {
    No *aux, *novo = malloc(sizeof(No));
    if (novo) {
        novo->value = num;
        novo->proximo = NULL;

        if (*lista == NULL) {
            *lista = novo;
        } else {
            aux = *lista;
            while (aux->proximo) {
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
    } else {
        printf("Erro ao alocar memória\n");
    }
}
void inserir_no_meio(No **lista, int num, int ant)
{
    No *aux, *novo = malloc(sizeof(No));
    if (novo) {
        novo->value = num;
        novo->proximo = NULL;
        if (*lista == NULL) {
            novo ->proximo = NULL;
            *lista = novo;
        } else {
            aux = *lista;
            while (aux -> value != ant  && aux -> proximo) {
                aux = aux->proximo;
            }
            novo -> proximo = aux ->proximo;
            aux->proximo = novo;
        }
    } else {
        printf("Erro ao alocar memória\n");
    }
}

void imprimir_lista(No *lista) {
    while (lista) {
        printf("%d -> ", lista->value);
        lista = lista->proximo;
    }
    printf("NULL\n");
}

int soma_valores(No *lista)
{
int soma = 0;
No *aux = lista;

while(aux){
    soma += aux ->value;
    aux = aux ->proximo;
}

return soma;

}

int media_valores(No *lista)
{
int soma = 0;
int qtd_value = 0;
int media;
No *aux = lista;

while(aux){
    soma += aux ->value;
    aux = aux ->proximo;
    qtd_value += 1;

}
media = soma/qtd_value;

return media;

}

double desvio_padrao(No *lista)
{
int soma = 0.0;
double qtd_value = 0.0;
double desvio = 0.0;
int media = media_valores(lista);
No *aux = lista;
while(aux){
    soma += pow(aux ->value - media, 2);
    aux = aux ->proximo;
    qtd_value += 1.0;
}
return  qtd_value > 1.0 ? sqrt(soma / qtd_value) : 0.0;

}

int remover(No **lista, int num)
{
    No *aux, *remover = NULL;
    if(*lista){
        if((*lista)-> value == num){
            remover = *lista;
            *lista = remover -> proximo;
        }else{
            aux = *lista;
            while(aux ->proximo && aux->proximo -> value != num){
                aux = aux ->proximo;

            }
            if(aux-> proximo){
                remover = aux -> proximo;
                aux-> proximo = remover -> proximo;

            }


        }
    }
    if(remover == NULL){
        return -1;
    }
    return 1;
}
