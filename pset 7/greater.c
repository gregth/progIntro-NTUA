#include <stdio.h>

int maini( ) {
  int a, b;
  scanf( "%d %d", &a, &b );
  if ( a >= b ) {
    printf( "%d\n", a );
  }
  else {
    printf( "%d\n", b );
  }
  return 0;
}
