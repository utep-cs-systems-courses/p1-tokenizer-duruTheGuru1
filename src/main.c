#include "tokenizer.h"
#include <stdio.h>
int main(){

 
  char *lie = " a";
  char *les = " ";
  char *lrk = " hello guys";
  char *dll = token_start(lrk);
  char *sf2 = token_terminator(dll);
  int ha = space_char(*lie);
  int haha = non_space_char(*lie);

  printf("%s, \n", dll);
  printf("%s\n", sf2);
  
  //to traverse a char, you use ++; to increment. Ex. str = "my_mom!" str++; "y_mom"
  
  return 0;
}
