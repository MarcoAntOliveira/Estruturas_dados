#include "pilha.h"
#include <stdio.h>

int main() {
    int tam = 5;
    char *pilha = criaPilha(tam);


    for (int i = 0; i < tam; i++) {
        printf("%c ", pilha[i]);
    }

    // Libera a memória alocada
    free(pilha);

    return 0;
}
