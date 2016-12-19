#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


int main() { 
int Retorno;
int i;
int ti_2;
int tb_3;
  i = 0;
ti_2 = 10;
l_teste_while_1:;
  tb_3 = i >= ti_2;
  if( tb_3 ) goto l_fim_while_2;
int ti_1;
  cout << i;
  cout << "\n";
  ti_1 = i + 1;
  i = ti_1;
  goto l_teste_while_1;
l_fim_while_2:;
}

