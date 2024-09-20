#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  if(atoi(argv[2]) != 0){
    int quot = atoi(argv[1]) / atoi(argv[2]);
    printf("%d\n", quot);
    return 0;
  }
  printf("DIV ZERO NOT ALLOWED!\n");
  return 1;
}
