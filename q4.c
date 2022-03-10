#include <stdio.h>

/*
Escreva um algoritmo na linguagem C que percorra um array de caracteres e substitua todas as ocorrências de vogais por #
*/


int main(void) {
  char *s = "hello_world";

  int i = 0;
 
  while(s[i] != '\0') {
    
    switch(s[i]) {
      case 'A':  s[i]= '#';
      case 'a':  s[i]= '#';
      case 'E':  s[i]= '#';
      case 'e':  s[i]= '#';
      case 'I':  s[i]= '#';
      case 'i':  s[i]= '#';
      case 'O':  s[i]= '#';
      case 'o':  s[i]= '#';
      case 'U':  s[i]= '#';
      case 'u':  s[i]= '#';
     
    }
  i++;
  }

  printf("%s\n" , s);
 
  
  return 0;
}
