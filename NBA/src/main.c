#include <stdio.h>
#include <stdlib.h>
#include "nba.h"

int main() {
    const char *arquivo = "valores.txt";
    unsigned int qtd_numeros;
    double *valores = le_valores(arquivo, &qtd_numeros);

    if (valores == NULL) {
        fprintf(stderr, "Erro ao ler o arquivo ou arquivo vazio.\n");
        return 1;
    }

    printf("Valores lidos:\n");
    for (unsigned int i = 0; i < qtd_numeros; i++) {
        printf("%lf ", valores[i]);
    }
    printf("\n");

    printf("Maior valor: %lf\n", maior(valores, qtd_numeros));
    printf("Menor valor: %lf\n", menor(valores, qtd_numeros));
    printf("Media: %lf\n", media(valores, qtd_numeros));
    printf("Desvio padrão: %lf\n", desvio(valores, qtd_numeros));
    printf("Amplitude: %lf\n", amplitude(valores, qtd_numeros));

    unsigned int posicao = 2; // Exemplo de posição
    printf("Valor na posição %u: %lf\n", posicao, valor(valores, qtd_numeros, posicao));

    unsigned int qtd_repeticao;
    printf("Valor mais repetido: %lf\n", repetido(valores, qtd_numeros, &qtd_repeticao));

    free(valores);
    return 0;
}
