%{
#include <string.h>
char* troca_aspas( char* lexema );

%}

DELIM   [\t ]
LINHA   [\n]
NUMERO  [0-9]
LETRA   [A-Za-z_]
INT     {NUMERO}+
DOUBLE  {NUMERO}+("."{NUMERO}+)?
ID      {LETRA}({LETRA}|{NUMERO})*
CSTRING "'"([^\n']|"''")*"'"

COMMENT "(*"([^*]|"*"[^)])*"*)"

%%

{LINHA}    { nlinha++; }
{DELIM}    {}
{COMMENT}  {}

"Var"      { yylval = Atributos( yytext ); return TK_VAR; }
"Program"  { yylval = Atributos( yytext ); return TK_PROGRAM; }
"{"    { yylval = Atributos( yytext ); return TK_BEGIN; }
"}"      { yylval = Atributos( yytext ); return TK_END; }
"inicio"    { yylval = Atributos( yytext ); return TK_MAININ; }
"fim"      { yylval = Atributos( yytext ); return TK_MAINFIM; }
"mostre"  { yylval = Atributos( yytext ); return TK_WRITELN; }
"leia"  { yylval = Atributos( yytext ); return TK_READ; }
"se"       { yylval = Atributos( yytext ); return TK_IF; }
"Then"     { yylval = Atributos( yytext ); return TK_THEN; }
"sen"     { yylval = Atributos( yytext ); return TK_ELSE; }
"para"      { yylval = Atributos( yytext ); return TK_FOR; }
"enquanto"      { yylval = Atributos( yytext ); return TK_WHILE; }
"To"       { yylval = Atributos( yytext ); return TK_TO; }
"Do"       { yylval = Atributos( yytext ); return TK_DO; }
"Array"    { yylval = Atributos( yytext ); return TK_ARRAY; }
"Of"       { yylval = Atributos( yytext ); return TK_OF; }
"metodo" { yylval = Atributos( yytext ); return TK_FUNCTION; }
"Mod"      { yylval = Atributos( yytext ); return TK_MOD; }


".."       { yylval = Atributos( yytext ); return TK_PTPT; }
"="       { yylval = Atributos( yytext ); return TK_ATRIB; }
"<="       { yylval = Atributos( yytext ); return TK_MEIG; }
">="       { yylval = Atributos( yytext ); return TK_MAIG; }
"<>"       { yylval = Atributos( yytext ); return TK_DIF; }
"=="       { yylval = Atributos( yytext ); return TK_IG; }
"And"       { yylval = Atributos( yytext ); return TK_AND; }


{CSTRING}  { yylval = Atributos( troca_aspas( yytext ), Tipo( "string" ) ); 
             return TK_CSTRING; }
{ID}       { yylval = Atributos( yytext ); return TK_ID; }
{INT}      { yylval = Atributos( yytext, Tipo( "int" ) ); return TK_CINT; }
{DOUBLE}   { yylval = Atributos( yytext, Tipo( "double" ) ); return TK_CDOUBLE; }

.          { yylval = Atributos( yytext ); return *yytext; }

%%

char* troca_aspas( char* lexema ) {
  int n = strlen( lexema );
  lexema[0] = '"';
  lexema[n-1] = '"';
  
  return lexema;
}

 


