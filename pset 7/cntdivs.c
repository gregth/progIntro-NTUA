#include <stdio.h>

int main( ) {
  int n;
  scanf( "%d", &n );
  int factors[ n ];
  int b = n;


  // Find the prime factors of number n and store them in table factors[ n ]
  int length = 0;
  int i = 2;
  while ( i <= n && n > 0 ) {
    if ( n  % i == 0 ) {
        factors[ length ] = i;
        length++;
        while ( n % i == 0 ) {
          n /= i;
        }
    }
    i++;
  }


  n = b;
  int counter = 0;
  //Find which numbers from 2 to n have common dividers with number n.
  for ( int number = 2; number <= n; number++ ) {
      //Check if the number is accepted.
      for( int j = 0; j < length; j++) {
        if ( number % factors[ j ] == 0 ) {
          counter++;
          break;
        }
      }
  }
  printf( "%d\n", counter );
  return 0;
}
