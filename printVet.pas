Program HelloWorld;

metodo intr printVet( Array intr v[4] )
Var intr k;
{
  para k=0;k<4
  {
    mostre(v[k]);
  };
    Retorno = 1;
}

inicio
Var 
intr i;
Array intr v[4];
Array intr m,n,o[5][5];
booleano x;
str a,b,c;
{
  para i=0;i<4
  {
    v[i]=i;
  };
  mostre(printVet(v));
}
fim
