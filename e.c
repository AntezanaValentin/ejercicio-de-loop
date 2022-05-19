#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
  srand(time(NULL));
  int i = 0;
  while (true){
    int r = rand() % 100;
    printf(" %d",  r);
    i++;
  }
  printf("\n");
  return 0;
}
