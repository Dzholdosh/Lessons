#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
  srand(time(NULL));
  int a[N], i, j, b;
  
  for (i = 0; i < N; i++) {
    a[i] = rand()%500;
    printf("%7d", a[i]);
  }
  printf("\n");
  
  for (i = 0; i < N-1; i++) {
    for (j = 0; j < N-i-1; j++) {
      if (a[j] > a[j+1]) {
        b = a[j];
        a[j] = a[j+1];
        a[j+1] = b;
      }
    }
  }
  for (i = 0; i < N; i++) {
    printf("%7d", a[i]);
  }
  printf("\n");
  return 0;
}
