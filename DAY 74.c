#include <stdio.h>

int main() {
    FILE *source, *dest;
    char s[50], d[50];
    int ch;

    scanf("%s", s);
    scanf("%s", d);

    source = fopen(s, "r");
    dest = fopen(d, "w");

    while((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    printf("File copied successfully to %s", d);

    return 0;
}