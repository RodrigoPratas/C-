//
// Created by rodrigo on 2/9/23.
//

#include "stdio.h"

int main( void ){
    int n, n0, count;
    count=0; //inicialmente a 0

    printf("Type the number : ");
    scanf("%d", &n);
    n0=n;
    if( n == 0 ) { count=1;  }
    if( n <  0 ) { n=n*(-1); }
    while( n>0 ) {
        ++count;
        n = n / 10;
    }
    printf("The number n=%d has %d digits\n", n0, count);
    return 0;
}
