#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 1;

    fp = fopen("sample.txt", "r");

    while((ch = fgetc(fp)) != EOF) {
        characters++;

        if(ch == ' ' || ch == '\n')
            words++;

        if(ch == '\n')
            lines++;
    }

    words++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);

    return 0;
}