Program HelloWorld;

metodo intr MDC( intr a, b; real teste )
Var intr k;
{
  se a Mod b == 0
    Retorno = b
  sen
    Retorno = MDC( b, a Mod b, 1.0 );
}

inicio
Var 
intr i;
Array intr v[4];
Array intr m,n,o[5][5];
booleano x;
str a,b,c;
{
  para i=0;i<=10
  {
    mostre(i);
  };
  enquanto i<20
  {
    mostre(i);
    i=i+1;
  };
  v[0]=1;
  mostre('1dim');
  mostre(v[0]);
  m[0][0]=1000;
  n[0][0]=3;
  o[0][0]=m[0][0]*n[0][0];	
  mostre('2dim');
  mostre(o[0][0]);
  leia('Escreva:', i);
  mostre(i);
  a='oi';
  b=' tudo bem?';
  c= a + b;
  mostre(c);
  
  x=5<4;
  mostre(x);
  mostre( MDC( 40, 32, 1.0) );
}
fim
