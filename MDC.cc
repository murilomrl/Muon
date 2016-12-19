#include <stdlib.h>
#include <stdio.h>

int mdc( int a, int b ) {
    if( b == 0 )
      return a;
    else
      return mdc( b, a % b );
}

int main() {
    int a, b;
    
    printf( "Programa MDC");
    printf( "Digite o primeiro numero:" );
    scanf( "%d", &a );
    printf( "Digite o segundo numero:" );
    scanf( "%d", &b );
    
    printf( "O MDC entre %d e %d é: %d", a, b, mdc( a, b ) );
    
    return 0;
}