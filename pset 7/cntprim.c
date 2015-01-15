#include <stdio.h>
#include <stdbool.h>

int main() {
  int n;
  scanf( "%d", &n );
  bool is_prime[ n ];

  //Initializing the is_prime table
  for ( int i = 0; i < n; i++ ) {
    is_prime[ i ] = true;
  }
  is_prime[ 0 ] = false;
  is_prime[ 1 ] = false;

  int counter = 0;
  for ( int i = 2; i <= n; i++ ) {
    if ( is_prime[ i ] ) {
      counter++;
      int multiple = 2 * i;
      while ( multiple <= n ) {
        is_prime[ multiple ] = false;
        multiple += i;
      }
    }
  }
  printf( "%d\n", counter );
}
