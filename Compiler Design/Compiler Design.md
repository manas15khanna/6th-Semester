# Unit 1: Introduction to Compiler Design 
## Compilers and Interpreters 
- **Compilation:** Translation of a program written in source language into a semantically equivalent program written in a target language.  
- **Interpreter:** Interpreter differs from compiler in that it executes program without explicitly performing a translation. 
	- Interpretation: Performing the operations implied by the source program 
### Advantages and Disadvantages 
- Advantages: 
	- Modification to program during execution 
		- Interactive debugging 
		- not for every language, e.g. Basic, Pascal 
	- Dynamic-typed languages
		- Variable types may change at run time e.g. LISP 
		- Difficult to compile 
	- Better diagnostics 
		- Source code is there to see 
	- Machine Independent 
		- However, the interpreter itself must be portable 
- Disadvantages: 
	- Slower execution due to repeated examination
### Cousins of Compiler 
- Preprocessors 
	- Macro processing 
	- File inclusion 
	- Rational Preprocessors 
### Structure of a Compiler 
- Any compiler must perform two tasks: 
	- Analysis of the source program 
		- This part breaks up the source program into Constituent Pieces 
		- Creates an Intermediate Representation 
	- Synthesis 
- ![[phases.png]]
### Phases of a Compiler 

| Phase                                                                             | Output                                       | Sample                                         |
| --------------------------------------------------------------------------------- | -------------------------------------------- | ---------------------------------------------- |
| Programmer                                                                        | Source string                                | A=B+C;                                         |
| Scanner (Performs lexical analysis)                                               | Token String                                 | 'A', '=', 'B' and all other symbols with names |
| Parser(Performs syntax analysis based on the grammar of the programming language) | Parse Tree or abstract syntax tree           | Generates a tree right to left of the token    |
| Semantic Analyser (Type checking, etc)                                            | Annotated parse tree or abstract syntax tree |                                                |
| Intermediate Code Generator                                                       | Three Address code, quads, or RTL            |                                                |
| Optimizer                                                                         | Three-address code, quads, or RTL            |                                                |
| Code generator                                                                    | Assembly Code                                |                                                |
| Peephole optimizer                                                                | Assembly code                                |                                                |
