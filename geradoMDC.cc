#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int  MDC(int a, int b ) {
int Retorno;
int tb_1;
int ti_2;
int ti_3;
  tb_1 = b == 0;
  tb_1 = !tb_1;

  if( tb_1 ) goto l_else_1;
  Retorno = a;
  goto l_end_2;
l_else_1:;
  ti_2 = a % b;
  ti_3 = MDC( b, ti_2 );
  Retorno = ti_3;
l_end_2:;
 return Retorno;
}

int main() { 
int Retorno;
int a;
int b;
int ti_4;
  cout << "Programa MDC";
 cout << "\nDigite o primeiro numero: ";
 cin >> a;
 cout << "\nDigite o segundo numero: ";
 cin >> b;
  cout << "\no MDC entre ";
  cout << a;
  cout << " e ";
  cout << b;
  cout << " é: ";
  ti_4 = MDC( a, b );
  cout << ti_4;
  cout << "\n";
}

