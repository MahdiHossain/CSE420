%option noyywrap

%{
#include<bits/stdc++.h>
using namespace std;


ofstream yyoutlog; //output filestream for log file
string output = "";

int lines = 1;
%}

delim	 [ \t\v\r\n]

letter	 [A-Za-z_] 
digit	 [0-9]

%%

{delim} {}

{letter} {
            output = "A letter is found named \n";
            yyoutlog<<output;
}

{digit} {
            output = "A digit is found named \n";
            yyoutlog<<output;
}

"+"|"-"|"*"|"/" {
            output = "A symbol is found named \n";
            yyoutlog<<output;
}

"=" {
            output = "A operator is found named \n";
            yyoutlog<<output;
}

calculator {
            output = "A operator is found named \n";
            yyoutlog<<output;
}

%%

int main(int argc, char *argv[])

{
    yyin = fopen(argv[1], "r");

    yyoutlog.open("log.txt", ios::trunc);

    yylex();

    yyoutlog.close(); 
	
	fclose(yyin);
}