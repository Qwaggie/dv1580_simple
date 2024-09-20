#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int diff = atoi(argv[1]) - atoi(argv[2]);
  printf("%d\n", diff);
  return 0;
}
