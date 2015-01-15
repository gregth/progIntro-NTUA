#include <stdio.h>

void swap( int *a, int *b ) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  signed int size;
  scanf( "%i ", &size );
  int terms[ size ];
  for ( int i = 0; i < size; i++ ) {
    scanf( "%d", &terms[ i ] );
  }
  printf( "hi");
  int total_swaps = 0;
  int swaps = 0;
  do {
    swaps = 0;
    int i = 0;
    while ( i <= size - 2 ) {
      if ( terms[ i ] * terms[ i + 1 ] < 0 ) {
        swap( &terms[ i ], &terms[ i + 1 ] );
        swaps++;
        total_swaps++;
      }
      else {
        i++;
      }
    }
  }
  while ( swaps > 0 );
  printf( "%d\n%d\n%d\n", total_swaps, terms[ 0 ], terms[ size - 1 ]  );
}
