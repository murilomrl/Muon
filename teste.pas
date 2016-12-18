Program HelloWorld;

metodo intr MDC( intr *a, b; real teste )
Var intr k;
{
  se a Mod b == 0
    Retorno = b
  sen
    Retorno = MDC( b, a Mod b, 1.0 );
}

inicio
Var 
intr i, Retorno;
booleano x;
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
  leia('Escreva:', i);
  mostre(i);
  mostre( MDC( @i, 32, 1.0) );
}
fim
