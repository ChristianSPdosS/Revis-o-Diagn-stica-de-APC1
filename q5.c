#include <stdio.h>

/*
Escreva um algoritmo na linguagem C que verifica se um array de caracteres contém números.
*/


int main(void) {
  char *s = "hello_world123";

  int i = 0;
  int num = 0;
  while(s[i] != '\0') {
    
    switch(s[i]) {
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case '0':
        num = 1;
    }
    if(num) {
      break;
    }
    i++;
  }

  printf(" tem numero?\n ");
  if (num ==1){
    printf("sim, tem numero\n");
  } else{
    printf("não tem numero\n");
  }
  
  return 0;
}
/*
int main(){

 char str[]={"Oi 1234"};

int i=0;
while(str[i] != '\0'){
  if(str[i] >= '0' && str[i] <=9){
    contem_numeros=1;
    break;
  }
  i++
}
if(contem_numeros){
  printf("'%s' contem numeros!\n" , str;)
  }
  return 0;
  

  } */