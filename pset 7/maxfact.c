#include <stdio.h>

int main() {
  int n;
  scanf( "%d", &n );
  int factorial = 1;
  int i;
  for ( i = 1; factorial <= n; i++ ) {
    factorial *= i;
  }
  printf( "%d\n", i );
  return 0;
}

