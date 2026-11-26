#include <stdio.h>

enum choice { ADD, SUBTRACT, MULTIPLY };

int main() {
    int a = 10, b = 20;
    enum choice ch = ADD;

    switch(ch) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}