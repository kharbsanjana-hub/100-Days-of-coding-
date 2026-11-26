#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    scanf("%s", name);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}