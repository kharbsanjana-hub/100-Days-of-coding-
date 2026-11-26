#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "a");

    fgets(text, 100, stdin);

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}