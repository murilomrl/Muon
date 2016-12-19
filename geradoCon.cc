#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

char * formata(char a[256], char b[256] ) {
char Retorno[256];
int tb_1;
char ts_2[256];
char ts_3[256];
char ts_4[256];
char ts_5[256];
char ts_6[256];
char ts_7[256];
if(strncmp( a, b, 256 )>0)	tb_1=true;
else 	tb_1=false;
  tb_1 = !tb_1;

  if( tb_1 ) goto l_else_1;
  strncpy( ts_2, "Sr(a). ", 256 );
  strncat( ts_2, a, 256 );
  strncpy( ts_3, ts_2, 256 );
  strncat( ts_3, " ", 256 );
  strncpy( ts_4, ts_3, 256 );
  strncat( ts_4, b, 256 );
  strncpy( Retorno, ts_4, 256 );
  goto l_end_2;
l_else_1:;
  strncpy( ts_5, "Mr(s). ", 256 );
  strncat( ts_5, b, 256 );
  strncpy( ts_6, ts_5, 256 );
  strncat( ts_6, ", ", 256 );
  strncpy( ts_7, ts_6, 256 );
  strncat( ts_7, a, 256 );
  strncpy( Retorno, ts_7, 256 );
l_end_2:;
 return Retorno;
}

int main() { 
int Retorno;
char nome[256];
char sobrenome[256];
char resultado[256];
char ts_8[256];
char ts_9[256];
char ts_10[256];
char ts_11[256];
char ts_12[256];
char ts_13[256];
char ts_14[256];
char ts_15[256];
 cout << "Digite o seu nome: ";
 cin >> nome;
 cout << "Digite o seu sobrenome: ";
 cin >> sobrenome;
strncpy( ts_8,formata( nome, sobrenome ),256);
  strncpy( resultado, ts_8, 256 );
  strncpy( ts_9, "Bom dia, ", 256 );
  strncat( ts_9, resultado, 256 );
  strncpy( resultado, ts_9, 256 );
  cout << resultado;
  cout << "\n";
  strncpy( ts_10, " ", 256 );
  strncat( ts_10, nome, 256 );
strncpy( ts_11,formata( ts_10, sobrenome ),256);
  strncpy( resultado, ts_11, 256 );
  strncpy( ts_12, "Bom dia, ", 256 );
  strncat( ts_12, resultado, 256 );
  strncpy( resultado, ts_12, 256 );
  cout << resultado;
  cout << "\n";
  strncpy( ts_13, " ", 256 );
  strncat( ts_13, sobrenome, 256 );
strncpy( ts_14,formata( nome, ts_13 ),256);
  strncpy( resultado, ts_14, 256 );
  strncpy( ts_15, "Bom dia, ", 256 );
  strncat( ts_15, resultado, 256 );
  strncpy( resultado, ts_15, 256 );
  cout << resultado;
  cout << "\n";
}

