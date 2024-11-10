#ifndef NBA_H
#define NBA_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
 * Abre o arquivo cujo nome eh recebido por parametro ("arquivo") para leitura.
 * Retorna um ponteiro para o arquivo aberto.
 */
FILE *abre_arquivo (const char *arquivo);

/*
 * Fecha o arquivo recebido por parametro.
 * Retorna 0 caso consiga fechar o arquivo, qualquer outro valor caso contrario.
 */
int fecha_arquivo (FILE * arq);
/*
 * Le os valores que estao dentro do "arquivo" e retorna um vetor contendo os valores.
 * Retorna dentro de "qtd_numeros" a quantidade de nC:meros existentes dentro do arquivo lido.
 * Caso nC#o for possC-vel ler o arquivo, "qtd_numeros" deve conter ZERO e retornar a constante NULL.
 * Se "qtd_numeros" for invalido, a leitura deve ser invalidade e retornar a constante NULL.
 */
double * le_valores (const char *arquivo, unsigned int *qtd_numeros);

/*
 * Essa funC'C#o retorna o maior valor presente no array.
 * Caso for um array invC!lido, retorna a constante HUGE_VAL (em math.h)
 * */

double maior (double *valores, unsigned int qtd_numeros);

/*
 * Essa função retorna o menor valor presente no array.
 * Caso for um array invC!lido, retorna a constante HUGE_VAL (em math.h)
 * */
double menor (double *valores, unsigned int qtd_numeros);

/*
 * Essa funC'C#o retorna a mC)dia dos valores presentes no array.
 * Caso for um array invC!lido, retorna a constante HUGE_VAL (em math.h)
 * */
  double media (double *valores, unsigned int qtd_numeros);
  

/*
 * Essa funC'C#o retorna o desvio padrC#o dos valores presentes no array.
 * Caso for um array invC!lido, retorna a constante HUGE_VAL (em math.h)
 * */
  double desvio (double *valores, unsigned int qtd_numeros);
/*
 * Essa funC'C#o retorna a amplitude(diferenC'a entre o maior e o menor nC:mero) dos valores presentes no array.
 * Caso for um array invC!lido, retorna a constante HUGE_VAL (em math.h)
 * */
double amplitude (double *valores, unsigned int qtd_numeros);


/*
 * Essa funC'C#o retorna o valor que estC! localizado em uma "posicao" do array.
 * Caso for um array invC!lido, retorna a constante HUGE_VAL (em math.h).
 * Caso for posiC'C#o invalida, retorna a constante HUGE_VAL (em math.h).
 * */
double valor (double *valores, unsigned int qtd_numeros, unsigned int posicao);

/*
 * Essa funC'C#o retorna o nC:mero que mais se repete e quantas vezes ele aparece (em caso de igualdade, o primeiro encontrado tem preferC*ncia) no array.
 * Retorna dentro de "qtd_repeticao" a quantidade de vezes que o determinado nC:mero se repete no array.
 * Caso for um array invC!lido, retorna a constante HUGE_VAL (em math.h) e ZERO em "qtd_repeticao".
*/
double repetido (double *valores, unsigned int qtd_numeros,
	  unsigned int *qtd_repeticao);

#endif // MEU_PROJETO_H
