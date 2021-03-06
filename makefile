all: trabalho testeConcat.mn testeMatriz.mn testeMDC.mn while.mn
	./trabalho < testeConcat.mn > geradotesteConcat.cc
	g++ -o saida1 geradotesteConcat.cc
	./saida1
	./trabalho < testeMatriz.mn > geradotesteMatriz.cc
	g++ -o saida2 geradotesteMatriz.cc
	./saida2
	./trabalho < testeMDC.mn > geradotesteMDC.cc
	g++ -o saida3 geradotesteMDC.cc
	./saida3
	./trabalho < while.mn > geradowhile.cc
	g++ -o saida4 geradowhile.cc
	./saida4

lex.yy.c: trabalho.lex
	lex trabalho.lex

y.tab.c: trabalho.y
	yacc -v trabalho.y

trabalho: lex.yy.c y.tab.c
	g++ -std=c++11 -o trabalho y.tab.c -lfl
