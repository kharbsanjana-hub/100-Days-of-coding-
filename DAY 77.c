#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    while((ch = fgetc(in)) != EOF) {
        ch = toupper(ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("File converted successfully.");

    return 0;
}