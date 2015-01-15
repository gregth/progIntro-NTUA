#include <stdio.h>
#include <stdbool.h>

int main( ) {
  int size, M;
  scanf( "%d %d", &size, &M );

  //s[ i ] represents the sum of the first i(th) terms of the sequense.
  int s[ size + 1 ];
  s[ 0 ] = 0;
  int terms[ size ];
  //Read the terms of the sequence
  for ( int i = 0; i < size; i++ ) {
    scanf( "%d", &terms[ i ] );
    s[ i + 1 ] = s[ i ] + terms[ i ];
  }

  if ( s[ size ] < M ) {
    printf( "%d\n", 0 );
  }
  //Calculate all the possibles sums and find
  int maxsum = 0;
  for ( int i = size; i >= 0; i-- ) {
    for ( int j = 0; j <= size; j++ ) {
      int sum =  s[ i ] - s[ j ];
      if ( sum < maxsum )  {
        break;
      }
      else if ( sum % M == 0 && sum > maxsum ) {
        maxsum = sum;
      }
    }
  }
  printf( "%d\n", maxsum );
  return 0;
}
