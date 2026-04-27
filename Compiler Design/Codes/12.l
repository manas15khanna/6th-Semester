%{
#include <stdio.h>
%}

%%
int|float|char|double|return|if|else|while|for   { printf("KEYWORD: %s\n", yytext); }

\+|\-|\*|\/|\%                                  { printf("ARITHMETIC OPERATOR: %s\n", yytext); }

==|!=|<=|>=|<|>                                 { printf("RELATIONAL OPERATOR: %s\n", yytext); }

=                                               { printf("ASSIGNMENT OPERATOR: %s\n", yytext); }

;|,|\(|\)|\{|\}                                 { printf("SPECIAL SYMBOL: %s\n", yytext); }

[0-9]+                                          { printf("NUMBER: %s\n", yytext); }

[a-zA-Z_][a-zA-Z0-9_]*                          { printf("IDENTIFIER: %s\n", yytext); }

[ \t\n]+                                        { /* ignore whitespace */ }

.                                               { printf("UNKNOWN: %s\n", yytext); }

%%

int main() {
    printf("Enter input:\n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
