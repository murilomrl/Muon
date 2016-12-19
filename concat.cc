#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;


string formata( string a, string b ) {
  if( a > b ) // Se você não implementou o operador relacional para strings, use a função strcmp.
      return "Sr(a). " + a + " " + b;
  else
      return "Mr(s). " + b + ", " + a;
}


int main() {
    string nomes[2]; // Se você não implementou arrays de strings, use duas variáveis.
    
    cout<< "Digite o seu nome: ";
    cin >> nomes[0];
    
    cout << "Digite o seu sobrenome: ";
    cin >> nomes[1];
   
    cout << endl;
    
    cout << "Bom dia, " << formata( nomes[0], nomes[1] ) << endl;
    cout << "Bom dia, " << formata( " " + nomes[0], nomes[1] ) << endl;
    cout << "Bom dia, " << formata( nomes[0], " " + nomes[1] ) << endl;
    
    return 0;
}