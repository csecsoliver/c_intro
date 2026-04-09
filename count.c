#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_LENGTH 1024

int main(int argc, char **argv) {
    char *fileName;
    if (argc == 2) {
        fileName = argv[1];
    }
    else {
        fileName = "repeated.txt";
    }
    FILE *fp = fopen(fileName, "r");
    if (fp == NULL) {
        return 1;
    }
    char buffer[LINE_LENGTH];
    int lines = 0, words = 0;
    char lastChar = ' ';
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        lines++;
        for (size_t i = 0; buffer[i] != '\0'; i++) {
            const char c = buffer[i];
            if ((c == ' ' || c == '\n') && lastChar != ' ' && lastChar != '\n') {
                words++;
            }
            lastChar = c;
        }
    }
    if (lastChar != ' ' && lastChar != '\n')
    {
        words++;
    }
    fclose(fp);
    printf("%d words\n", words);
    printf("%d lines\n", lines);
}
