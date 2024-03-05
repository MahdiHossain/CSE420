#!/bin/bash

yacc -d -y --debug --verbose syntax_analyzer.y
echo 'Generated the parser C file as well the header file'
g++-13 -w -c -o y.o y.tab.c
echo 'Generated the parser object file'
flex lex_analyzer.l
echo 'Generated the scanner C file'
g++-13 -fpermissive -w -c -o l.o lex.yy.c
# if the above command doesn't work try g++ -fpermissive -w -c -o l.o lex.yy.c
echo 'Generated the scanner object file'
g++-13 y.o l.o
echo 'All ready, running'
./a.exe input.txt