#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int  MDC(int *a, int b, double teste ) {
int Retorno;
int k;
int ti_1;
int tb_2;
int ti_3;
int ti_4;
  ti_1 = a % b;
  tb_2 = ti_1 == 0;
  tb_2 = !tb_2;

  if( tb_2 ) goto l_else_1;
  Retorno = b;
  goto l_end_2;
l_else_1:;
  ti_3 = a % b;
  ti_4 = MDC( b, ti_3, 1.0 );
  Retorno = ti_4;
l_end_2:;
 return Retorno;
}

int main() { 
int Retorno;
int i;
int Retorno;
int x;
int ti_5;
int tb_6;
int ti_8;
int tb_9;
int ti_10;
  i = 0;
  ti_5 = 10;
l_teste_for_3:;
  tb_6 = i > ti_5;
  if( tb_6 ) goto l_fim_for_4;
  cout << i;
  cout << endl;
  i = i + 1;
  goto l_teste_for_3;
l_fim_for_4:;
ti_8 = 20;
l_teste_while_5:;
  tb_9 = i >= ti_8;
  if( tb_9 ) goto l_fim_while_6;
int ti_7;
  cout << i;
  cout << endl;
  ti_7 = i + 1;
  i = ti_7;
  goto l_teste_while_5;
l_fim_while_6:;
 cout << "Escreva:";
 cin >> i;
  cout << i;
  cout << endl;
  ti_10 = MDC( &i, 32, 1.0 );
  cout << ti_10;
  cout << endl;
}

