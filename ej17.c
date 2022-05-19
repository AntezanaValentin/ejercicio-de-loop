#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int r = (rand() % 100) + 1 + 3;
  printf("%d\n", r);
  if(r % n == 3) {
    printf("Si da resto 3 \n");
  }else{
      int resto = r % n;
      printf("No da resto 3 \n");
      printf("resto: %d\n", resto);
    }
    return 0;
  }
