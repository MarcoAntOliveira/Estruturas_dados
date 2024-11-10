
#include "nba.h"
FILE * abre_arquivo (const char *arquivo)
{
  FILE *fp;
  if (arquivo == NULL)
    {
      return 0;
    }

  fp = fopen (arquivo, "r");

  return fp;

}
int fecha_arquivo (FILE * arq)
{

  if (arq == NULL)
    {

      return -1;
    }

  return fclose (arq);
}
double * le_valores (const char *arquivo, unsigned int *qtd_numeros)
{
  if (qtd_numeros == NULL)
    {

      return NULL;

    }
  if (arquivo == NULL)
    {
      *qtd_numeros = 0;
      return NULL;
    }
  int i = 0;
  int countv = 0;

  double *arm;
  double aux;
  FILE *fp = fopen (arquivo, "r");
  if (fp == NULL)
    {

      return NULL;
    }


  while (!feof (fp))
    {


      fscanf (fp, "%lf", &aux);

      countv++;

    }
  rewind (fp);

  arm = (double *) malloc ((countv - 1) * sizeof (double));
  while (!feof (fp))
    {

      fscanf (fp, "%lf", &arm[i]);
      i++;

    }

  *qtd_numeros = countv - 1;
  fclose (fp);
  return arm;

}
double maior (double *valores, unsigned int qtd_numeros)
{
  int i;
  double arm = valores[0];

  if (valores == NULL)
    {
      return HUGE_VAL;
    }

  for (i = 0; i < qtd_numeros; i++)
    {

      if (arm < valores[i])
	{
	  arm = valores[i];
	}
    }

  return arm;
}
double menor (double *valores, unsigned int qtd_numeros)
{
  int i;
  double arm = valores[0];

  if (valores == NULL)
    {
      return HUGE_VAL;
    }
  for (i = 0; i < qtd_numeros; i++)
    {
      if (arm > valores[i])
	{
	  arm = valores[i];
	}
      return arm;
    }
}    
double media (double *valores, unsigned int qtd_numeros)
  {

    int i;
    double med;

    double arm = 0;

    if (valores == NULL)
      {
	return HUGE_VAL;
      }

    for (i = 0; i < qtd_numeros; i++)
      {
	arm = arm + valores[i];



      }
    med = arm / qtd_numeros;


    return med;

  }
double desvio (double *valores, unsigned int qtd_numeros)
  {


    int i;
    double arm1, arm3 = 0;
    double desv;

    for (i = 0; i < qtd_numeros; i++)
      {
	arm1 = 0;

	arm1 = valores[i] - media (valores, qtd_numeros);


	arm1 = pow(arm1, 2);
	arm3 = arm3 + arm1;

      }

    desv = arm3 / qtd_numeros;
    desv = sqrt(arm3);


    return desv;
  }
double amplitude (double *valores, unsigned int qtd_numeros)
{


  double amp;


  if (valores == NULL)
    {
      return HUGE_VAL;
    }

  amp = maior (valores, qtd_numeros) - menor (valores, qtd_numeros);
  return amp;
}
double valor (double *valores, unsigned int qtd_numeros, unsigned int posicao)
{



  if (valores == NULL)
    {

      return HUGE_VAL;
    }
  if (posicao < 0)
    {

      return HUGE_VAL;
    }



  return valores[posicao];
}
double repetido (double *valores, unsigned int qtd_numeros,
	  unsigned int *qtd_repeticao)
{
  int i = 0, j = 0, countr = 0, r;
  if (qtd_repeticao == NULL)
    {
      return HUGE_VAL;
    }
  if (valores == NULL)
    {

      return HUGE_VAL;
    }
  if (qtd_numeros == 0)
    {

      return HUGE_VAL;
    }

  double mais_repete = valores[0];
  int quanto_repete = 1;
  for (i = 0; i < qtd_numeros; i++)
    {
      for (j = 0; j < qtd_numeros; j++)
	{

	  if (valores[i] == valores[j])
	    {
	      countr++;

	    }
	}

      if (quanto_repete < countr)
	{
	  quanto_repete = countr;
	  mais_repete = valores[i];
	}
      countr = 0;
    }
  return mais_repete;
}
