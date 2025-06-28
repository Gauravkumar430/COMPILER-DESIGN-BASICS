#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const char *keywords[] = {
    "int", "float", "if", "else", "while", "return", "for", "char", "double", "void"
};

int isKeyword(const char *word) {
    for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++) {
        if (strcmp(keywords[i], word) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' || ch == '<' || ch == '>');
}

void analyzeLexically(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Failed to open file.\n");
        return;
    }

    char ch, buffer[100];
    int i = 0;

    printf("\n--- Lexical Analysis Output ---\n");

    while ((ch = fgetc(file)) != EOF) {
        if (isalnum(ch)) {
            buffer[i++] = ch;
        } else if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (i != 0) {
                buffer[i] = '\0';
                if (isKeyword(buffer))
                    printf("Keyword: %s\n", buffer);
                else
                    printf("Identifier: %s\n", buffer);
                i = 0;
            }
        } else if (isOperator(ch)) {
            if (i != 0) {
                buffer[i] = '\0';
                if (isKeyword(buffer))
                    printf("Keyword: %s\n", buffer);
                else
                    printf("Identifier: %s\n", buffer);
                i = 0;
            }
            printf("Operator: %c\n", ch);
        }
    }

    // If anything remains in buffer
    if (i != 0) {
        buffer[i] = '\0';
        if (isKeyword(buffer))
            printf("Keyword: %s\n", buffer);
        else
            printf("Identifier: %s\n", buffer);
    }

    fclose(file);
}

int main() {
    const char *filename = "input.txt";

    printf("Reading from file: %s\n", filename);

    analyzeLexically(filename);

    return 0;
}
