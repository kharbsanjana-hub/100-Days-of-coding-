#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n, max = 0;
    struct Student s[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);

    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[max].marks)
            max = i;
    }

    printf("Topper: %s (Marks: %d)", s[max].name, s[max].marks);

    return 0;
}