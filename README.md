# COMPILER-DESIGN-BASICS

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: GAURAV KUMAR

*INTERN ID*: CT04DF963

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

*DESCRIPTION*: Lexical analysis is the very first phase of a compiler, and it is also one of the most critical steps in the process of compiling any programming language. The primary job of a lexical analyzer (also known as a scanner or tokenizer) is to read the source code and break it into meaningful elements called tokens. These tokens are then passed on to the parser for syntactic analysis. In this project, we aim to build a simple lexical analyzer in C that can identify keywords, operators, and identifiers from a given input file.

Understanding the Purpose
Before diving into the implementation, it is essential to understand what each of these components represents:

Keywords: These are reserved words in the programming language that have special meaning. Examples in C include int, float, if, else, return, etc. A lexical analyzer should be able to distinguish these from normal identifiers.

Operators: These are symbols used to perform operations on variables and values. Examples include +, -, *, /, =, ==, !=, etc.

Identifiers: These are names used by programmers to identify variables, functions, arrays, etc. They usually consist of a combination of letters, digits, and underscores but must not start with a digit.

Working Mechanism
The lexical analyzer works by reading the input file character by character. As it reads through the input, it constructs strings (known as lexemes) and compares them against known patterns or a list of predefined keywords and operators.

The process involves the following steps:

Reading Input: The program opens a source code file (e.g., input.c) using file handling in C and reads its contents line by line or character by character.

Identifying Tokens:

When a word is formed (a sequence of letters and/or digits), the analyzer checks whether it matches any keyword from the predefined list.

If it matches, it is identified as a keyword.

If it doesn’t match any keyword but follows the correct naming conventions, it is classified as an identifier.

Any symbol from the list of known operators (like +, -, =, etc.) is identified as an operator.

Using Character Categories:

The program checks whether the current character is a letter (using isalpha()), a digit (isdigit()), whitespace (isspace()), or a special character.

This categorization helps in understanding when a new token starts and when the current token ends.

Using String Functions: To compare strings, store tokens, and print results, functions like strcmp(), strcpy(), and string buffers are used.

Output: For each token found, the program prints the type of token (Keyword / Identifier / Operator) along with the actual lexeme. This helps the user visually understand how the code is being tokenized.

Features of the Lexical Analyzer
Simplicity: The analyzer is built to demonstrate the basic concepts of lexical analysis without involving complex concepts like regular expressions or finite automata.

Efficiency: It reads the input file once and identifies tokens in a single pass using simple comparisons and lookups.

Scalability: Although this program handles only keywords, identifiers, and operators, it can be extended to support literals, delimiters, comments, and more complex token types.

Educational Purpose: This analyzer is especially useful for students and beginners to understand how compilers start interpreting code and transforming it into meaningful structures.

Sample Output Illustration
Let’s suppose the input file (input.c) contains the following code:

c
Copy
Edit
int a = 5;
if (a == 5) {
    a = a + 1;
}
After running the lexical analyzer, the output might be:

makefile
Copy
Edit
Keyword: int
Identifier: a
Operator: =
Identifier: 5
Keyword: if
Operator: (
Identifier: a
Operator: ==
Identifier: 5
Operator: )
Operator: {
Identifier: a
Operator: =
Identifier: a
Operator: +
Identifier: 1
Operator: ;
Operator: }
Conclusion
In conclusion, this lexical analyzer demonstrates the foundational role of tokenization in the compilation process. By identifying keywords, operators, and identifiers, it mimics what real compilers do in their initial stages. While this is a simplified version of what actual lexical analyzers perform (which often use tools like Lex or Flex), the core idea remains the same. This project not only helps in understanding compiler design but also strengthens the grasp of file handling, string processing, and logic implementation in C programming.

*OUTPUT*: 
