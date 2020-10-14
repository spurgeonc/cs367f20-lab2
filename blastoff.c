#include<stdio.h>
#include <stdlib.h>

int main(void) {
  const int TIME_TO_LAUNCH = 10;
  for (int i = TIME_TO_LAUNCH; i >=0; i--){
    printf("%i\n", i);
  }
  printf("BLAST OFF\n");
  return EXIT_SUCCESS;
}
