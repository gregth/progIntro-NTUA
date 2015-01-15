#include <stdio.h>

int maini( ) {

  int n;
  scanf( "%d", &n );
  long pows2[ n ];
  long pows3[ n ];
  long pows5[ n ];

  long power = 1;
  while ( power <= n ) {
    power *= 2;
  }
  return 0;
}
