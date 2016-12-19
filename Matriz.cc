#include <stdlib.h>
#include <stdio.h>

int seed = 5323;

int pseudo_random() {
    int aux;
    
    seed = (8253729 * seed + 2396403); 

    aux = (seed % 32767 + 32767) % 32767;
    return aux;  
}

// Lembre-se de que se os limites da matriz c forem ultrapassados o programa deve abortar. EM C isso não ocorre.
void multiplica( double a[3][4], double b[4][2], int lin_a, int col_a, int lin_b, int col_b, double c[3][2] ) {
    int i, j, k;
    
    if( lin_b != col_a ) {
        printf( "Matrizes incompativeis para multiplicação\n" );
        exit(0);
    }
    
    for( i = 0; i < lin_a; i++ )
        for( j = 0; j < col_b; j++ ) {
            c[i][j] = 0;
            
            for( k = 0; k < lin_b; k++ )
              c[i][j] = c[i][j] + a[i][k] * b[k][j];    
        }
    
}

void imprime( double m[3][2], int l, int c ) {
    int i, j;
    
    for( i = 0; i < l; i++ ) {
        printf( "\n" );
        for( j = 0; j < c; j++ )
            printf( "%0.0lf \t", m[i][j] );
    }
}

int main() {
    double a[3][4], b[4][2], c[3][2];
    int i, j, k;
    
    for( i = 0; i < 3; i++ )
        for( j = 0; j < 4; j++ ) 
            a[i][j] = (pseudo_random() % 10);
            
    for( i = 0; i < 4; i++ )
        for( j = 0; j < 2; j++ ) 
            b[i][j] = (pseudo_random() % 10);
    
    multiplica( a, b, 3, 4, 4, 2, c );
    
    imprime( c, 3, 2 );
    imprime( c, 3, 3 ); // Deve dar erro de limites de array
    
    
    return 0;
}