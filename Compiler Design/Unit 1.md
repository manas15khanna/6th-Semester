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
## Grouping of phases of compiler 
### Compiler front and back ends:
- Front end: Analysis(Machine Independent) The front end consists of those phases that depends primarily on the source language and are largely independent of the target machine. 
- Normally, Lexical and Syntatic Analysis, symbol table, semantic analysis and Intermediate code. Some code optimization can also be found on the front end. 
## Compiler Construction Tools 
- Scanner Generators generate lexical analyzers based on regular expression 
- parser generators 
- Syntax Directed translation engines produce collections of routines that walk the parse tree, generating intermediate code 
- Automatic code generators translate each operation of IR into machine language of target machine 
- Data flow engines help in gathering the information how values are transmitted from One part of a program to each other part. 
# Finite Automata 
An automation with a finite number of states is called a **Finite Automation** (FA) of **Finite State Machine** (FSM)
Components of a Finite Automata: 
- **Input:** A string fed to a machine which the machine will determine whether it is part of the language or not. An input is read by the machine in a forward fashion, one symbol at a time. 
- **Return:** The results of running the machine on a given input. Initially, this will either be accepted or rejected, indicating whether the input string is respectively part of the language or not. 
- **State:** A resting place while the machine reads more input, if more input is available. States are typically named. State names must be unique. Graphically, states are represented by a circle with the name inside. 
- **Start State:** It is the state that the machine naturally starts in before it reads any input. The name for the start state will usually either be $S$ or $q_0$. 
