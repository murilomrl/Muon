Program MDC;

metodo intr MDC( intr a, b)
{
  se b == 0
    Retorno = a
  sen
    Retorno = MDC( b, a Mod b );
}

inicio
Var
	intr a, b;
{
	mostre('Programa MDC');
	leia('\nDigite o primeiro numero: ', a);
	leia('\nDigite o segundo numero: ', b);
	mostre('\no MDC entre ');
	mostre(a);
	mostre(' e ');
	mostre(b);
	mostre(' é: ');
	mostre(MDC(a,b));
	mostre('\n');
}
fim