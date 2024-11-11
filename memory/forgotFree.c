#include <stdio.h>
#include <stdlib.h>

int main(){
  int* n = malloc(10);
  printf("uhhh i mightve forgoteen to free n\n");
  return 0;
}