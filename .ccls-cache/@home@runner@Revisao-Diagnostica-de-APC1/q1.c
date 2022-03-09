#include <stdio.h>

/*
Escreva um algoritmo na linguagem C que percorra um array de 5 notas: 7, 3, 6, 8, 5 e apresente na tela a média dessas notas.
*/

int main(void) {

  int vet[] = {7, 3, 6, 8, 5};
  // indices   0  1  2  3  4
  int n = 5, soma = 0;

  for(int i = 0; i < n; i++) {
    soma = soma + vet[i];
  }

  float media = (float)soma/n;

  printf("media das notas: %.2f\n", media);
  return 0;
}