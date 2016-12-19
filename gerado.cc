#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int  MDC(int a, int b, double teste ) {
int Retorno;
int k;
int ti_1;
int tb_2;
int ti_3;
int ti_4;
  tb_2 = !tb_2;

  if( tb_2 ) goto l_else_1;
  Retorno = b;
  goto l_end_2;
l_else_1:;
  ti_4 = MDC( b, ti_3, 1.0 );
  Retorno = ti_4;
l_end_2:;
 return Retorno;
}

int main() { 
int Retorno;
int i;
int v[4];
int m[25];
int n[25];
int o[25];
int x;
char a[256];
char b[256];
char c[256];
int ti_5;
int tb_6;
int ti_8;
int tb_9;
int ti_10;
int tb_11;
int tb_12;
int tb_13;
int ti_14;
int tb_15;
int tb_16;
int tb_17;
int ti_18;
int tb_19;
int tb_20;
int tb_21;
int ti_22;
int ti_23;
int tb_24;
int tb_25;
int tb_26;
char ts_27[256];
int tb_28;
int ti_29;
  i = 0;
  ti_5 = 10;
l_teste_for_3:;
  tb_6 = i > ti_5;
  if( tb_6 ) goto l_fim_for_4;
  cout << i;
  i = i + 1;
  goto l_teste_for_3;
l_fim_for_4:;
ti_8 = 20;
l_teste_while_5:;
  tb_9 = i >= ti_8;
  if( tb_9 ) goto l_fim_while_6;
int ti_7;
  cout << i;
  i = ti_7;
  goto l_teste_while_5;
l_fim_while_6:;
  v[0] = 1;
  cout << "1dim";
  tb_11 = 0 >= 0;
  tb_12 = 0 <= 4;
  tb_13 = tb_11 && tb_12;
  if( tb_13 ) goto l_limite_array_ok_7;
    printf( "Limite de array ultrapassado: %d <= %d <= %d", 0 ,0, 4 );
  cout << endl;
  exit( 1 );
  l_limite_array_ok_7:;
  ti_10 = v[0];
  cout << ti_10;
  m[0*0+0] = 1000;
  n[0*0+0] = 3;
  o[0*0+0] = ti_22;
  cout << "2dim";
  tb_24 = 0 >= 0;
  tb_25 = 0 <= 25;
  tb_26 = tb_24 && tb_25;
  if( tb_26 ) goto l_limite_array_ok_10;
    printf( "Limite de array ultrapassado: %d <= %d <= %d", 0 ,0, 25 );
  cout << endl;
  exit( 1 );
  l_limite_array_ok_10:;
  ti_23 = o[0*0+0];
  cout << ti_23;
 cout << "Escreva:";
 cin >> i;
  cout << i;
  strncpy( a, "oi", 256 );
  strncpy( b, " tudo bem?", 256 );
  strncpy( ts_27, a, 256 );
  strncat( ts_27, b, 256 );
  strncpy( c, ts_27, 256 );
  cout << c;
  x = tb_28;
  cout << x;
  ti_29 = MDC( 40, 32, 1.0 );
  cout << ti_29;
}

