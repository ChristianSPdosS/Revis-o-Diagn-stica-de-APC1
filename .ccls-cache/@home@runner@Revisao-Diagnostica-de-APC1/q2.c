#include <stdio.h>

/*
Escreva um algoritmo na linguagem C que percorra um array de 10 inteiros e apresente na tela o menor e o maior valor.
*/

int main(void) {

  int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  
  int maior = arr[0];
  int menor = arr[0];
  for(int i = 1; i<10; i++) {
    if(arr[i] > maior)
      maior = arr[i];
    if(arr[i] < menor)
      menor = arr[i];
  }

  printf("maior: %d, menor: %d\n", maior, menor);
  return 0;
}