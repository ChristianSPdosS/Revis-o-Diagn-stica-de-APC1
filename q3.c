#include <stdio.h>

/*
Escreva um algoritmo na linguagem C que verifica se um array de caracteres contém vogais. 
*/


int main(void) {
  char *s = "hello_world";

  int i = 0;
  int e_vogal = 0;
  while(s[i] != '\0') {
    
    switch(s[i]) {
      case 'A':
      case 'a':
      case 'E':
      case 'e':
      case 'I':
      case 'i':
      case 'O':
      case 'o':
      case 'U':
      case 'u':
        e_vogal = 1;
    }
    if(e_vogal) {
      break;
    }
    i++;
  }

  printf(" tem vogal?\n ");
  if (e_vogal ==1){
    printf("sim, tem vogal\n");
  } else{
    printf("não tem vogal\n");
  }
  
  return 0;
}