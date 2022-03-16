#include <stdio.h>

/*
Escreva um algoritmo na linguagem C que percorra um array de caracteres e substitua todas as ocorrências de vogais por #
*/


int main(void) {
  char s[]= "hello_world";

  int i = 0;
 
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
      case 'u':  
       s[i]='#';
    }
  i++;
  }

  printf("%s\n" , s);
 
  
  return 0;
}
