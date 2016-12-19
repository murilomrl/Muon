#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int  printVet(int v[4] ) {
int Retorno;
int k;
int ti_5;
int tb_6;
  k = 0;
  ti_5 = 4;
l_teste_for_2:;
  tb_6 = k >= ti_5;
  if( tb_6 ) goto l_fim_for_3;
int ti_1;
int tb_2;
int tb_3;
int tb_4;
  tb_2 = k >= 0;
  tb_3 = k <= 4;
  tb_4 = tb_2 && tb_3;
  if( tb_4 ) goto l_limite_array_ok_1;
    printf( "Limite de array ultrapassado: %d <= %d <= %d", 0 ,k, 4 );
  cout << endl;
  exit( 1 );
  l_limite_array_ok_1:;
  ti_1 = v[k];
  cout << ti_1;
  cout << endl;
  k = k + 1;
  goto l_teste_for_2;
l_fim_for_3:;
  Retorno = 1;
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
int ti_7;
int tb_8;
int ti_9;
  i = 0;
  ti_7 = 4;
l_teste_for_4:;
  tb_8 = i >= ti_7;
  if( tb_8 ) goto l_fim_for_5;
  v[i] = i;
  i = i + 1;
  goto l_teste_for_4;
l_fim_for_5:;
  ti_9 = printVet( v );
  cout << ti_9;
  cout << endl;
}

