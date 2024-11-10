#include "pilha.h"
#include <stdlib.h>

char* criaPilha(int tamanho) {
    // Aloca memória para a pilha
    char* pilha = (char*)malloc(tamanho * sizeof(char));

    // Verifica se a alocação foi bem-sucedida
    if (pilha == NULL) {
        return NULL; // Falha na alocação de memória
    }

    return pilha;
}

void pilhaCheia(char *pilha)
{
    if (pilha == NULL) {
        return NULL; // Falha na alocação de memória
    }

    for (int i = 0; i < tamanho; i++) {
        pilha[i] = 'A' + i;
    }

}
