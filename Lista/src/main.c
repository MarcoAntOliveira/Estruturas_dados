#include "Lista.h"
int main() {
    No *lista = NULL;
    inserir_no_inicio(&lista, 10);
    inserir_no_final(&lista, 20);
    inserir_no_inicio(&lista, 5);
    inserir_no_final(&lista, 30);
    inserir_no_meio(&lista, 25, 10);
    inserir_no_meio(&lista, 56, 10);
    
    printf("Elementos da lista: ");
    imprimir_lista(lista);
    int removido = remover(&lista, 25);
    printf("O foi removido com sucesso?: %d\n", removido);
    imprimir_lista(lista);
    int soma = soma_valores(lista);
    printf("o somátorio dos valores da lista é: %d\n", soma);

    int media = media_valores(lista);
    printf("A media dos valores da lista é: %d\n", media);

    int desvio = desvio_padrao(lista);
    printf("o desvio padrão dos valores da lista é: %d\n", desvio);
   

    // Liberar memória
    No *aux;
    while (lista) {
        aux = lista;
        lista = lista->proximo;
        free(aux);
    }

    return 0;
}