#include <stdio.h>
#include <stdlib.h>

int is_number(const char *str){
  char *endptr;
  double value = strtod(str, &endptr);

  if(endptr == str){
    return 0;
  }
  return 1;
}

int main(int argc, char *argv[]){
  if(is_number(argv[1]) == 0 || is_number(argv[2]) == 0){
    printf("ERROR\n");
    return 1;
  }
  if(atoi(argv[2]) != 0){
    int quot = atoi(argv[1]) / atoi(argv[2]);
    printf("%d\n", quot);
    return 0;
  }
  printf("DIV ZERO NOT ALLOWED!\n");
  return 1;
}
