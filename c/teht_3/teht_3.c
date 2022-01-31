#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char[], char[], char[]);

void main() {
    char s1[100], s2[100];
    char* string;

    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);

    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;

    char* s3 = concat(s1, s2, string);
    s3[strcspn(s3, "@")] = 0;
    printf("%s", s3);
}

char* concat(char s1[], char s2[], char string[]) {
    int i, j;
    i = strlen(s1);
    string = s1;

    for (j = 0; j < strlen(s2); i++, j++) {
        string[i] = s2[j];
    }

    return string;
}